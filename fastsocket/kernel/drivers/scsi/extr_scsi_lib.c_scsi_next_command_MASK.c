
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {int sdev_gendev; struct request_queue* request_queue; } ;
struct scsi_cmnd {struct scsi_device* device; } ;
struct request_queue {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct scsi_cmnd*) ;
 int FUNC_3 (struct request_queue*) ;

void FUNC_4(struct scsi_cmnd *VAR_0)
{
 struct scsi_device *VAR_1 = VAR_0->device;
 struct request_queue *VAR_2 = VAR_1->request_queue;


 FUNC_0(&VAR_1->sdev_gendev);

 FUNC_2(VAR_0);
 FUNC_3(VAR_2);


 FUNC_1(&VAR_1->sdev_gendev);
}
