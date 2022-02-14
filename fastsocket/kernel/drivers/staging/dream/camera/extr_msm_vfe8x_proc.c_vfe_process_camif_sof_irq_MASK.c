
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int vfeFrameSkipCount; int vfeFrameSkipPattern; scalar_t__ vfeSnapShotCount; int vfeFrameSkipPeriod; scalar_t__ vfebase; scalar_t__ vfeOperationMode; int vfeFrameId; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ) ;
 TYPE_1__* VAR_2 ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_2(void)
{

 VAR_2->vfeFrameId++;

 FUNC_0("camif_sof_irq, frameId = %d\n",
  VAR_2->vfeFrameId);
 if (VAR_2->vfeOperationMode) {
  if ((1 << VAR_2->vfeFrameSkipCount) &
    VAR_2->vfeFrameSkipPattern) {

   VAR_2->vfeSnapShotCount--;
   if (VAR_2->vfeSnapShotCount == 0)

    FUNC_1(VAR_1,
     VAR_2->vfebase + VAR_0);
  }


  VAR_2->vfeFrameSkipCount++;
  if (VAR_2->vfeFrameSkipCount ==
    (VAR_2->vfeFrameSkipPeriod + 1))
   VAR_2->vfeFrameSkipCount = 0;
 }
}
