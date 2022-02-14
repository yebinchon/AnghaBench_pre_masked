
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef void* uint32_t ;
struct vfe_cmd_axi_input_config {int pixelSize; int xOffset; int xSize; int rowIncrement; int padBottomLineCount; int padTopLineCount; int padRightStopCycle3; int padRightStopCycle2; int padRightStopCycle1; int padRightStopCycle0; int padRightComponentSelectCycle3; int padRightComponentSelectCycle2; int padRightComponentSelectCycle1; int padRightComponentSelectCycle0; int padLeftStopCycle3; int padLeftStopCycle2; int padLeftStopCycle1; int padLeftStopCycle0; int padLeftComponentSelectCycle3; int padLeftComponentSelectCycle2; int padLeftComponentSelectCycle1; int padLeftComponentSelectCycle0; int padRepeatCountBottom; int padRepeatCountTop; int padRepeatCountRight; int padRepeatCountLeft; int unpackPhase; scalar_t__ unpackHbi; int ySize; int numOfRows; int * fragAddr; } ;
struct VFE_AxiInputCmdType {int burstLength; int RowIncrement; int mainUnpackWidth; int bottomUnapckPattern; int topUnapckPattern; int rightUnpackStop3; int rightUnpackStop2; int rightUnpackStop1; int rightUnpackStop0; int rightUnpackPattern3; int rightUnpackPattern2; int rightUnpackPattern1; int rightUnpackPattern0; int leftUnpackStop3; int leftUnpackStop2; int leftUnpackStop1; int leftUnpackStop0; int leftUnpackPattern3; int leftUnpackPattern2; int leftUnpackPattern1; int leftUnpackPattern0; int padBottom; int padTop; int padRight; int padLeft; void* unpackPattern; int mainUnpackPhase; void* mainUnpackHbiSel; int mainUnpackHeight; int NumOfRows; void* xSizeWord; scalar_t__ yOffsetDelta; int ySize; int stripeStartAddr3; int stripeStartAddr2; int stripeStartAddr1; int stripeStartAddr0; } ;
typedef int cmd ;
struct TYPE_3__ {int rdPingpongIrq; } ;
struct TYPE_4__ {int axiInputDataSize; scalar_t__ vfebase; TYPE_1__ vfeImaskLocal; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;



 TYPE_2__* VAR_3 ;
 int FUNC_0 (struct VFE_AxiInputCmdType*,int ,int) ;
 int FUNC_1 (scalar_t__,void**,int) ;
 int FUNC_2 (void*,scalar_t__) ;

void FUNC_3(struct vfe_cmd_axi_input_config *VAR_4)
{
 struct VFE_AxiInputCmdType VAR_5;
 uint32_t VAR_6, VAR_7;
 uint8_t VAR_8;
 uint32_t VAR_9;

 VAR_3->vfeImaskLocal.rdPingpongIrq = VAR_0;

 switch (VAR_4->pixelSize) {
 case 130:
  VAR_3->axiInputDataSize = 130;
  break;

 case 129:
  VAR_3->axiInputDataSize = 129;
  break;

 case 128:
 default:
  VAR_3->axiInputDataSize = 128;
  break;
 }

 FUNC_0(&VAR_5, 0, sizeof(VAR_5));

 switch (VAR_4->pixelSize) {
 case 130:
  VAR_8 = 6;
  VAR_7 = 0xD43210;
  break;

 case 129:
  VAR_8 = 5;
  VAR_7 = 0xC3210;
  break;

 case 128:
 default:
  VAR_8 = 8;
  VAR_7 = 0xF6543210;
  break;
 }

 VAR_6 =
  ((((VAR_4->xOffset % VAR_8) + VAR_4->xSize) +
   (VAR_8-1)) / VAR_8) - 1;

 VAR_5.stripeStartAddr0 = VAR_4->fragAddr[0];
 VAR_5.stripeStartAddr1 = VAR_4->fragAddr[1];
 VAR_5.stripeStartAddr2 = VAR_4->fragAddr[2];
 VAR_5.stripeStartAddr3 = VAR_4->fragAddr[3];
 VAR_5.ySize = VAR_4->ySize;
 VAR_5.yOffsetDelta = 0;
 VAR_5.xSizeWord = VAR_6;
 VAR_5.burstLength = 1;
 VAR_5.NumOfRows = VAR_4->numOfRows;
 VAR_5.RowIncrement =
  (VAR_4->rowIncrement + (VAR_8-1))/VAR_8;
 VAR_5.mainUnpackHeight = VAR_4->ySize;
 VAR_5.mainUnpackWidth = VAR_4->xSize - 1;
 VAR_5.mainUnpackHbiSel = (uint32_t)VAR_4->unpackHbi;
 VAR_5.mainUnpackPhase = VAR_4->unpackPhase;
 VAR_5.unpackPattern = VAR_7;
 VAR_5.padLeft = VAR_4->padRepeatCountLeft;
 VAR_5.padRight = VAR_4->padRepeatCountRight;
 VAR_5.padTop = VAR_4->padRepeatCountTop;
 VAR_5.padBottom = VAR_4->padRepeatCountBottom;
 VAR_5.leftUnpackPattern0 = VAR_4->padLeftComponentSelectCycle0;
 VAR_5.leftUnpackPattern1 = VAR_4->padLeftComponentSelectCycle1;
 VAR_5.leftUnpackPattern2 = VAR_4->padLeftComponentSelectCycle2;
 VAR_5.leftUnpackPattern3 = VAR_4->padLeftComponentSelectCycle3;
 VAR_5.leftUnpackStop0 = VAR_4->padLeftStopCycle0;
 VAR_5.leftUnpackStop1 = VAR_4->padLeftStopCycle1;
 VAR_5.leftUnpackStop2 = VAR_4->padLeftStopCycle2;
 VAR_5.leftUnpackStop3 = VAR_4->padLeftStopCycle3;
 VAR_5.rightUnpackPattern0 = VAR_4->padRightComponentSelectCycle0;
 VAR_5.rightUnpackPattern1 = VAR_4->padRightComponentSelectCycle1;
 VAR_5.rightUnpackPattern2 = VAR_4->padRightComponentSelectCycle2;
 VAR_5.rightUnpackPattern3 = VAR_4->padRightComponentSelectCycle3;
 VAR_5.rightUnpackStop0 = VAR_4->padRightStopCycle0;
 VAR_5.rightUnpackStop1 = VAR_4->padRightStopCycle1;
 VAR_5.rightUnpackStop2 = VAR_4->padRightStopCycle2;
 VAR_5.rightUnpackStop3 = VAR_4->padRightStopCycle3;
 VAR_5.topUnapckPattern = VAR_4->padTopLineCount;
 VAR_5.bottomUnapckPattern = VAR_4->padBottomLineCount;


 FUNC_1(VAR_3->vfebase + VAR_2,
  (uint32_t *)&VAR_5, sizeof(VAR_5));


 VAR_9 = 0xf;

 FUNC_2(VAR_9,
  VAR_3->vfebase + VAR_1);
}
