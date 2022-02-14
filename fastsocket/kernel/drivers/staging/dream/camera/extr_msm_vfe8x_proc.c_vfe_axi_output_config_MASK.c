
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_36__ TYPE_9__ ;
typedef struct TYPE_35__ TYPE_8__ ;
typedef struct TYPE_34__ TYPE_7__ ;
typedef struct TYPE_33__ TYPE_6__ ;
typedef struct TYPE_32__ TYPE_5__ ;
typedef struct TYPE_31__ TYPE_4__ ;
typedef struct TYPE_30__ TYPE_3__ ;
typedef struct TYPE_29__ TYPE_2__ ;
typedef struct TYPE_28__ TYPE_1__ ;
typedef struct TYPE_27__ TYPE_19__ ;
typedef struct TYPE_26__ TYPE_16__ ;
typedef struct TYPE_25__ TYPE_15__ ;
typedef struct TYPE_24__ TYPE_14__ ;
typedef struct TYPE_23__ TYPE_13__ ;
typedef struct TYPE_22__ TYPE_12__ ;
typedef struct TYPE_21__ TYPE_11__ ;
typedef struct TYPE_20__ TYPE_10__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_21__ {int ** outFragments; } ;
struct TYPE_20__ {int ** outFragments; } ;
struct TYPE_22__ {int fragmentCount; TYPE_11__ outputCbcr; TYPE_10__ outputY; } ;
struct TYPE_33__ {int ** outFragments; } ;
struct TYPE_32__ {int ** outFragments; } ;
struct TYPE_34__ {int fragmentCount; TYPE_6__ outputCbcr; TYPE_5__ outputY; } ;
struct vfe_cmd_axi_output_config {int outputDataSize; int outputMode; TYPE_12__ output1; TYPE_7__ output2; } ;
struct TYPE_36__ {int fragIndex; void* hwCurrentFlag; int * addressBuffer; } ;
struct TYPE_35__ {int fragIndex; void* hwCurrentFlag; int * addressBuffer; } ;
struct TYPE_31__ {void* viewCbcrPingpongIrq; void* viewYPingpongIrq; void* encCbcrPingpongIrq; void* encYPingpongIrq; void* viewIrq; void* encIrq; } ;
struct TYPE_30__ {int rawPixelDataSize; void* viewCbcrWrPathEn; void* viewYWrPathEn; void* encCbcrWrPathEn; void* encYWrPathEn; void* rawWritePathSelect; } ;
struct TYPE_29__ {void* viewIrqComMask; void* encIrqComMask; } ;
struct TYPE_28__ {void* camif2OutputEnable; void* camif2BusEnable; } ;
struct TYPE_26__ {int fragCount; int whichOutputPath; TYPE_9__ cbcrPath; TYPE_8__ yPath; void* currentFrame; void* ackPending; int * nextFrameAddrBuf; void* multiFrag; void* pathEnabled; } ;
struct TYPE_24__ {int fragIndex; void* hwCurrentFlag; int * addressBuffer; } ;
struct TYPE_23__ {int fragIndex; void* hwCurrentFlag; int * addressBuffer; } ;
struct TYPE_25__ {int fragCount; TYPE_14__ cbcrPath; TYPE_13__ yPath; scalar_t__ whichOutputPath; void* currentFrame; void* ackPending; int * nextFrameAddrBuf; void* multiFrag; void* pathEnabled; } ;
struct TYPE_27__ {int axiOutputMode; TYPE_16__ encPath; TYPE_15__ viewPath; TYPE_4__ vfeImaskLocal; TYPE_3__ vfeBusConfigLocal; TYPE_2__ vfeIrqCompositeMaskLocal; TYPE_1__ vfeCamifConfigLocal; } ;


 int FUNC_0 (char*,int) ;
 void* VAR_0 ;
 void* VAR_1 ;







 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;



 TYPE_19__* VAR_7 ;
 void* VAR_8 ;
 int FUNC_1 (struct vfe_cmd_axi_output_config*,TYPE_15__*,TYPE_16__*,int) ;
 int FUNC_2 (TYPE_15__*,TYPE_16__*) ;

void FUNC_3(
 struct vfe_cmd_axi_output_config *VAR_9)
{

 uint32_t *VAR_10;
 uint32_t *VAR_11;
 uint32_t *VAR_12;
 uint8_t VAR_13;
 uint8_t VAR_14;
 uint16_t VAR_15 = 8;


 VAR_7->encPath.fragCount = VAR_9->output2.fragmentCount;
 if (VAR_7->encPath.fragCount > 1)
  VAR_7->encPath.multiFrag = VAR_1;

 VAR_7->viewPath.fragCount = VAR_9->output1.fragmentCount;
 if (VAR_7->viewPath.fragCount > 1)
  VAR_7->viewPath.multiFrag = VAR_1;


 VAR_7->vfeBusConfigLocal.rawPixelDataSize = VAR_9->outputDataSize;

 switch (VAR_9->outputDataSize) {
 case 128:
  VAR_15 = 8;
  break;

 case 130:
  VAR_15 = 6;
  break;

 case 129:
  VAR_15 = 5;
  break;
 }

 VAR_7->axiOutputMode = VAR_9->outputMode;

 FUNC_0("axiOutputMode = %d\n", VAR_7->axiOutputMode);

 switch (VAR_7->axiOutputMode) {
 case 135: {
  VAR_7->vfeCamifConfigLocal.camif2BusEnable = VAR_0;
  VAR_7->vfeCamifConfigLocal.camif2OutputEnable = VAR_1;
  VAR_7->vfeBusConfigLocal.rawWritePathSelect =
   VAR_4;

  VAR_7->encPath.pathEnabled = VAR_0;
  VAR_7->vfeImaskLocal.encIrq = VAR_0;
  VAR_7->vfeIrqCompositeMaskLocal.encIrqComMask =
   VAR_2;

  VAR_7->vfeBusConfigLocal.encYWrPathEn = VAR_0;
  VAR_7->vfeBusConfigLocal.encCbcrWrPathEn = VAR_0;
  VAR_7->viewPath.pathEnabled = VAR_1;
  VAR_7->vfeImaskLocal.viewIrq = VAR_1;
  VAR_7->vfeIrqCompositeMaskLocal.viewIrqComMask =
   VAR_2;

  VAR_7->vfeBusConfigLocal.viewYWrPathEn = VAR_1;
  VAR_7->vfeBusConfigLocal.viewCbcrWrPathEn = VAR_1;

  if (VAR_7->vfeBusConfigLocal.encYWrPathEn &&
    VAR_7->encPath.multiFrag)
   VAR_7->vfeImaskLocal.encYPingpongIrq = VAR_1;

  if (VAR_7->vfeBusConfigLocal.encCbcrWrPathEn &&
    VAR_7->encPath.multiFrag)
   VAR_7->vfeImaskLocal.encCbcrPingpongIrq = VAR_1;

  if (VAR_7->vfeBusConfigLocal.viewYWrPathEn &&
    VAR_7->viewPath.multiFrag)
   VAR_7->vfeImaskLocal.viewYPingpongIrq = VAR_1;

  if (VAR_7->vfeBusConfigLocal.viewCbcrWrPathEn &&
    VAR_7->viewPath.multiFrag)
   VAR_7->vfeImaskLocal.viewCbcrPingpongIrq = VAR_1;
 }
  break;

 case 132: {
  VAR_7->vfeCamifConfigLocal.camif2BusEnable = VAR_0;
  VAR_7->vfeCamifConfigLocal.camif2OutputEnable = VAR_1;
  VAR_7->vfeBusConfigLocal.rawWritePathSelect =
   VAR_4;

  VAR_7->encPath.pathEnabled = VAR_1;
  VAR_7->vfeImaskLocal.encIrq = VAR_1;
  VAR_7->vfeIrqCompositeMaskLocal.encIrqComMask =
   VAR_2;

  VAR_7->vfeBusConfigLocal.encYWrPathEn = VAR_1;
  VAR_7->vfeBusConfigLocal.encCbcrWrPathEn = VAR_1;

  VAR_7->viewPath.pathEnabled = VAR_0;
  VAR_7->vfeImaskLocal.viewIrq = VAR_0;
  VAR_7->vfeIrqCompositeMaskLocal.viewIrqComMask =
   VAR_2;

  VAR_7->vfeBusConfigLocal.viewYWrPathEn = VAR_0;
  VAR_7->vfeBusConfigLocal.viewCbcrWrPathEn = VAR_0;

  if (VAR_7->vfeBusConfigLocal.encYWrPathEn &&
    VAR_7->encPath.multiFrag)
   VAR_7->vfeImaskLocal.encYPingpongIrq = VAR_1;

  if (VAR_7->vfeBusConfigLocal.encCbcrWrPathEn &&
    VAR_7->encPath.multiFrag)
   VAR_7->vfeImaskLocal.encCbcrPingpongIrq = VAR_1;

  if (VAR_7->vfeBusConfigLocal.viewYWrPathEn &&
    VAR_7->viewPath.multiFrag)
   VAR_7->vfeImaskLocal.viewYPingpongIrq = VAR_1;

  if (VAR_7->vfeBusConfigLocal.viewCbcrWrPathEn &&
    VAR_7->viewPath.multiFrag)
   VAR_7->vfeImaskLocal.viewCbcrPingpongIrq = VAR_1;
 }
   break;

 case 133: {
  VAR_7->vfeCamifConfigLocal.camif2BusEnable = VAR_0;
  VAR_7->vfeCamifConfigLocal.camif2OutputEnable = VAR_1;
  VAR_7->vfeBusConfigLocal.rawWritePathSelect =
   VAR_4;

  VAR_7->encPath.pathEnabled = VAR_1;
  VAR_7->vfeImaskLocal.encIrq = VAR_1;
  VAR_7->vfeIrqCompositeMaskLocal.encIrqComMask =
   VAR_2;

  VAR_7->vfeBusConfigLocal.encYWrPathEn = VAR_1;
  VAR_7->vfeBusConfigLocal.encCbcrWrPathEn = VAR_1;
  VAR_7->viewPath.pathEnabled = VAR_1;
  VAR_7->vfeImaskLocal.viewIrq = VAR_1;
  VAR_7->vfeIrqCompositeMaskLocal.viewIrqComMask =
   VAR_2;

  VAR_7->vfeBusConfigLocal.viewYWrPathEn = VAR_1;
  VAR_7->vfeBusConfigLocal.viewCbcrWrPathEn = VAR_1;

  if (VAR_7->vfeBusConfigLocal.encYWrPathEn &&
    VAR_7->encPath.multiFrag)
   VAR_7->vfeImaskLocal.encYPingpongIrq = VAR_1;

  if (VAR_7->vfeBusConfigLocal.encCbcrWrPathEn &&
    VAR_7->encPath.multiFrag)
   VAR_7->vfeImaskLocal.encCbcrPingpongIrq = VAR_1;

  if (VAR_7->vfeBusConfigLocal.viewYWrPathEn &&
    VAR_7->viewPath.multiFrag)
   VAR_7->vfeImaskLocal.viewYPingpongIrq = VAR_1;

  if (VAR_7->vfeBusConfigLocal.viewCbcrWrPathEn &&
    VAR_7->viewPath.multiFrag)
   VAR_7->vfeImaskLocal.viewCbcrPingpongIrq = VAR_1;
 }
  break;

 case 136: {





  if (!VAR_9->output2.outputCbcr.outFragments[1][0]) {
   VAR_9->output2.outputCbcr.outFragments[1][0] =
    VAR_9->output2.outputCbcr.outFragments[0][0];
  }

  VAR_7->vfeCamifConfigLocal.camif2BusEnable = VAR_1;
  VAR_7->vfeCamifConfigLocal.camif2OutputEnable = VAR_0;
  VAR_7->vfeBusConfigLocal.rawWritePathSelect =
   VAR_5;

  VAR_7->encPath.pathEnabled = VAR_1;
  VAR_7->vfeImaskLocal.encIrq = VAR_1;
  VAR_7->vfeIrqCompositeMaskLocal.encIrqComMask =
   VAR_3;

  VAR_7->vfeBusConfigLocal.encYWrPathEn = VAR_0;
  VAR_7->vfeBusConfigLocal.encCbcrWrPathEn = VAR_1;

  VAR_7->viewPath.pathEnabled = VAR_0;
  VAR_7->vfeImaskLocal.viewIrq = VAR_0;
  VAR_7->vfeIrqCompositeMaskLocal.viewIrqComMask =
   VAR_2;

  VAR_7->vfeBusConfigLocal.viewYWrPathEn = VAR_0;
  VAR_7->vfeBusConfigLocal.viewCbcrWrPathEn = VAR_0;

  if (VAR_7->vfeBusConfigLocal.encYWrPathEn &&
    VAR_7->encPath.multiFrag)
   VAR_7->vfeImaskLocal.encYPingpongIrq = VAR_1;

  if (VAR_7->vfeBusConfigLocal.encCbcrWrPathEn &&
    VAR_7->encPath.multiFrag)
   VAR_7->vfeImaskLocal.encCbcrPingpongIrq = VAR_1;

  if (VAR_7->vfeBusConfigLocal.viewYWrPathEn &&
    VAR_7->viewPath.multiFrag)
   VAR_7->vfeImaskLocal.viewYPingpongIrq = VAR_1;

  if (VAR_7->vfeBusConfigLocal.viewCbcrWrPathEn &&
    VAR_7->viewPath.multiFrag)
   VAR_7->vfeImaskLocal.viewCbcrPingpongIrq = VAR_1;
 }
  break;

 case 131: {
  VAR_7->vfeCamifConfigLocal.camif2BusEnable = VAR_1;
  VAR_7->vfeCamifConfigLocal.camif2OutputEnable = VAR_1;
  VAR_7->vfeBusConfigLocal.rawWritePathSelect =
   VAR_6;

  VAR_7->encPath.pathEnabled = VAR_1;
  VAR_7->vfeImaskLocal.encIrq = VAR_1;
  VAR_7->vfeIrqCompositeMaskLocal.encIrqComMask =
   VAR_2;

  VAR_7->vfeBusConfigLocal.encYWrPathEn = VAR_1;
  VAR_7->vfeBusConfigLocal.encCbcrWrPathEn = VAR_1;

  VAR_7->viewPath.pathEnabled = VAR_1;
  VAR_7->vfeImaskLocal.viewIrq = VAR_1;
  VAR_7->vfeIrqCompositeMaskLocal.viewIrqComMask =
   VAR_3;

  VAR_7->vfeBusConfigLocal.viewYWrPathEn = VAR_0;
  VAR_7->vfeBusConfigLocal.viewCbcrWrPathEn = VAR_1;

  if (VAR_7->vfeBusConfigLocal.encYWrPathEn &&
    VAR_7->encPath.multiFrag)
   VAR_7->vfeImaskLocal.encYPingpongIrq = VAR_1;

  if (VAR_7->vfeBusConfigLocal.encCbcrWrPathEn &&
    VAR_7->encPath.multiFrag)
   VAR_7->vfeImaskLocal.encCbcrPingpongIrq = VAR_1;

  if (VAR_7->vfeBusConfigLocal.viewYWrPathEn &&
    VAR_7->viewPath.multiFrag)
   VAR_7->vfeImaskLocal.viewYPingpongIrq = VAR_1;

  if (VAR_7->vfeBusConfigLocal.viewCbcrWrPathEn &&
    VAR_7->viewPath.multiFrag)
   VAR_7->vfeImaskLocal.viewCbcrPingpongIrq = VAR_1;
 }
  break;

 case 134: {
  VAR_7->vfeCamifConfigLocal.camif2BusEnable = VAR_1;
  VAR_7->vfeCamifConfigLocal.camif2OutputEnable = VAR_1;
  VAR_7->vfeBusConfigLocal.rawWritePathSelect =
   VAR_5;

  VAR_7->encPath.pathEnabled = VAR_1;
  VAR_7->vfeImaskLocal.encIrq = VAR_1;
  VAR_7->vfeIrqCompositeMaskLocal.encIrqComMask =
   VAR_3;

  VAR_7->vfeBusConfigLocal.encYWrPathEn = VAR_0;
  VAR_7->vfeBusConfigLocal.encCbcrWrPathEn = VAR_1;

  VAR_7->viewPath.pathEnabled = VAR_1;
  VAR_7->vfeImaskLocal.viewIrq = VAR_1;

  VAR_7->vfeIrqCompositeMaskLocal.viewIrqComMask =
   VAR_2;

  VAR_7->vfeBusConfigLocal.viewYWrPathEn = VAR_1;
  VAR_7->vfeBusConfigLocal.viewCbcrWrPathEn = VAR_1;

  if (VAR_7->vfeBusConfigLocal.encYWrPathEn &&
    VAR_7->encPath.multiFrag)
   VAR_7->vfeImaskLocal.encYPingpongIrq = VAR_1;

  if (VAR_7->vfeBusConfigLocal.encCbcrWrPathEn &&
    VAR_7->encPath.multiFrag)
   VAR_7->vfeImaskLocal.encCbcrPingpongIrq = VAR_1;

  if (VAR_7->vfeBusConfigLocal.viewYWrPathEn &&
    VAR_7->viewPath.multiFrag)
   VAR_7->vfeImaskLocal.viewYPingpongIrq = VAR_1;

  if (VAR_7->vfeBusConfigLocal.viewCbcrWrPathEn &&
    VAR_7->viewPath.multiFrag)
   VAR_7->vfeImaskLocal.viewCbcrPingpongIrq = VAR_1;
 }
  break;

 case 137:
  break;
 }



 VAR_14 = VAR_7->encPath.fragCount;

 VAR_10 = VAR_7->encPath.yPath.addressBuffer;
 VAR_11 = VAR_7->encPath.nextFrameAddrBuf;

 VAR_12 = &(VAR_9->output2.outputY.outFragments[0][0]);
 for (VAR_13 = 0; VAR_13 < VAR_14; VAR_13++)
  *VAR_10++ = *VAR_12++;

 VAR_12 = &(VAR_9->output2.outputY.outFragments[1][0]);
 for (VAR_13 = 0; VAR_13 < VAR_14; VAR_13++)
  *VAR_10++ = *VAR_12++;

 VAR_12 = &(VAR_9->output2.outputY.outFragments[2][0]);
 for (VAR_13 = 0; VAR_13 < VAR_14; VAR_13++)
  *VAR_11++ = *VAR_12++;

 VAR_10 = VAR_7->encPath.cbcrPath.addressBuffer;

 VAR_12 = &(VAR_9->output2.outputCbcr.outFragments[0][0]);
 for (VAR_13 = 0; VAR_13 < VAR_14; VAR_13++)
  *VAR_10++ = *VAR_12++;

 VAR_12 = &(VAR_9->output2.outputCbcr.outFragments[1][0]);
 for (VAR_13 = 0; VAR_13 < VAR_14; VAR_13++)
  *VAR_10++ = *VAR_12++;

 VAR_12 = &(VAR_9->output2.outputCbcr.outFragments[2][0]);
 for (VAR_13 = 0; VAR_13 < VAR_14; VAR_13++)
  *VAR_11++ = *VAR_12++;

 FUNC_2(&VAR_7->viewPath, &VAR_7->encPath);

 VAR_7->encPath.ackPending = VAR_0;
 VAR_7->encPath.currentFrame = VAR_8;
 VAR_7->encPath.whichOutputPath = 1;
 VAR_7->encPath.yPath.fragIndex = 2;
 VAR_7->encPath.cbcrPath.fragIndex = 2;
 VAR_7->encPath.yPath.hwCurrentFlag = VAR_8;
 VAR_7->encPath.cbcrPath.hwCurrentFlag = VAR_8;


 VAR_10 = VAR_7->viewPath.yPath.addressBuffer;
 VAR_11 = VAR_7->viewPath.nextFrameAddrBuf;
 VAR_14 = VAR_7->viewPath.fragCount;

 VAR_12 = &(VAR_9->output1.outputY.outFragments[0][0]);
 for (VAR_13 = 0; VAR_13 < VAR_14; VAR_13++)
  *VAR_10++ = *VAR_12++;

 VAR_12 = &(VAR_9->output1.outputY.outFragments[1][0]);
 for (VAR_13 = 0; VAR_13 < VAR_14; VAR_13++)
  *VAR_10++ = *VAR_12++;

 VAR_12 = &(VAR_9->output1.outputY.outFragments[2][0]);
 for (VAR_13 = 0; VAR_13 < VAR_14; VAR_13++)
  *VAR_11++ = *VAR_12++;

 VAR_10 = VAR_7->viewPath.cbcrPath.addressBuffer;

 VAR_12 = &(VAR_9->output1.outputCbcr.outFragments[0][0]);
 for (VAR_13 = 0; VAR_13 < VAR_14; VAR_13++)
  *VAR_10++ = *VAR_12++;

 VAR_12 = &(VAR_9->output1.outputCbcr.outFragments[1][0]);
 for (VAR_13 = 0; VAR_13 < VAR_14; VAR_13++)
  *VAR_10++ = *VAR_12++;

 VAR_12 = &(VAR_9->output1.outputCbcr.outFragments[2][0]);
 for (VAR_13 = 0; VAR_13 < VAR_14; VAR_13++)
  *VAR_11++ = *VAR_12++;

 VAR_7->viewPath.ackPending = VAR_0;
 VAR_7->viewPath.currentFrame = VAR_8;
 VAR_7->viewPath.whichOutputPath = 0;
 VAR_7->viewPath.yPath.fragIndex = 2;
 VAR_7->viewPath.cbcrPath.fragIndex = 2;
 VAR_7->viewPath.yPath.hwCurrentFlag = VAR_8;
 VAR_7->viewPath.cbcrPath.hwCurrentFlag = VAR_8;


 FUNC_1(VAR_9, &VAR_7->viewPath, &VAR_7->encPath, VAR_15);
}
