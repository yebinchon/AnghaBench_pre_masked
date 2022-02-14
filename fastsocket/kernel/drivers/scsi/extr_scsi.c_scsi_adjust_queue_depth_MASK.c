
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct scsi_device {int queue_depth; int ordered_tags; int simple_tags; TYPE_2__* request_queue; TYPE_1__* host; } ;
struct TYPE_5__ {int queue_lock; } ;
struct TYPE_4__ {int bqt; } ;


 int VAR_0 ;


 scalar_t__ FUNC_0 (TYPE_2__*,int) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ,struct scsi_device*,char*) ;
 int FUNC_3 (int ,unsigned long) ;
 int FUNC_4 (int ,unsigned long) ;

void FUNC_5(struct scsi_device *VAR_1, int VAR_2, int VAR_3)
{
 unsigned long VAR_4;




 if (VAR_3 <= 0)
  return;

 FUNC_3(VAR_1->request_queue->queue_lock, VAR_4);
 if (!VAR_1->host->bqt) {
  if (FUNC_1(VAR_1->request_queue) &&
      FUNC_0(VAR_1->request_queue, VAR_3) != 0)
   goto out;
 }

 VAR_1->queue_depth = VAR_3;
 switch (VAR_2) {
  case 129:
   VAR_1->ordered_tags = 1;
   VAR_1->simple_tags = 1;
   break;
  case 128:
   VAR_1->ordered_tags = 0;
   VAR_1->simple_tags = 1;
   break;
  default:
   FUNC_2(VAR_0, VAR_1,
        "scsi_adjust_queue_depth, bad queue type, "
        "disabled\n");
  case 0:
   VAR_1->ordered_tags = VAR_1->simple_tags = 0;
   VAR_1->queue_depth = VAR_3;
   break;
 }
 out:
 FUNC_4(VAR_1->request_queue->queue_lock, VAR_4);
}
