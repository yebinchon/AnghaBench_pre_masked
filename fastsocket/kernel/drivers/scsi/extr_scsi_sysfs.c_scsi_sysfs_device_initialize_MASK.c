
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct scsi_target {int devices; int scsi_level; } ;
struct TYPE_5__ {int * class; int parent; int * type; int * bus; } ;
struct scsi_device {int siblings; int same_target_siblings; TYPE_1__ sdev_gendev; int scsi_level; int lun; int id; int channel; struct Scsi_Host* host; TYPE_1__ sdev_dev; struct scsi_target* sdev_target; } ;
struct Scsi_Host {int host_lock; int __devices; int host_no; } ;


 int FUNC_0 (TYPE_1__*,char*,int ,int ,int ,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int ,unsigned long) ;
 int FUNC_5 (int ,unsigned long) ;
 int FUNC_6 (TYPE_1__*) ;

void FUNC_7(struct scsi_device *VAR_3)
{
 unsigned long VAR_4;
 struct Scsi_Host *VAR_5 = VAR_3->host;
 struct scsi_target *VAR_6 = VAR_3->sdev_target;

 FUNC_1(&VAR_3->sdev_gendev);
 VAR_3->sdev_gendev.bus = &VAR_0;
 VAR_3->sdev_gendev.type = &VAR_1;
 FUNC_0(&VAR_3->sdev_gendev, "%d:%d:%d:%d",
       VAR_3->host->host_no, VAR_3->channel, VAR_3->id, VAR_3->lun);

 FUNC_1(&VAR_3->sdev_dev);
 VAR_3->sdev_dev.parent = FUNC_2(&VAR_3->sdev_gendev);
 VAR_3->sdev_dev.class = &VAR_2;
 FUNC_0(&VAR_3->sdev_dev, "%d:%d:%d:%d",
       VAR_3->host->host_no, VAR_3->channel, VAR_3->id, VAR_3->lun);
 VAR_3->scsi_level = VAR_6->scsi_level;
 FUNC_6(&VAR_3->sdev_gendev);
 FUNC_4(VAR_5->host_lock, VAR_4);
 FUNC_3(&VAR_3->same_target_siblings, &VAR_6->devices);
 FUNC_3(&VAR_3->siblings, &VAR_5->__devices);
 FUNC_5(VAR_5->host_lock, VAR_4);
}
