
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int sts_cont_entry_t ;
struct sts_entry_fx00 {scalar_t__ entry_status; int entry_type; } ;
struct TYPE_4__ {int online; } ;
struct scsi_qla_host {TYPE_1__ flags; } ;
struct rsp_que {scalar_t__ ring_index; scalar_t__ length; int * rsp_q_out; int req; TYPE_2__* ring_ptr; TYPE_2__* ring; scalar_t__ rsp_pkt; } ;
struct ioctl_iocb_entry_fx00 {int dummy; } ;
struct abort_iocb_entry_fx00 {int dummy; } ;
struct TYPE_5__ {int signature; } ;
typedef TYPE_2__ response_t ;





 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;


 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (scalar_t__,TYPE_2__*,int) ;
 int FUNC_3 (int ,struct scsi_qla_host*,int,char*,int,scalar_t__) ;
 int VAR_1 ;
 int FUNC_4 (struct scsi_qla_host*,int ,struct abort_iocb_entry_fx00*) ;
 int FUNC_5 (struct scsi_qla_host*,struct rsp_que*,struct sts_entry_fx00*,scalar_t__,int) ;
 int FUNC_6 (struct scsi_qla_host*,int ,struct ioctl_iocb_entry_fx00*) ;
 int FUNC_7 (struct scsi_qla_host*,struct rsp_que*,struct sts_entry_fx00*) ;
 int FUNC_8 (struct rsp_que*,int *) ;
 int FUNC_9 (struct scsi_qla_host*,struct rsp_que*,struct sts_entry_fx00*) ;
 int FUNC_10 () ;

__attribute__((used)) static void
FUNC_11(struct scsi_qla_host *VAR_2,
 struct rsp_que *VAR_3)
{
 struct sts_entry_fx00 *VAR_4;
 response_t *VAR_5;

 if (!VAR_2->flags.online)
  return;

 while (FUNC_0(&(VAR_3->ring_ptr->signature)) !=
     VAR_0) {
  VAR_5 = VAR_3->ring_ptr;
  FUNC_2(VAR_3->rsp_pkt, VAR_5, sizeof(VAR_3->rsp_pkt));
  VAR_4 = (struct sts_entry_fx00 *)VAR_3->rsp_pkt;

  VAR_3->ring_index++;
  if (VAR_3->ring_index == VAR_3->length) {
   VAR_3->ring_index = 0;
   VAR_3->ring_ptr = VAR_3->ring;
  } else {
   VAR_3->ring_ptr++;
  }

  if (VAR_4->entry_status != 0 &&
      VAR_4->entry_type != 131) {
   FUNC_5(VAR_2, VAR_3,
       (struct sts_entry_fx00 *)VAR_4, VAR_4->entry_status,
       VAR_4->entry_type);
   goto next_iter;
   continue;
  }

  switch (VAR_4->entry_type) {
  case 128:
   FUNC_9(VAR_2, VAR_3, VAR_4);
   break;

  case 129:
   FUNC_8(VAR_3, (sts_cont_entry_t *)VAR_4);
   break;

  case 130:
   FUNC_7(VAR_2, VAR_3, VAR_4);
   break;

  case 132:
   FUNC_4(VAR_2, VAR_3->req,
      (struct abort_iocb_entry_fx00 *)VAR_4);
   break;

  case 131:
   FUNC_6(VAR_2, VAR_3->req,
       (struct ioctl_iocb_entry_fx00 *)VAR_4);
   break;
  default:

   FUNC_3(VAR_1, VAR_2, 0x5081,
       "Received unknown response pkt type %x "
       "entry status=%x.\n",
       VAR_4->entry_type, VAR_4->entry_status);
   break;
  }
next_iter:
  FUNC_1(&VAR_5->signature, VAR_0);
  FUNC_10();
 }


 FUNC_1(VAR_3->rsp_q_out, VAR_3->ring_index);
}
