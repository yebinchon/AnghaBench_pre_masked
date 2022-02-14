
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_target {int dev; } ;
struct TYPE_2__ {int parent; } ;
struct scsi_device {scalar_t__ borken; TYPE_1__ sdev_gendev; } ;
struct Scsi_Host {int scan_mutex; int this_id; int shost_gendev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct scsi_device* FUNC_4 (struct scsi_target*,int ,int *) ;
 struct scsi_target* FUNC_5 (int *,int ,int ) ;
 int FUNC_6 (struct Scsi_Host*) ;
 int FUNC_7 (struct scsi_target*) ;

struct scsi_device *FUNC_8(struct Scsi_Host *VAR_0)
{
 struct scsi_device *VAR_1 = ((void*)0);
 struct scsi_target *VAR_2;

 FUNC_1(&VAR_0->scan_mutex);
 if (!FUNC_6(VAR_0))
  goto out;
 VAR_2 = FUNC_5(&VAR_0->shost_gendev, 0, VAR_0->this_id);
 if (!VAR_2)
  goto out;

 VAR_1 = FUNC_4(VAR_2, 0, ((void*)0));
 if (VAR_1) {
  VAR_1->sdev_gendev.parent = FUNC_0(&VAR_2->dev);
  VAR_1->borken = 0;
 } else
  FUNC_7(VAR_2);
 FUNC_3(&VAR_2->dev);
 out:
 FUNC_2(&VAR_0->scan_mutex);
 return VAR_1;
}
