
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_9__ ;
typedef struct TYPE_25__ TYPE_8__ ;
typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_13__ ;
typedef struct TYPE_16__ TYPE_12__ ;
typedef struct TYPE_15__ TYPE_11__ ;
typedef struct TYPE_14__ TYPE_10__ ;


struct TYPE_17__ {scalar_t__ cradled; scalar_t__ button; scalar_t__ bottomlight; scalar_t__ toplight; scalar_t__ qx3_detected; } ;
struct TYPE_16__ {int targetFR; int targetQ; int frTargeting; } ;
struct TYPE_15__ {int decimation; int mode; } ;
struct TYPE_14__ {int yuvOrder; int subSample; } ;
struct TYPE_26__ {int yThreshold; int uvThreshold; } ;
struct TYPE_25__ {size_t baserate; size_t divisor; } ;
struct TYPE_24__ {int hysteresis; int threshMax; int smallStep; int largeStep; int decimationHysteresis; int frDiffStepThresh; int qDiffStepThresh; int decimationThreshMod; } ;
struct TYPE_23__ {int gain1; int gain2; int gain4; int gain8; } ;
struct TYPE_22__ {int brightness; int saturation; int contrast; } ;
struct TYPE_21__ {int disabled; int allowableOverExposure; int coarseJump; scalar_t__ flickerMode; } ;
struct TYPE_20__ {int gain1; int gain2; int gain4; int gain8; } ;
struct TYPE_19__ {int balanceMode; int redGain; int greenGain; int blueGain; } ;
struct TYPE_18__ {int gainMode; int expMode; int compMode; int centreWeight; int coarseExpLo; int blueComp; int green2Comp; int green1Comp; int redComp; scalar_t__ coarseExpHi; scalar_t__ fineExp; scalar_t__ gain; } ;
struct cam_params {TYPE_13__ qx3; TYPE_12__ compressionTarget; TYPE_11__ compression; TYPE_10__ format; TYPE_9__ yuvThreshold; TYPE_8__ sensorFps; TYPE_7__ compressionParams; TYPE_6__ vlOffset; TYPE_5__ colourParams; TYPE_4__ flickerControl; TYPE_3__ apcor; TYPE_2__ colourBalance; TYPE_1__ exposure; } ;
struct sd {size_t mainsFreq; struct cam_params params; } ;
struct gspca_dev {int dummy; } ;


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
 int FUNC_0 (int ) ;
 int *** VAR_12 ;

__attribute__((used)) static void FUNC_1(struct gspca_dev *VAR_13)
{
 struct sd *VAR_14 = (struct sd *) VAR_13;
 struct cam_params *VAR_15 = &VAR_14->params;




 VAR_15->colourParams.brightness = VAR_0;
 VAR_15->colourParams.contrast = VAR_6;
 VAR_15->colourParams.saturation = VAR_9;
 VAR_15->exposure.gainMode = 4;
 VAR_15->exposure.expMode = 2;
 VAR_15->exposure.compMode = 1;
 VAR_15->exposure.centreWeight = 1;
 VAR_15->exposure.gain = 0;
 VAR_15->exposure.fineExp = 0;
 VAR_15->exposure.coarseExpLo = 185;
 VAR_15->exposure.coarseExpHi = 0;
 VAR_15->exposure.redComp = VAR_4;
 VAR_15->exposure.green1Comp = VAR_2;
 VAR_15->exposure.green2Comp = VAR_3;
 VAR_15->exposure.blueComp = VAR_1;
 VAR_15->colourBalance.balanceMode = 2;
 VAR_15->colourBalance.redGain = 32;
 VAR_15->colourBalance.greenGain = 6;
 VAR_15->colourBalance.blueGain = 92;
 VAR_15->apcor.gain1 = 0x18;
 VAR_15->apcor.gain2 = 0x16;
 VAR_15->apcor.gain4 = 0x24;
 VAR_15->apcor.gain8 = 0x34;
 VAR_15->flickerControl.flickerMode = 0;
 VAR_15->flickerControl.disabled = 1;

 VAR_15->flickerControl.coarseJump =
  VAR_12[VAR_14->mainsFreq]
        [VAR_15->sensorFps.baserate]
        [VAR_15->sensorFps.divisor];
 VAR_15->flickerControl.allowableOverExposure =
  FUNC_0(VAR_15->colourParams.brightness);
 VAR_15->vlOffset.gain1 = 20;
 VAR_15->vlOffset.gain2 = 24;
 VAR_15->vlOffset.gain4 = 26;
 VAR_15->vlOffset.gain8 = 26;
 VAR_15->compressionParams.hysteresis = 3;
 VAR_15->compressionParams.threshMax = 11;
 VAR_15->compressionParams.smallStep = 1;
 VAR_15->compressionParams.largeStep = 3;
 VAR_15->compressionParams.decimationHysteresis = 2;
 VAR_15->compressionParams.frDiffStepThresh = 5;
 VAR_15->compressionParams.qDiffStepThresh = 3;
 VAR_15->compressionParams.decimationThreshMod = 2;




 VAR_15->sensorFps.divisor = 1;
 VAR_15->sensorFps.baserate = 1;

 VAR_15->yuvThreshold.yThreshold = 6;
 VAR_15->yuvThreshold.uvThreshold = 6;

 VAR_15->format.subSample = VAR_10;
 VAR_15->format.yuvOrder = VAR_11;

 VAR_15->compression.mode = VAR_7;
 VAR_15->compression.decimation = VAR_8;

 VAR_15->compressionTarget.frTargeting = VAR_5;
 VAR_15->compressionTarget.targetFR = 15;
 VAR_15->compressionTarget.targetQ = 5;

 VAR_15->qx3.qx3_detected = 0;
 VAR_15->qx3.toplight = 0;
 VAR_15->qx3.bottomlight = 0;
 VAR_15->qx3.button = 0;
 VAR_15->qx3.cradled = 0;
}
