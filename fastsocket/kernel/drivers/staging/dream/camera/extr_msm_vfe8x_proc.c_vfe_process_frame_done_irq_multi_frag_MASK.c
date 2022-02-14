
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
typedef size_t uint16_t ;
struct TYPE_6__ {int * addressBuffer; } ;
struct TYPE_5__ {int * addressBuffer; } ;
struct vfe_output_path_combo {size_t currentFrame; size_t fragCount; int whichOutputPath; int snapshotPendingCount; TYPE_2__ cbcrPath; TYPE_1__ yPath; int * nextFrameAddrBuf; int ackPending; } ;
struct TYPE_7__ {int output2Count; int output1Count; } ;
struct TYPE_8__ {scalar_t__ vfeOperationMode; TYPE_3__ vfeDroppedFrameCounts; } ;


 TYPE_4__* VAR_0 ;
 int FUNC_0 (int,int ,int ) ;

__attribute__((used)) static void FUNC_1(
 struct vfe_output_path_combo *VAR_1)
{
 uint32_t VAR_2, VAR_3;
 uint16_t VAR_4;
 uint32_t *VAR_5;
 uint32_t *VAR_6;
 const uint32_t *VAR_7;
 uint8_t VAR_8;

 if (!VAR_1->ackPending) {

  VAR_4 = (VAR_1->currentFrame) * (VAR_1->fragCount);


  VAR_2 = VAR_1->yPath.addressBuffer[VAR_4];
  VAR_3 = VAR_1->cbcrPath.addressBuffer[VAR_4];


  VAR_7 = VAR_1->nextFrameAddrBuf;
  VAR_5 = (uint32_t *)&(VAR_1->yPath.addressBuffer[VAR_4]);
  VAR_6 = (uint32_t *)&(VAR_1->cbcrPath.addressBuffer[VAR_4]);


  for (VAR_8 = 0; VAR_8 < VAR_1->fragCount; VAR_8++)
   *VAR_5++ = *VAR_7++;


  for (VAR_8 = 0; VAR_8 < VAR_1->fragCount; VAR_8++)
   *VAR_6++ = *VAR_7++;

  FUNC_0(VAR_1->whichOutputPath, VAR_2, VAR_3);

 } else {
  if (VAR_1->whichOutputPath == 0)
   VAR_0->vfeDroppedFrameCounts.output1Count++;

  if (VAR_1->whichOutputPath == 1)
   VAR_0->vfeDroppedFrameCounts.output2Count++;
 }


 VAR_1->currentFrame = VAR_1->currentFrame^1;

 if (VAR_0->vfeOperationMode)
  VAR_1->snapshotPendingCount--;
}
