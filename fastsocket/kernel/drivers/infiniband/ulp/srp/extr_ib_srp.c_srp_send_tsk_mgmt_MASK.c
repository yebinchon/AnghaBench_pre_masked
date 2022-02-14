
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
struct srp_tsk_mgmt {int tag; int task_tag; int tsk_mgmt_func; int lun; int opcode; } ;
struct srp_target_port {int tsk_mgmt_done; int lock; scalar_t__ qp_in_error; int connected; TYPE_2__* srp_host; } ;
struct srp_iu {int dma; struct srp_tsk_mgmt* buf; } ;
struct ib_device {int dummy; } ;
struct TYPE_4__ {TYPE_1__* srp_dev; } ;
struct TYPE_3__ {struct ib_device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct srp_iu* FUNC_0 (struct srp_target_port*,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct ib_device*,int ,int,int ) ;
 int FUNC_3 (struct ib_device*,int ,int,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct srp_tsk_mgmt*,int ,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (struct srp_target_port*,struct srp_iu*,int) ;
 int FUNC_10 (struct srp_target_port*,struct srp_iu*,int ) ;
 int FUNC_11 (int *,int ) ;

__attribute__((used)) static int FUNC_12(struct srp_target_port *VAR_5,
        u64 VAR_6, unsigned int VAR_7, u8 VAR_8)
{
 struct ib_device *VAR_9 = VAR_5->srp_host->srp_dev->dev;
 struct srp_iu *VAR_10;
 struct srp_tsk_mgmt *VAR_11;

 if (!VAR_5->connected || VAR_5->qp_in_error)
  return -1;

 FUNC_4(&VAR_5->tsk_mgmt_done);

 FUNC_7(&VAR_5->lock);
 VAR_10 = FUNC_0(VAR_5, VAR_2);
 FUNC_8(&VAR_5->lock);

 if (!VAR_10)
  return -1;

 FUNC_2(VAR_9, VAR_10->dma, sizeof *VAR_11,
       VAR_0);
 VAR_11 = VAR_10->buf;
 FUNC_5(VAR_11, 0, sizeof *VAR_11);

 VAR_11->opcode = VAR_4;
 VAR_11->lun = FUNC_1((u64) VAR_7 << 48);
 VAR_11->tag = VAR_6 | VAR_3;
 VAR_11->tsk_mgmt_func = VAR_8;
 VAR_11->task_tag = VAR_6;

 FUNC_3(VAR_9, VAR_10->dma, sizeof *VAR_11,
          VAR_0);
 if (FUNC_9(VAR_5, VAR_10, sizeof *VAR_11)) {
  FUNC_10(VAR_5, VAR_10, VAR_2);
  return -1;
 }

 if (!FUNC_11(&VAR_5->tsk_mgmt_done,
      FUNC_6(VAR_1)))
  return -1;

 return 0;
}
