
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef void* u64 ;
struct TYPE_5__ {int data_len; scalar_t__ tag; } ;
struct TYPE_4__ {int result; void* tag; void* itn_id; int host_no; } ;
struct TYPE_6__ {TYPE_2__ cmd_req; TYPE_1__ cmd_done; } ;
struct tgt_event {TYPE_3__ p; } ;
struct scsi_cmnd {int tag; int result; } ;
struct Scsi_Host {int host_no; } ;
typedef int ev ;


 int VAR_0 ;
 int FUNC_0 (char*,struct scsi_cmnd*,int ,unsigned long long,int ,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct tgt_event*,int ,int) ;
 struct Scsi_Host* FUNC_3 (struct scsi_cmnd*) ;
 int FUNC_4 (int ,struct tgt_event*) ;

int FUNC_5(struct scsi_cmnd *VAR_1, u64 VAR_2, u64 VAR_3)
{
 struct Scsi_Host *VAR_4 = FUNC_3(VAR_1);
 struct tgt_event VAR_5;
 int VAR_6;

 FUNC_2(&VAR_5, 0, sizeof(VAR_5));
 VAR_5.p.cmd_done.host_no = VAR_4->host_no;
 VAR_5.p.cmd_done.itn_id = VAR_2;
 VAR_5.p.cmd_done.tag = VAR_3;
 VAR_5.p.cmd_done.result = VAR_1->result;

 FUNC_0("%p %d %llu %u %x\n", VAR_1, VAR_4->host_no,
  (unsigned long long) VAR_5.p.cmd_req.tag,
  VAR_5.p.cmd_req.data_len, VAR_1->tag);

 VAR_6 = FUNC_4(VAR_0, &VAR_5);
 if (VAR_6)
  FUNC_1("tx buf is full, could not send\n");

 return VAR_6;
}
