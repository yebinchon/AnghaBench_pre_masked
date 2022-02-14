
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_scan_data {scalar_t__ channel; scalar_t__ id; int lun; } ;
struct iscsi_cls_session {scalar_t__ state; unsigned int target_id; int dev; int lock; } ;
struct iscsi_cls_host {int mutex; } ;
struct device {int dummy; } ;
struct Scsi_Host {struct iscsi_cls_host* shost_data; } ;


 int FUNC_0 (struct iscsi_cls_session*,char*) ;
 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 struct iscsi_cls_session* FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*) ;
 struct Scsi_Host* FUNC_3 (struct iscsi_cls_session*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ,unsigned int,int ,int) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_9(struct device *VAR_3, void *VAR_4)
{
 struct iscsi_scan_data *VAR_5 = VAR_4;
 struct iscsi_cls_session *VAR_6;
 struct Scsi_Host *VAR_7;
 struct iscsi_cls_host *VAR_8;
 unsigned long VAR_9;
 unsigned int VAR_10;

 if (!FUNC_2(VAR_3))
  return 0;

 VAR_6 = FUNC_1(VAR_3);

 FUNC_0(VAR_6, "Scanning session\n");

 VAR_7 = FUNC_3(VAR_6);
 VAR_8 = VAR_7->shost_data;

 FUNC_4(&VAR_8->mutex);
 FUNC_7(&VAR_6->lock, VAR_9);
 if (VAR_6->state != VAR_1) {
  FUNC_8(&VAR_6->lock, VAR_9);
  goto user_scan_exit;
 }
 VAR_10 = VAR_6->target_id;
 FUNC_8(&VAR_6->lock, VAR_9);

 if (VAR_10 != VAR_0) {
  if ((VAR_5->channel == VAR_2 ||
       VAR_5->channel == 0) &&
      (VAR_5->id == VAR_2 ||
       VAR_5->id == VAR_10))
   FUNC_6(&VAR_6->dev, 0, VAR_10,
      VAR_5->lun, 1);
 }

user_scan_exit:
 FUNC_5(&VAR_8->mutex);
 FUNC_0(VAR_6, "Completed session scan\n");
 return 0;
}
