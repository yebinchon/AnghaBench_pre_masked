
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_14__ {int button; int cradled; int qx3_detected; } ;
struct TYPE_13__ {int gain; int fineExp; int coarseExpLo; int coarseExpHi; int redComp; int green1Comp; int green2Comp; int blueComp; } ;
struct TYPE_12__ {int redGain; int greenGain; int blueGain; } ;
struct TYPE_11__ {int brightness; int contrast; int saturation; } ;
struct TYPE_10__ {int vpVersion; int vpRevision; int cameraHeadID; } ;
struct TYPE_17__ {int systemState; int grabState; int streamState; int fatalError; int cmdError; int debugFlags; int vpStatus; int errorCode; } ;
struct TYPE_16__ {int vendor; int product; int deviceRevision; } ;
struct TYPE_15__ {int firmwareVersion; int firmwareRevision; int vcVersion; int vcRevision; } ;
struct TYPE_18__ {TYPE_5__ qx3; TYPE_4__ exposure; TYPE_3__ colourBalance; TYPE_2__ colourParams; TYPE_1__ vpVersion; TYPE_8__ status; TYPE_7__ pnpID; TYPE_6__ version; } ;
struct sd {TYPE_9__ params; } ;
struct gspca_dev {int* usb_buf; } ;
 int VAR_0 ;
 int FUNC_0 (struct gspca_dev*,int*) ;

__attribute__((used)) static int FUNC_1(struct gspca_dev *VAR_1, u16 VAR_2,
        u8 VAR_3, u8 VAR_4, u8 VAR_5, u8 VAR_6)
{
 struct sd *VAR_7 = (struct sd *) VAR_1;
 int VAR_8, VAR_9;
 u8 VAR_10[8];

 switch (VAR_2) {
 case 136:
 case 131:
 case 135:
 case 130:
 case 133:
 case 134:
 case 132:
  VAR_9 = 8;
  break;
 case 129:
 case 128:
  VAR_9 = 4;
  break;
 default:
  VAR_9 = 0;
  break;
 }

 VAR_10[0] = VAR_2 >> 8;
 VAR_10[1] = VAR_2 & 0xff;
 VAR_10[2] = VAR_3;
 VAR_10[3] = VAR_4;
 VAR_10[4] = VAR_5;
 VAR_10[5] = VAR_6;
 VAR_10[6] = VAR_9;
 VAR_10[7] = 0;

 VAR_8 = FUNC_0(VAR_1, VAR_10);
 if (VAR_8)
  return VAR_8;

 switch (VAR_2) {
 case 136:
  VAR_7->params.version.firmwareVersion = VAR_1->usb_buf[0];
  VAR_7->params.version.firmwareRevision = VAR_1->usb_buf[1];
  VAR_7->params.version.vcVersion = VAR_1->usb_buf[2];
  VAR_7->params.version.vcRevision = VAR_1->usb_buf[3];
  break;
 case 131:
  VAR_7->params.pnpID.vendor =
   VAR_1->usb_buf[0] | (VAR_1->usb_buf[1] << 8);
  VAR_7->params.pnpID.product =
   VAR_1->usb_buf[2] | (VAR_1->usb_buf[3] << 8);
  VAR_7->params.pnpID.deviceRevision =
   VAR_1->usb_buf[4] | (VAR_1->usb_buf[5] << 8);
  break;
 case 135:
  VAR_7->params.status.systemState = VAR_1->usb_buf[0];
  VAR_7->params.status.grabState = VAR_1->usb_buf[1];
  VAR_7->params.status.streamState = VAR_1->usb_buf[2];
  VAR_7->params.status.fatalError = VAR_1->usb_buf[3];
  VAR_7->params.status.cmdError = VAR_1->usb_buf[4];
  VAR_7->params.status.debugFlags = VAR_1->usb_buf[5];
  VAR_7->params.status.vpStatus = VAR_1->usb_buf[6];
  VAR_7->params.status.errorCode = VAR_1->usb_buf[7];
  break;
 case 130:
  VAR_7->params.vpVersion.vpVersion = VAR_1->usb_buf[0];
  VAR_7->params.vpVersion.vpRevision = VAR_1->usb_buf[1];
  VAR_7->params.vpVersion.cameraHeadID =
   VAR_1->usb_buf[2] | (VAR_1->usb_buf[3] << 8);
  break;
 case 133:
  VAR_7->params.colourParams.brightness = VAR_1->usb_buf[0];
  VAR_7->params.colourParams.contrast = VAR_1->usb_buf[1];
  VAR_7->params.colourParams.saturation = VAR_1->usb_buf[2];
  break;
 case 134:
  VAR_7->params.colourBalance.redGain = VAR_1->usb_buf[0];
  VAR_7->params.colourBalance.greenGain = VAR_1->usb_buf[1];
  VAR_7->params.colourBalance.blueGain = VAR_1->usb_buf[2];
  break;
 case 132:
  VAR_7->params.exposure.gain = VAR_1->usb_buf[0];
  VAR_7->params.exposure.fineExp = VAR_1->usb_buf[1];
  VAR_7->params.exposure.coarseExpLo = VAR_1->usb_buf[2];
  VAR_7->params.exposure.coarseExpHi = VAR_1->usb_buf[3];
  VAR_7->params.exposure.redComp = VAR_1->usb_buf[4];
  VAR_7->params.exposure.green1Comp = VAR_1->usb_buf[5];
  VAR_7->params.exposure.green2Comp = VAR_1->usb_buf[6];
  VAR_7->params.exposure.blueComp = VAR_1->usb_buf[7];
  break;

 case 129:
  if (!VAR_7->params.qx3.qx3_detected)
   break;

  VAR_7->params.qx3.button = ((VAR_1->usb_buf[1] & 0x02) == 0);
  if (VAR_7->params.qx3.button) {

   FUNC_1(VAR_1, VAR_0,
       3, 0xdf, 0xdf, 0);
   FUNC_1(VAR_1, VAR_0,
       3, 0xff, 0xff, 0);
  }


  VAR_7->params.qx3.cradled = ((VAR_1->usb_buf[2] & 0x40) == 0);
  break;
 }

 return 0;
}
