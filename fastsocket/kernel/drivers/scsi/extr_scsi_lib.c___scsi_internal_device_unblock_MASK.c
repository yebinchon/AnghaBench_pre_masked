
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {scalar_t__ sdev_state; struct request_queue* request_queue; } ;
struct request_queue {int queue_lock; } ;
typedef enum scsi_device_state { ____Placeholder_scsi_device_state } scsi_device_state ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct request_queue*) ;
 int FUNC_1 (int ,unsigned long) ;
 int FUNC_2 (int ,unsigned long) ;

int
FUNC_3(struct scsi_device *VAR_7,
        enum scsi_device_state VAR_8)
{
 struct request_queue *VAR_9 = VAR_7->request_queue;
 unsigned long VAR_10;





 if ((VAR_7->sdev_state == VAR_1) ||
     (VAR_7->sdev_state == VAR_6))
  VAR_7->sdev_state = VAR_8;
 else if (VAR_7->sdev_state == VAR_4) {
  if (VAR_8 == VAR_6 ||
      VAR_8 == VAR_5)
   VAR_7->sdev_state = VAR_8;
  else
   VAR_7->sdev_state = VAR_3;
 } else if (VAR_7->sdev_state != VAR_2 &&
   VAR_7->sdev_state != VAR_5)
  return -VAR_0;

 FUNC_1(VAR_9->queue_lock, VAR_10);
 FUNC_0(VAR_9);
 FUNC_2(VAR_9->queue_lock, VAR_10);

 return 0;
}
