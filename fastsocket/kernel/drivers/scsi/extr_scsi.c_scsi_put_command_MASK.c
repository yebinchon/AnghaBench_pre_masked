
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {int sdev_gendev; int host; int list_lock; } ;
struct scsi_cmnd {struct scsi_device* device; int list; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,struct scsi_cmnd*,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

void FUNC_6(struct scsi_cmnd *VAR_0)
{
 struct scsi_device *VAR_1 = VAR_0->device;
 unsigned long VAR_2;


 FUNC_4(&VAR_0->device->list_lock, VAR_2);
 FUNC_0(FUNC_3(&VAR_0->list));
 FUNC_2(&VAR_0->list);
 FUNC_5(&VAR_0->device->list_lock, VAR_2);

 FUNC_1(VAR_0->device->host, VAR_0, &VAR_1->sdev_gendev);
}
