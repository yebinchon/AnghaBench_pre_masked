
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_target {int max_target_blocked; int target_blocked; } ;
struct scsi_device {int requeue_work; int max_device_blocked; int device_blocked; struct request_queue* request_queue; struct Scsi_Host* host; } ;
struct scsi_cmnd {int request; struct scsi_device* device; } ;
struct request_queue {int queue_lock; } ;
struct Scsi_Host {int max_host_blocked; int host_blocked; } ;


 int FUNC_0 (int,int ) ;




 int FUNC_1 (struct request_queue*,int ) ;
 int FUNC_2 (struct request_queue*,int *) ;
 int FUNC_3 (char*,struct scsi_cmnd*) ;
 int FUNC_4 (struct scsi_device*) ;
 struct scsi_target* FUNC_5 (struct scsi_device*) ;
 int FUNC_6 (int ,unsigned long) ;
 int FUNC_7 (int ,unsigned long) ;

__attribute__((used)) static void FUNC_8(struct scsi_cmnd *VAR_0, int VAR_1, int VAR_2)
{
 struct Scsi_Host *VAR_3 = VAR_0->device->host;
 struct scsi_device *VAR_4 = VAR_0->device;
 struct scsi_target *VAR_5 = FUNC_5(VAR_4);
 struct request_queue *VAR_6 = VAR_4->request_queue;
 unsigned long VAR_7;

 FUNC_0(1,
   FUNC_3("Inserting command %p into mlqueue\n", VAR_0));
 switch (VAR_1) {
 case 129:
  VAR_3->host_blocked = VAR_3->max_host_blocked;
  break;
 case 131:
 case 130:
  VAR_4->device_blocked = VAR_4->max_device_blocked;
  break;
 case 128:
  VAR_5->target_blocked = VAR_5->max_target_blocked;
  break;
 }





 if (VAR_2)
  FUNC_4(VAR_4);







 FUNC_6(VAR_6->queue_lock, VAR_7);
 FUNC_1(VAR_6, VAR_0->request);
 FUNC_2(VAR_6, &VAR_4->requeue_work);
 FUNC_7(VAR_6->queue_lock, VAR_7);
}
