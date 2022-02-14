
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_34__ TYPE_9__ ;
typedef struct TYPE_33__ TYPE_8__ ;
typedef struct TYPE_32__ TYPE_7__ ;
typedef struct TYPE_31__ TYPE_6__ ;
typedef struct TYPE_30__ TYPE_5__ ;
typedef struct TYPE_29__ TYPE_4__ ;
typedef struct TYPE_28__ TYPE_3__ ;
typedef struct TYPE_27__ TYPE_2__ ;
typedef struct TYPE_26__ TYPE_1__ ;
typedef struct TYPE_25__ TYPE_17__ ;
typedef struct TYPE_24__ TYPE_16__ ;
typedef struct TYPE_23__ TYPE_15__ ;
typedef struct TYPE_22__ TYPE_14__ ;
typedef struct TYPE_21__ TYPE_13__ ;
typedef struct TYPE_20__ TYPE_12__ ;
typedef struct TYPE_19__ TYPE_11__ ;
typedef struct TYPE_18__ TYPE_10__ ;


struct TYPE_20__ {int * clips; scalar_t__ clipcount; scalar_t__ flags; scalar_t__ chromakey; scalar_t__ y; scalar_t__ x; } ;
struct TYPE_19__ {scalar_t__ height; scalar_t__ width; scalar_t__ y; scalar_t__ x; } ;
struct TYPE_18__ {int colour; int hue; int brightness; int contrast; int depth; int palette; scalar_t__ whiteness; } ;
struct TYPE_34__ {scalar_t__ cradled; scalar_t__ button; scalar_t__ bottomlight; scalar_t__ toplight; scalar_t__ qx3_detected; } ;
struct TYPE_33__ {int targetFR; int targetQ; int frTargeting; } ;
struct TYPE_32__ {int mode; } ;
struct TYPE_31__ {int yuvOrder; int subSample; } ;
struct TYPE_30__ {int yThreshold; int uvThreshold; } ;
struct TYPE_29__ {size_t baserate; size_t divisor; } ;
struct TYPE_28__ {int hysteresis; int threshMax; int smallStep; int largeStep; int decimationHysteresis; int frDiffStepThresh; int qDiffStepThresh; int decimationThreshMod; } ;
struct TYPE_27__ {int gain1; int gain2; int gain4; int gain8; } ;
struct TYPE_21__ {int brightness; int contrast; int saturation; } ;
struct TYPE_26__ {int disabled; int allowableOverExposure; int coarseJump; scalar_t__ flickerMode; } ;
struct TYPE_25__ {int gain1; int gain2; int gain4; int gain8; } ;
struct TYPE_23__ {int balanceMode; int redGain; int greenGain; int blueGain; } ;
struct TYPE_22__ {int gainMode; int expMode; int compMode; int centreWeight; int coarseExpLo; int blueComp; int green2Comp; int green1Comp; int redComp; scalar_t__ coarseExpHi; scalar_t__ fineExp; scalar_t__ gain; } ;
struct TYPE_24__ {TYPE_9__ qx3; TYPE_8__ compressionTarget; TYPE_7__ compression; TYPE_6__ format; TYPE_5__ yuvThreshold; TYPE_4__ sensorFps; TYPE_3__ compressionParams; TYPE_2__ vlOffset; TYPE_13__ colourParams; TYPE_1__ flickerControl; TYPE_17__ apcor; TYPE_15__ colourBalance; TYPE_14__ exposure; } ;
struct cam_data {size_t mainsFreq; int first_frame; int cmd_queue; TYPE_12__ vw; TYPE_11__ vc; TYPE_10__ vp; int video_size; TYPE_16__ params; int exposure_status; scalar_t__ transfer_rate; } ;


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
 int FUNC_0 (int) ;
 int *** VAR_12 ;
 int FUNC_1 (struct cam_data*) ;

__attribute__((used)) static void FUNC_2(struct cam_data *VAR_13)
{



 VAR_13->params.colourParams.brightness = 50;
 VAR_13->params.colourParams.contrast = 48;
 VAR_13->params.colourParams.saturation = 50;
 VAR_13->params.exposure.gainMode = 4;
 VAR_13->params.exposure.expMode = 2;
 VAR_13->params.exposure.compMode = 1;
 VAR_13->params.exposure.centreWeight = 1;
 VAR_13->params.exposure.gain = 0;
 VAR_13->params.exposure.fineExp = 0;
 VAR_13->params.exposure.coarseExpLo = 185;
 VAR_13->params.exposure.coarseExpHi = 0;
 VAR_13->params.exposure.redComp = VAR_4;
 VAR_13->params.exposure.green1Comp = VAR_2;
 VAR_13->params.exposure.green2Comp = VAR_3;
 VAR_13->params.exposure.blueComp = VAR_1;
 VAR_13->params.colourBalance.balanceMode = 2;
 VAR_13->params.colourBalance.redGain = 32;
 VAR_13->params.colourBalance.greenGain = 6;
 VAR_13->params.colourBalance.blueGain = 92;
 VAR_13->params.apcor.gain1 = 0x18;
 VAR_13->params.apcor.gain2 = 0x16;
 VAR_13->params.apcor.gain4 = 0x24;
 VAR_13->params.apcor.gain8 = 0x34;
 VAR_13->params.flickerControl.flickerMode = 0;
 VAR_13->params.flickerControl.disabled = 1;

 VAR_13->params.flickerControl.coarseJump =
  VAR_12[VAR_13->mainsFreq]
        [VAR_13->params.sensorFps.baserate]
        [VAR_13->params.sensorFps.divisor];
 VAR_13->params.flickerControl.allowableOverExposure =
  -FUNC_0(VAR_13->params.colourParams.brightness);
 VAR_13->params.vlOffset.gain1 = 20;
 VAR_13->params.vlOffset.gain2 = 24;
 VAR_13->params.vlOffset.gain4 = 26;
 VAR_13->params.vlOffset.gain8 = 26;
 VAR_13->params.compressionParams.hysteresis = 3;
 VAR_13->params.compressionParams.threshMax = 11;
 VAR_13->params.compressionParams.smallStep = 1;
 VAR_13->params.compressionParams.largeStep = 3;
 VAR_13->params.compressionParams.decimationHysteresis = 2;
 VAR_13->params.compressionParams.frDiffStepThresh = 5;
 VAR_13->params.compressionParams.qDiffStepThresh = 3;
 VAR_13->params.compressionParams.decimationThreshMod = 2;


 VAR_13->transfer_rate = 0;
 VAR_13->exposure_status = VAR_7;



 VAR_13->params.sensorFps.divisor = 1;
 VAR_13->params.sensorFps.baserate = 1;

 VAR_13->params.yuvThreshold.yThreshold = 6;
 VAR_13->params.yuvThreshold.uvThreshold = 6;

 VAR_13->params.format.subSample = VAR_8;
 VAR_13->params.format.yuvOrder = VAR_11;

 VAR_13->params.compression.mode = VAR_5;
 VAR_13->params.compressionTarget.frTargeting =
  VAR_6;
 VAR_13->params.compressionTarget.targetFR = 15;
 VAR_13->params.compressionTarget.targetQ = 5;

 VAR_13->params.qx3.qx3_detected = 0;
 VAR_13->params.qx3.toplight = 0;
 VAR_13->params.qx3.bottomlight = 0;
 VAR_13->params.qx3.button = 0;
 VAR_13->params.qx3.cradled = 0;

 VAR_13->video_size = VAR_9;

 VAR_13->vp.colour = 32768;
 VAR_13->vp.hue = 32768;
 VAR_13->vp.brightness = 32768;
 VAR_13->vp.contrast = 32768;
 VAR_13->vp.whiteness = 0;
 VAR_13->vp.depth = 24;
 VAR_13->vp.palette = VAR_10;

 VAR_13->vc.x = 0;
 VAR_13->vc.y = 0;
 VAR_13->vc.width = 0;
 VAR_13->vc.height = 0;

 VAR_13->vw.x = 0;
 VAR_13->vw.y = 0;
 FUNC_1(VAR_13);
 VAR_13->vw.chromakey = 0;
 VAR_13->vw.flags = 0;
 VAR_13->vw.clipcount = 0;
 VAR_13->vw.clips = ((void*)0);

 VAR_13->cmd_queue = VAR_0;
 VAR_13->first_frame = 1;

 return;
}
