
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ub_scsi_cmd {scalar_t__ dir; int state; int cdb; int cdb_len; TYPE_1__* lun; int len; int tag; } ;
struct TYPE_4__ {scalar_t__ expires; } ;
struct bulk_cb_wrap {int Flags; int CDB; int Length; int Lun; void* DataTransferLength; int Tag; void* Signature; } ;
struct ub_dev {TYPE_2__ work_timer; int work_done; int work_urb; int send_bulk_pipe; int dev; int last_pipe; int top_sense; struct bulk_cb_wrap work_bcb; } ;
struct TYPE_3__ {int num; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (TYPE_2__*) ;
 void* FUNC_2 (int ) ;
 scalar_t__ VAR_8 ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (int *) ;
 int VAR_9 ;
 int FUNC_6 (int *,int ,int ,struct bulk_cb_wrap*,int ,int ,struct ub_dev*) ;
 int FUNC_7 (int *,int ) ;

__attribute__((used)) static int FUNC_8(struct ub_dev *VAR_10, struct ub_scsi_cmd *VAR_11)
{
 struct bulk_cb_wrap *VAR_12;
 int VAR_13;

 VAR_12 = &VAR_10->work_bcb;
 FUNC_4(&VAR_10->top_sense, 0, VAR_4);


 VAR_12->Signature = FUNC_2(VAR_6);
 VAR_12->Tag = VAR_11->tag;
 VAR_12->DataTransferLength = FUNC_2(VAR_11->len);
 VAR_12->Flags = (VAR_11->dir == VAR_2) ? 0x80 : 0;
 VAR_12->Lun = (VAR_11->lun != ((void*)0)) ? VAR_11->lun->num : 0;
 VAR_12->Length = VAR_11->cdb_len;


 FUNC_3(VAR_12->CDB, VAR_11->cdb, VAR_3);

 FUNC_0(VAR_10->work_done);

 VAR_10->last_pipe = VAR_10->send_bulk_pipe;
 FUNC_6(&VAR_10->work_urb, VAR_10->dev, VAR_10->send_bulk_pipe,
     VAR_12, VAR_7, VAR_9, VAR_10);

 if ((VAR_13 = FUNC_7(&VAR_10->work_urb, VAR_0)) != 0) {

  FUNC_5(&VAR_10->work_done);
  return VAR_13;
 }

 VAR_10->work_timer.expires = VAR_8 + VAR_5;
 FUNC_1(&VAR_10->work_timer);

 VAR_11->state = VAR_1;
 return 0;
}
