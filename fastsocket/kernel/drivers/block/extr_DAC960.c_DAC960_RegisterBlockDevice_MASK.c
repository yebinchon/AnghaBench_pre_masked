
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct request_queue {TYPE_1__* queuedata; } ;
struct gendisk {int major; int first_minor; int * fops; int disk_name; struct request_queue* queue; } ;
struct TYPE_3__ {int ControllerNumber; int MaxBlocksPerCommand; int DriverScatterGatherLimit; int BounceBufferLimit; struct request_queue** RequestQueue; int queue_lock; struct gendisk** disks; } ;
typedef TYPE_1__ DAC960_Controller_T ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct request_queue* FUNC_0 (int ,int *) ;
 int FUNC_1 (struct request_queue*,int ) ;
 int FUNC_2 (struct request_queue*,int ) ;
 int FUNC_3 (struct request_queue*,int ) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (int,char*) ;
 int FUNC_6 (int ,char*,int,int) ;

__attribute__((used)) static bool FUNC_7(DAC960_Controller_T *VAR_5)
{
  int VAR_6 = VAR_1 + VAR_5->ControllerNumber;
  int VAR_7;




  if (FUNC_5(VAR_6, "dac960") < 0)
      return 0;

  for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++) {
 struct gendisk *VAR_8 = VAR_5->disks[VAR_7];
   struct request_queue *VAR_9;


   VAR_9 = FUNC_0(VAR_4,&VAR_5->queue_lock);
   if (!VAR_9) {
  FUNC_4("DAC960: failure to allocate request queue\n");
  continue;
   }
   VAR_5->RequestQueue[VAR_7] = VAR_9;
   FUNC_1(VAR_9, VAR_5->BounceBufferLimit);
   VAR_9->queuedata = VAR_5;
 FUNC_3(VAR_9, VAR_5->DriverScatterGatherLimit);
 FUNC_2(VAR_9, VAR_5->MaxBlocksPerCommand);
 VAR_8->queue = VAR_9;
 FUNC_6(VAR_8->disk_name, "rd/c%dd%d", VAR_5->ControllerNumber, VAR_7);
 VAR_8->major = VAR_6;
 VAR_8->first_minor = VAR_7 << VAR_3;
 VAR_8->fops = &VAR_0;
   }



  return 1;
}
