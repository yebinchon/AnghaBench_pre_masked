
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct vfe_output_path_combo {int whichOutputPath; int snapshotPendingCount; int nextFrameAddrBuf; int ackPending; } ;
struct TYPE_3__ {int output2Count; int output1Count; } ;
struct TYPE_4__ {scalar_t__ vfeOperationMode; TYPE_1__ vfeDroppedFrameCounts; } ;


 int FUNC_0 (char*) ;
 TYPE_2__* VAR_0 ;
 int FUNC_1 (struct vfe_output_path_combo*,int ,int *) ;
 int FUNC_2 (int,int ,int ) ;

__attribute__((used)) static void FUNC_3(
 struct vfe_output_path_combo *VAR_1)
{
 uint32_t VAR_2[2];
 static uint32_t VAR_3;

 if (VAR_3++ < 3)
  return;

 if (!VAR_1->ackPending) {
  FUNC_1(VAR_1,
   VAR_1->nextFrameAddrBuf, VAR_2);


  FUNC_2(VAR_1->whichOutputPath,
    VAR_2[0], VAR_2[1]);

 } else {


  FUNC_0("waiting frame ACK\n");

  if (VAR_1->whichOutputPath == 0)
   VAR_0->vfeDroppedFrameCounts.output1Count++;

  if (VAR_1->whichOutputPath == 1)
   VAR_0->vfeDroppedFrameCounts.output2Count++;
 }







 if (VAR_0->vfeOperationMode)
  VAR_1->snapshotPendingCount--;
}
