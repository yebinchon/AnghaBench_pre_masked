
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {struct request_queue* request_queue; } ;
struct request_queue {int queue_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct request_queue*) ;
 int FUNC_1 (struct scsi_device*,int ) ;
 int FUNC_2 (int ,unsigned long) ;
 int FUNC_3 (int ,unsigned long) ;

int
FUNC_4(struct scsi_device *VAR_2)
{
 struct request_queue *VAR_3 = VAR_2->request_queue;
 unsigned long VAR_4;
 int VAR_5 = 0;

 VAR_5 = FUNC_1(VAR_2, VAR_0);
 if (VAR_5) {
  VAR_5 = FUNC_1(VAR_2, VAR_1);

  if (VAR_5)
   return VAR_5;
 }






 FUNC_2(VAR_3->queue_lock, VAR_4);
 FUNC_0(VAR_3);
 FUNC_3(VAR_3->queue_lock, VAR_4);

 return 0;
}
