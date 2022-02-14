
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_11__ {int coarseExpHi; int coarseExpLo; scalar_t__ gain; int gainMode; } ;
struct TYPE_10__ {int divisor; size_t baserate; } ;
struct TYPE_9__ {int coarseJump; int disabled; } ;
struct TYPE_8__ {int brightness; } ;
struct TYPE_12__ {TYPE_5__ exposure; TYPE_4__ sensorFps; TYPE_3__ flickerControl; TYPE_2__ colourParams; } ;
struct cam_data {scalar_t__ exposure_status; int exposure_count; int fps; size_t mainsFreq; int param_lock; int cmd_queue; TYPE_6__ params; int lowlevel_data; TYPE_1__* ops; } ;
struct TYPE_7__ {int (* transferCmd ) (int ,int*,int*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 void* VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_0 (int,int) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (char*,...) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 void**** VAR_20 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int*,int*) ;

__attribute__((used)) static void FUNC_5(struct cam_data *VAR_21)
{
 u8 VAR_22, VAR_23, VAR_24, VAR_25, VAR_26[8], VAR_27[8];
 int VAR_28, VAR_29, VAR_30, VAR_31;
 int VAR_32, VAR_33, VAR_34;



 VAR_26[0] = VAR_3>>8;
 VAR_26[1] = VAR_3&0xff;
 VAR_26[2] = 30;
 VAR_26[3] = 4;
 VAR_26[4] = 9;
 VAR_26[5] = 8;
 VAR_26[6] = 8;
 VAR_26[7] = 0;
 VAR_28 = VAR_21->ops->transferCmd(VAR_21->lowlevel_data, VAR_26, VAR_27);
 if (VAR_28) {
  FUNC_1("ReadVPRegs(30,4,9,8) - failed, retval=%d\n",
      VAR_28);
  return;
 }
 VAR_22 = VAR_27[0];
 VAR_23 = VAR_27[1];
 VAR_24 = VAR_27[2];
 VAR_25 = VAR_27[3];

 FUNC_2(&VAR_21->param_lock);
 VAR_29 = VAR_21->params.colourParams.brightness +
      VAR_18 - 50 + VAR_11;
 if(VAR_29 > 255)
  VAR_29 = 255;
 VAR_30 = VAR_21->params.colourParams.brightness +
     VAR_18 - 50 - VAR_10;
 if(VAR_30 < 0)
  VAR_30 = 0;
 VAR_31 = VAR_30/2;

 VAR_32 = VAR_21->params.exposure.coarseExpHi * 256 +
         VAR_21->params.exposure.coarseExpLo;

 if(!VAR_21->params.flickerControl.disabled) {

  int VAR_35 = FUNC_0(1,2) ? VAR_15 : VAR_12;
  VAR_23 += 128;
  if(VAR_23 >= VAR_35 && VAR_22 < VAR_30) {

   if(VAR_22 < VAR_31) {

    if(VAR_21->exposure_status == VAR_8)
     ++VAR_21->exposure_count;
    else {
     VAR_21->exposure_status = VAR_8;
     VAR_21->exposure_count = 1;
    }
   } else {

    if(VAR_21->exposure_status == VAR_5)
     ++VAR_21->exposure_count;
    else {
     VAR_21->exposure_status = VAR_5;
     VAR_21->exposure_count = 1;
    }
   }
  } else if(VAR_32 <= VAR_14 || VAR_22 > VAR_29) {

   if(VAR_32 <= VAR_19) {

    if(VAR_21->exposure_status == VAR_9)
     ++VAR_21->exposure_count;
    else {
     VAR_21->exposure_status = VAR_9;
     VAR_21->exposure_count = 1;
    }
   } else {

    if(VAR_21->exposure_status == VAR_6)
     ++VAR_21->exposure_count;
    else {
     VAR_21->exposure_status = VAR_6;
     VAR_21->exposure_count = 1;
    }
   }
  } else {

   VAR_21->exposure_status = VAR_7;
  }
 } else {

  if(VAR_32 >= VAR_16 && VAR_22 < VAR_30) {

   if(VAR_22 < VAR_31) {

    if(VAR_21->exposure_status == VAR_8)
     ++VAR_21->exposure_count;
    else {
     VAR_21->exposure_status = VAR_8;
     VAR_21->exposure_count = 1;
    }
   } else {

    if(VAR_21->exposure_status == VAR_5)
     ++VAR_21->exposure_count;
    else {
     VAR_21->exposure_status = VAR_5;
     VAR_21->exposure_count = 1;
    }
   }
  } else if(VAR_32 <= VAR_14 || VAR_22 > VAR_29) {

   if(VAR_32 <= VAR_19) {

    if(VAR_21->exposure_status == VAR_9)
     ++VAR_21->exposure_count;
    else {
     VAR_21->exposure_status = VAR_9;
     VAR_21->exposure_count = 1;
    }
   } else {

    if(VAR_21->exposure_status == VAR_6)
     ++VAR_21->exposure_count;
    else {
     VAR_21->exposure_status = VAR_6;
     VAR_21->exposure_count = 1;
    }
   }
  } else {

   VAR_21->exposure_status = VAR_7;
  }
 }

 VAR_34 = VAR_21->fps;
 if(VAR_34 > 30 || VAR_34 < 1)
  VAR_34 = 1;

 if(!VAR_21->params.flickerControl.disabled) {

  if((VAR_21->exposure_status == VAR_8 ||
      VAR_21->exposure_status == VAR_5) &&
     VAR_21->exposure_count >= VAR_4*VAR_34 &&
     VAR_21->params.sensorFps.divisor < 3) {


   ++VAR_21->params.sensorFps.divisor;
   VAR_21->cmd_queue |= VAR_2;

   VAR_21->params.flickerControl.coarseJump =
    VAR_20[VAR_21->mainsFreq]
          [VAR_21->params.sensorFps.baserate]
          [VAR_21->params.sensorFps.divisor];
   VAR_21->cmd_queue |= VAR_1;

   VAR_33 = VAR_21->params.flickerControl.coarseJump-1;
   while(VAR_33 < VAR_32/2)
    VAR_33 += VAR_21->params.flickerControl.coarseJump;
   VAR_21->params.exposure.coarseExpLo = VAR_33 & 0xff;
   VAR_21->params.exposure.coarseExpHi = VAR_33 >> 8;
   VAR_21->cmd_queue |= VAR_0;
   VAR_21->exposure_status = VAR_7;
   FUNC_1("Automatically decreasing sensor_fps\n");

  } else if((VAR_21->exposure_status == VAR_9 ||
      VAR_21->exposure_status == VAR_6) &&
     VAR_21->exposure_count >= VAR_13*VAR_34 &&
     VAR_21->params.sensorFps.divisor > 0) {


   int VAR_36 = FUNC_0(1,2) ? VAR_17 : VAR_16 ;

   --VAR_21->params.sensorFps.divisor;
   VAR_21->cmd_queue |= VAR_2;

   VAR_21->params.flickerControl.coarseJump =
    VAR_20[VAR_21->mainsFreq]
          [VAR_21->params.sensorFps.baserate]
          [VAR_21->params.sensorFps.divisor];
   VAR_21->cmd_queue |= VAR_1;

   VAR_33 = VAR_21->params.flickerControl.coarseJump-1;
   while(VAR_33 < 2*VAR_32 &&
         VAR_33+
         VAR_21->params.flickerControl.coarseJump < VAR_36)
    VAR_33 += VAR_21->params.flickerControl.coarseJump;
   VAR_21->params.exposure.coarseExpLo = VAR_33 & 0xff;
   VAR_21->params.exposure.coarseExpHi = VAR_33 >> 8;
   VAR_21->cmd_queue |= VAR_0;
   VAR_21->exposure_status = VAR_7;
   FUNC_1("Automatically increasing sensor_fps\n");
  }
 } else {

  if((VAR_21->exposure_status == VAR_8 ||
      VAR_21->exposure_status == VAR_5) &&
     VAR_21->exposure_count >= VAR_4*VAR_34 &&
     VAR_21->params.sensorFps.divisor < 3) {


   ++VAR_21->params.sensorFps.divisor;
   VAR_21->cmd_queue |= VAR_2;

   if(VAR_21->params.exposure.gain > 0) {
    --VAR_21->params.exposure.gain;
    VAR_21->cmd_queue |= VAR_0;
   }
   VAR_21->exposure_status = VAR_7;
   FUNC_1("Automatically decreasing sensor_fps\n");

  } else if((VAR_21->exposure_status == VAR_9 ||
      VAR_21->exposure_status == VAR_6) &&
     VAR_21->exposure_count >= VAR_13*VAR_34 &&
     VAR_21->params.sensorFps.divisor > 0) {


   --VAR_21->params.sensorFps.divisor;
   VAR_21->cmd_queue |= VAR_2;

   if(VAR_21->params.exposure.gain <
      VAR_21->params.exposure.gainMode-1) {
    ++VAR_21->params.exposure.gain;
    VAR_21->cmd_queue |= VAR_0;
   }
   VAR_21->exposure_status = VAR_7;
   FUNC_1("Automatically increasing sensor_fps\n");
  }
 }
 FUNC_3(&VAR_21->param_lock);
}
