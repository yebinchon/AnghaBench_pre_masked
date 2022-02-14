
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct request_queue {int dummy; } ;
struct request {int dummy; } ;
struct TYPE_6__ {size_t LogicalDriveNumber; scalar_t__ DmaDirection; int SegmentCount; int BlockCount; int BlockNumber; int cmd_sglist; struct request* Request; int CommandType; TYPE_1__* Controller; } ;
struct TYPE_5__ {int PCIDevice; struct request_queue** RequestQueue; } ;
typedef TYPE_1__ DAC960_Controller_T ;
typedef TYPE_2__ DAC960_Command_T ;


 int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct request_queue*,struct request*,int ) ;
 int FUNC_2 (struct request*) ;
 int FUNC_3 (int ,int ,int,scalar_t__) ;

__attribute__((used)) static void FUNC_4(DAC960_Command_T *VAR_3)
{
  DAC960_Controller_T *VAR_4 = VAR_3->Controller;
  struct request *VAR_5 = VAR_3->Request;
  struct request_queue *VAR_6 = VAR_4->RequestQueue[VAR_3->LogicalDriveNumber];

  if (VAR_3->DmaDirection == VAR_2)
    VAR_3->CommandType = VAR_0;
  else
    VAR_3->CommandType = VAR_1;







  (void)FUNC_1(VAR_6, VAR_3->Request, VAR_3->cmd_sglist);

  (void)FUNC_3(VAR_4->PCIDevice, VAR_3->cmd_sglist, 1, VAR_3->DmaDirection);






  VAR_3->SegmentCount = 1;
  VAR_3->BlockNumber = FUNC_2(VAR_5);
  VAR_3->BlockCount = 1;
  FUNC_0(VAR_3);
  return;
}
