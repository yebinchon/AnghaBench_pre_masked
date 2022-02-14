
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {int sdev_gendev; } ;
struct scsi_cmnd {struct request* request; struct scsi_device* device; } ;
struct request_queue {int queue_lock; } ;
struct request {int dummy; } ;


 int FUNC_0 (struct request_queue*,struct request*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct request_queue*) ;
 int FUNC_4 (struct request*) ;
 int FUNC_5 (int ,unsigned long) ;
 int FUNC_6 (int ,unsigned long) ;

__attribute__((used)) static void FUNC_7(struct request_queue *VAR_0, struct scsi_cmnd *VAR_1)
{
 struct scsi_device *VAR_2 = VAR_1->device;
 struct request *VAR_3 = VAR_1->request;
 unsigned long VAR_4;







 FUNC_1(&VAR_2->sdev_gendev);

 FUNC_5(VAR_0->queue_lock, VAR_4);
 FUNC_4(VAR_3);
 FUNC_0(VAR_0, VAR_3);
 FUNC_6(VAR_0->queue_lock, VAR_4);

 FUNC_3(VAR_0);

 FUNC_2(&VAR_2->sdev_gendev);
}
