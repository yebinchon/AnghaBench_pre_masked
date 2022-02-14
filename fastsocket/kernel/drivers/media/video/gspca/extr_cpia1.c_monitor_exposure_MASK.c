
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_9__ {int coarseExpHi; int coarseExpLo; scalar_t__ gain; int gainMode; } ;
struct TYPE_8__ {int divisor; size_t baserate; } ;
struct TYPE_7__ {int coarseJump; int disabled; } ;
struct TYPE_6__ {int brightness; } ;
struct TYPE_10__ {TYPE_4__ exposure; TYPE_3__ sensorFps; TYPE_2__ flickerControl; TYPE_1__ colourParams; } ;
struct sd {scalar_t__ exposure_status; int exposure_count; size_t mainsFreq; TYPE_5__ params; int fps; } ;
struct gspca_dev {int* usb_buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 void* VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 (int,int) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_1 (int ,char*) ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct gspca_dev*) ;
 int FUNC_4 (struct gspca_dev*) ;
 int FUNC_5 (struct gspca_dev*) ;
 int FUNC_6 (struct gspca_dev*,int*) ;
 int FUNC_7 (char*,int) ;
 void**** VAR_18 ;

__attribute__((used)) static void FUNC_8(struct gspca_dev *VAR_19)
{
 struct sd *VAR_20 = (struct sd *) VAR_19;
 u8 VAR_21, VAR_22, VAR_23, VAR_24, VAR_25[8];
 int VAR_26, VAR_27, VAR_28, VAR_29;
 int VAR_30, VAR_31, VAR_32;
 int VAR_33 = 0, VAR_34 = 0, VAR_35 = 0;



 VAR_25[0] = VAR_0 >> 8;
 VAR_25[1] = VAR_0 & 0xff;
 VAR_25[2] = 30;
 VAR_25[3] = 4;
 VAR_25[4] = 9;
 VAR_25[5] = 8;
 VAR_25[6] = 8;
 VAR_25[7] = 0;
 VAR_26 = FUNC_6(VAR_19, VAR_25);
 if (VAR_26) {
  FUNC_7("ReadVPRegs(30,4,9,8) - failed: %d", VAR_26);
  return;
 }
 VAR_21 = VAR_19->usb_buf[0];
 VAR_22 = VAR_19->usb_buf[1];
 VAR_23 = VAR_19->usb_buf[2];
 VAR_24 = VAR_19->usb_buf[3];

 VAR_27 = VAR_20->params.colourParams.brightness +
      VAR_16 - 50 + VAR_9;
 if (VAR_27 > 255)
  VAR_27 = 255;
 VAR_28 = VAR_20->params.colourParams.brightness +
     VAR_16 - 50 - VAR_8;
 if (VAR_28 < 0)
  VAR_28 = 0;
 VAR_29 = VAR_28 / 2;

 VAR_30 = VAR_20->params.exposure.coarseExpHi * 256 +
         VAR_20->params.exposure.coarseExpLo;

 if (!VAR_20->params.flickerControl.disabled) {

  int VAR_36 = FUNC_0(1, 2) ? VAR_13 :
       VAR_10;
  VAR_22 += 128;
  if (VAR_22 >= VAR_36 && VAR_21 < VAR_28) {

   if (VAR_21 < VAR_29) {

    if (VAR_20->exposure_status == VAR_6)
     ++VAR_20->exposure_count;
    else {
     VAR_20->exposure_status =
      VAR_6;
     VAR_20->exposure_count = 1;
    }
   } else {

    if (VAR_20->exposure_status == VAR_3)
     ++VAR_20->exposure_count;
    else {
     VAR_20->exposure_status = VAR_3;
     VAR_20->exposure_count = 1;
    }
   }
  } else if (VAR_30 <= VAR_12 || VAR_21 > VAR_27) {

   if (VAR_30 <= VAR_17) {

    if (VAR_20->exposure_status == VAR_7)
     ++VAR_20->exposure_count;
    else {
     VAR_20->exposure_status =
      VAR_7;
     VAR_20->exposure_count = 1;
    }
   } else {

    if (VAR_20->exposure_status == VAR_4)
     ++VAR_20->exposure_count;
    else {
     VAR_20->exposure_status = VAR_4;
     VAR_20->exposure_count = 1;
    }
   }
  } else {

   VAR_20->exposure_status = VAR_5;
  }
 } else {

  if (VAR_30 >= VAR_14 && VAR_21 < VAR_28) {

   if (VAR_21 < VAR_29) {

    if (VAR_20->exposure_status == VAR_6)
     ++VAR_20->exposure_count;
    else {
     VAR_20->exposure_status =
      VAR_6;
     VAR_20->exposure_count = 1;
    }
   } else {

    if (VAR_20->exposure_status == VAR_3)
     ++VAR_20->exposure_count;
    else {
     VAR_20->exposure_status = VAR_3;
     VAR_20->exposure_count = 1;
    }
   }
  } else if (VAR_30 <= VAR_12 || VAR_21 > VAR_27) {

   if (VAR_30 <= VAR_17) {

    if (VAR_20->exposure_status == VAR_7)
     ++VAR_20->exposure_count;
    else {
     VAR_20->exposure_status =
      VAR_7;
     VAR_20->exposure_count = 1;
    }
   } else {

    if (VAR_20->exposure_status == VAR_4)
     ++VAR_20->exposure_count;
    else {
     VAR_20->exposure_status = VAR_4;
     VAR_20->exposure_count = 1;
    }
   }
  } else {

   VAR_20->exposure_status = VAR_5;
  }
 }

 VAR_32 = FUNC_2(&VAR_20->fps);
 if (VAR_32 > 30 || VAR_32 < 1)
  VAR_32 = 1;

 if (!VAR_20->params.flickerControl.disabled) {

  if ((VAR_20->exposure_status == VAR_6 ||
       VAR_20->exposure_status == VAR_3) &&
      VAR_20->exposure_count >= VAR_1 * VAR_32 &&
      VAR_20->params.sensorFps.divisor < 3) {


   ++VAR_20->params.sensorFps.divisor;
   VAR_33 = 1;

   VAR_20->params.flickerControl.coarseJump =
    VAR_18[VAR_20->mainsFreq]
          [VAR_20->params.sensorFps.baserate]
          [VAR_20->params.sensorFps.divisor];
   VAR_35 = 1;

   VAR_31 = VAR_20->params.flickerControl.coarseJump-1;
   while (VAR_31 < VAR_30 / 2)
    VAR_31 +=
     VAR_20->params.flickerControl.coarseJump;
   VAR_20->params.exposure.coarseExpLo = VAR_31 & 0xff;
   VAR_20->params.exposure.coarseExpHi = VAR_31 >> 8;
   VAR_34 = 1;
   VAR_20->exposure_status = VAR_5;
   FUNC_1(VAR_2, "Automatically decreasing sensor_fps");

  } else if ((VAR_20->exposure_status == VAR_7 ||
       VAR_20->exposure_status == VAR_4) &&
      VAR_20->exposure_count >= VAR_11 * VAR_32 &&
      VAR_20->params.sensorFps.divisor > 0) {


   int VAR_37 = FUNC_0(1, 2) ? VAR_15 :
              VAR_14;
   --VAR_20->params.sensorFps.divisor;
   VAR_33 = 1;

   VAR_20->params.flickerControl.coarseJump =
    VAR_18[VAR_20->mainsFreq]
          [VAR_20->params.sensorFps.baserate]
          [VAR_20->params.sensorFps.divisor];
   VAR_35 = 1;

   VAR_31 = VAR_20->params.flickerControl.coarseJump-1;
   while (VAR_31 < 2 * VAR_30 &&
          VAR_31 +
          VAR_20->params.flickerControl.coarseJump < VAR_37)
    VAR_31 +=
     VAR_20->params.flickerControl.coarseJump;
   VAR_20->params.exposure.coarseExpLo = VAR_31 & 0xff;
   VAR_20->params.exposure.coarseExpHi = VAR_31 >> 8;
   VAR_34 = 1;
   VAR_20->exposure_status = VAR_5;
   FUNC_1(VAR_2, "Automatically increasing sensor_fps");
  }
 } else {

  if ((VAR_20->exposure_status == VAR_6 ||
       VAR_20->exposure_status == VAR_3) &&
      VAR_20->exposure_count >= VAR_1 * VAR_32 &&
      VAR_20->params.sensorFps.divisor < 3) {


   ++VAR_20->params.sensorFps.divisor;
   VAR_33 = 1;

   if (VAR_20->params.exposure.gain > 0) {
    --VAR_20->params.exposure.gain;
    VAR_34 = 1;
   }
   VAR_20->exposure_status = VAR_5;
   FUNC_1(VAR_2, "Automatically decreasing sensor_fps");

  } else if ((VAR_20->exposure_status == VAR_7 ||
       VAR_20->exposure_status == VAR_4) &&
      VAR_20->exposure_count >= VAR_11 * VAR_32 &&
      VAR_20->params.sensorFps.divisor > 0) {


   --VAR_20->params.sensorFps.divisor;
   VAR_33 = 1;

   if (VAR_20->params.exposure.gain <
       VAR_20->params.exposure.gainMode - 1) {
    ++VAR_20->params.exposure.gain;
    VAR_34 = 1;
   }
   VAR_20->exposure_status = VAR_5;
   FUNC_1(VAR_2, "Automatically increasing sensor_fps");
  }
 }

 if (VAR_34)
  FUNC_3(VAR_19);

 if (VAR_33)
  FUNC_5(VAR_19);

 if (VAR_35)
  FUNC_4(VAR_19);
}
