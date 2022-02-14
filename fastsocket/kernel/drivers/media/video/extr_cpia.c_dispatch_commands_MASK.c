
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_30__ TYPE_9__ ;
typedef struct TYPE_29__ TYPE_8__ ;
typedef struct TYPE_28__ TYPE_7__ ;
typedef struct TYPE_27__ TYPE_6__ ;
typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;
typedef struct TYPE_21__ TYPE_15__ ;
typedef struct TYPE_20__ TYPE_14__ ;
typedef struct TYPE_19__ TYPE_13__ ;
typedef struct TYPE_18__ TYPE_12__ ;
typedef struct TYPE_17__ TYPE_11__ ;
typedef struct TYPE_16__ TYPE_10__ ;


struct TYPE_16__ {scalar_t__ bottomlight; scalar_t__ toplight; scalar_t__ qx3_detected; } ;
struct TYPE_30__ {int flickerMode; int coarseJump; int allowableOverExposure; } ;
struct TYPE_29__ {int divisor; int baserate; } ;
struct TYPE_28__ {int mode; int decimation; } ;
struct TYPE_27__ {int decimationThreshMod; int qDiffStepThresh; int frDiffStepThresh; int decimationHysteresis; int largeStep; int smallStep; int threshMax; int hysteresis; } ;
struct TYPE_26__ {int yThreshold; int uvThreshold; } ;
struct TYPE_25__ {int frTargeting; int targetFR; int targetQ; } ;
struct TYPE_24__ {int balanceMode; int redGain; int greenGain; int blueGain; } ;
struct TYPE_23__ {int expMode; int coarseExpHi; int coarseExpLo; int fineExp; int gain; int blueComp; int green2Comp; int green1Comp; int redComp; int centreWeight; int compMode; int gainMode; } ;
struct TYPE_22__ {int gain1; int gain2; int gain4; int gain8; } ;
struct TYPE_21__ {int gain1; int gain2; int gain4; int gain8; } ;
struct TYPE_19__ {int brightness; int contrast; int saturation; } ;
struct TYPE_18__ {int colStart; int colEnd; int rowStart; int rowEnd; } ;
struct TYPE_17__ {int videoSize; int subSample; int yuvOrder; } ;
struct TYPE_20__ {int ecpTiming; TYPE_10__ qx3; TYPE_9__ flickerControl; TYPE_8__ sensorFps; TYPE_7__ compression; TYPE_6__ compressionParams; TYPE_5__ yuvThreshold; TYPE_4__ compressionTarget; TYPE_3__ colourBalance; TYPE_2__ exposure; TYPE_1__ vlOffset; TYPE_15__ apcor; TYPE_13__ colourParams; TYPE_12__ roi; TYPE_11__ format; } ;
struct cam_data {int cmd_queue; int first_frame; int param_lock; TYPE_14__ params; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct cam_data*,int ,int,int,int,int ) ;
 int FUNC_3 (struct cam_data*,int ,int ,int,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_4 (struct cam_data*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct cam_data *VAR_34)
{
 FUNC_5(&VAR_34->param_lock);
 if (VAR_34->cmd_queue==VAR_0) {
  FUNC_6(&VAR_34->param_lock);
  return;
 }
 FUNC_0(VAR_34->cmd_queue);
 FUNC_0(VAR_34->cmd_queue>>8);
 if (VAR_34->cmd_queue & VAR_12) {
  FUNC_2(VAR_34, VAR_27,
      VAR_34->params.format.videoSize,
      VAR_34->params.format.subSample,
      VAR_34->params.format.yuvOrder, 0);
  FUNC_2(VAR_34, VAR_28,
      VAR_34->params.roi.colStart, VAR_34->params.roi.colEnd,
      VAR_34->params.roi.rowStart, VAR_34->params.roi.rowEnd);
  VAR_34->first_frame = 1;
 }

 if (VAR_34->cmd_queue & VAR_5)
  FUNC_2(VAR_34, VAR_20,
      VAR_34->params.colourParams.brightness,
      VAR_34->params.colourParams.contrast,
      VAR_34->params.colourParams.saturation, 0);

 if (VAR_34->cmd_queue & VAR_3)
  FUNC_2(VAR_34, VAR_18,
      VAR_34->params.apcor.gain1,
      VAR_34->params.apcor.gain2,
      VAR_34->params.apcor.gain4,
      VAR_34->params.apcor.gain8);

 if (VAR_34->cmd_queue & VAR_15)
  FUNC_2(VAR_34, VAR_30,
      VAR_34->params.vlOffset.gain1,
      VAR_34->params.vlOffset.gain2,
      VAR_34->params.vlOffset.gain4,
      VAR_34->params.vlOffset.gain8);

 if (VAR_34->cmd_queue & VAR_10) {
  FUNC_3(VAR_34, VAR_25,
        VAR_34->params.exposure.gainMode,
        1,
        VAR_34->params.exposure.compMode,
        VAR_34->params.exposure.centreWeight,
        VAR_34->params.exposure.gain,
        VAR_34->params.exposure.fineExp,
        VAR_34->params.exposure.coarseExpLo,
        VAR_34->params.exposure.coarseExpHi,
        VAR_34->params.exposure.redComp,
        VAR_34->params.exposure.green1Comp,
        VAR_34->params.exposure.green2Comp,
        VAR_34->params.exposure.blueComp);
  if(VAR_34->params.exposure.expMode != 1) {
   FUNC_3(VAR_34, VAR_25,
         0,
         VAR_34->params.exposure.expMode,
         0, 0,
         VAR_34->params.exposure.gain,
         VAR_34->params.exposure.fineExp,
         VAR_34->params.exposure.coarseExpLo,
         VAR_34->params.exposure.coarseExpHi,
         0, 0, 0, 0);
  }
 }

 if (VAR_34->cmd_queue & VAR_4) {
  if (VAR_34->params.colourBalance.balanceMode == 1) {
   FUNC_2(VAR_34, VAR_19,
       1,
       VAR_34->params.colourBalance.redGain,
       VAR_34->params.colourBalance.greenGain,
       VAR_34->params.colourBalance.blueGain);
   FUNC_2(VAR_34, VAR_19,
       3, 0, 0, 0);
  }
  if (VAR_34->params.colourBalance.balanceMode == 2) {
   FUNC_2(VAR_34, VAR_19,
       2, 0, 0, 0);
  }
  if (VAR_34->params.colourBalance.balanceMode == 3) {
   FUNC_2(VAR_34, VAR_19,
       3, 0, 0, 0);
  }
 }

 if (VAR_34->cmd_queue & VAR_8)
  FUNC_2(VAR_34, VAR_23,
      VAR_34->params.compressionTarget.frTargeting,
      VAR_34->params.compressionTarget.targetFR,
      VAR_34->params.compressionTarget.targetQ, 0);

 if (VAR_34->cmd_queue & VAR_16)
  FUNC_2(VAR_34, VAR_31,
      VAR_34->params.yuvThreshold.yThreshold,
      VAR_34->params.yuvThreshold.uvThreshold, 0, 0);

 if (VAR_34->cmd_queue & VAR_7)
  FUNC_3(VAR_34, VAR_22,
       0, 0, 0, 0,
       VAR_34->params.compressionParams.hysteresis,
       VAR_34->params.compressionParams.threshMax,
       VAR_34->params.compressionParams.smallStep,
       VAR_34->params.compressionParams.largeStep,
       VAR_34->params.compressionParams.decimationHysteresis,
       VAR_34->params.compressionParams.frDiffStepThresh,
       VAR_34->params.compressionParams.qDiffStepThresh,
       VAR_34->params.compressionParams.decimationThreshMod);

 if (VAR_34->cmd_queue & VAR_6)
  FUNC_2(VAR_34, VAR_21,
      VAR_34->params.compression.mode,
      VAR_34->params.compression.decimation, 0, 0);

 if (VAR_34->cmd_queue & VAR_14)
  FUNC_2(VAR_34, VAR_29,
      VAR_34->params.sensorFps.divisor,
      VAR_34->params.sensorFps.baserate, 0, 0);

 if (VAR_34->cmd_queue & VAR_11)
  FUNC_2(VAR_34, VAR_26,
      VAR_34->params.flickerControl.flickerMode,
      VAR_34->params.flickerControl.coarseJump,
      FUNC_1(VAR_34->params.flickerControl.allowableOverExposure),
      0);

 if (VAR_34->cmd_queue & VAR_9)
  FUNC_2(VAR_34, VAR_24,
      VAR_34->params.ecpTiming, 0, 0, 0);

 if (VAR_34->cmd_queue & VAR_1)
  FUNC_2(VAR_34, VAR_17, 0, 0, 0, 0);

 if (VAR_34->cmd_queue & VAR_2)
  FUNC_4(VAR_34);

 if (VAR_34->cmd_queue & VAR_13 && VAR_34->params.qx3.qx3_detected)
   {
     int VAR_35 = (VAR_34->params.qx3.bottomlight == 0) << 1;
     int VAR_36 = (VAR_34->params.qx3.toplight == 0) << 3;
     FUNC_2(VAR_34, VAR_33, 0x90, 0x8F, 0x50, 0);
     FUNC_2(VAR_34, VAR_32, 2, 0, (VAR_35|VAR_36|0xE0), 0);
   }

 VAR_34->cmd_queue = VAR_0;
 FUNC_6(&VAR_34->param_lock);
 return;
}
