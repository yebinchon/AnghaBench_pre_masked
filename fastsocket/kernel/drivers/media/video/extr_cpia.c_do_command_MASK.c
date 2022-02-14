
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_16__ {int button; int cradled; int qx3_detected; } ;
struct TYPE_15__ {int gain; int fineExp; int coarseExpLo; int coarseExpHi; int redComp; int green1Comp; int green2Comp; int blueComp; } ;
struct TYPE_14__ {int redGain; int greenGain; int blueGain; } ;
struct TYPE_13__ {int brightness; int contrast; int saturation; } ;
struct TYPE_12__ {int vpVersion; int vpRevision; int cameraHeadID; } ;
struct TYPE_11__ {int systemState; int grabState; int streamState; int fatalError; int cmdError; int debugFlags; int vpStatus; int errorCode; } ;
struct TYPE_19__ {int vendor; int product; int deviceRevision; } ;
struct TYPE_18__ {int firmwareVersion; int firmwareRevision; int vcVersion; int vcRevision; } ;
struct TYPE_20__ {TYPE_5__ qx3; TYPE_4__ exposure; TYPE_3__ colourBalance; TYPE_2__ colourParams; TYPE_1__ vpVersion; TYPE_10__ status; TYPE_8__ pnpID; TYPE_7__ version; } ;
struct cam_data {TYPE_9__ params; int param_lock; int lowlevel_data; TYPE_6__* ops; } ;
struct TYPE_17__ {int (* transferCmd ) (int ,int*,int*) ;} ;
 int VAR_0 ;
 int FUNC_0 (char*,int,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int*,int*) ;

__attribute__((used)) static int FUNC_4(struct cam_data *VAR_1, u16 VAR_2, u8 VAR_3, u8 VAR_4, u8 VAR_5, u8 VAR_6)
{
 int VAR_7, VAR_8;
 u8 VAR_9[8], VAR_10[8];

 switch(VAR_2) {
 case 136:
 case 131:
 case 135:
 case 130:
  VAR_8=8;
  break;
 case 133:
 case 134:
 case 132:
  FUNC_1(&VAR_1->param_lock);
  VAR_8=8;
  break;
 case 129:
 case 128:
  VAR_8 = 4;
  break;
 default:
  VAR_8=0;
  break;
 }

 VAR_9[0] = VAR_2>>8;
 VAR_9[1] = VAR_2&0xff;
 VAR_9[2] = VAR_3;
 VAR_9[3] = VAR_4;
 VAR_9[4] = VAR_5;
 VAR_9[5] = VAR_6;
 VAR_9[6] = VAR_8;
 VAR_9[7] = 0;

 VAR_7 = VAR_1->ops->transferCmd(VAR_1->lowlevel_data, VAR_9, VAR_10);
 if (VAR_7) {
  FUNC_0("%x - failed, retval=%d\n", VAR_2, VAR_7);
  if (VAR_2 == 133 ||
      VAR_2 == 134 ||
      VAR_2 == 132)
   FUNC_2(&VAR_1->param_lock);
 } else {
  switch(VAR_2) {
  case 136:
   VAR_1->params.version.firmwareVersion = VAR_10[0];
   VAR_1->params.version.firmwareRevision = VAR_10[1];
   VAR_1->params.version.vcVersion = VAR_10[2];
   VAR_1->params.version.vcRevision = VAR_10[3];
   break;
  case 131:
   VAR_1->params.pnpID.vendor = VAR_10[0]+(((u16)VAR_10[1])<<8);
   VAR_1->params.pnpID.product = VAR_10[2]+(((u16)VAR_10[3])<<8);
   VAR_1->params.pnpID.deviceRevision =
    VAR_10[4]+(((u16)VAR_10[5])<<8);
   break;
  case 135:
   VAR_1->params.status.systemState = VAR_10[0];
   VAR_1->params.status.grabState = VAR_10[1];
   VAR_1->params.status.streamState = VAR_10[2];
   VAR_1->params.status.fatalError = VAR_10[3];
   VAR_1->params.status.cmdError = VAR_10[4];
   VAR_1->params.status.debugFlags = VAR_10[5];
   VAR_1->params.status.vpStatus = VAR_10[6];
   VAR_1->params.status.errorCode = VAR_10[7];
   break;
  case 130:
   VAR_1->params.vpVersion.vpVersion = VAR_10[0];
   VAR_1->params.vpVersion.vpRevision = VAR_10[1];
   VAR_1->params.vpVersion.cameraHeadID =
    VAR_10[2]+(((u16)VAR_10[3])<<8);
   break;
  case 133:
   VAR_1->params.colourParams.brightness = VAR_10[0];
   VAR_1->params.colourParams.contrast = VAR_10[1];
   VAR_1->params.colourParams.saturation = VAR_10[2];
   FUNC_2(&VAR_1->param_lock);
   break;
  case 134:
   VAR_1->params.colourBalance.redGain = VAR_10[0];
   VAR_1->params.colourBalance.greenGain = VAR_10[1];
   VAR_1->params.colourBalance.blueGain = VAR_10[2];
   FUNC_2(&VAR_1->param_lock);
   break;
  case 132:
   VAR_1->params.exposure.gain = VAR_10[0];
   VAR_1->params.exposure.fineExp = VAR_10[1];
   VAR_1->params.exposure.coarseExpLo = VAR_10[2];
   VAR_1->params.exposure.coarseExpHi = VAR_10[3];
   VAR_1->params.exposure.redComp = VAR_10[4];
   VAR_1->params.exposure.green1Comp = VAR_10[5];
   VAR_1->params.exposure.green2Comp = VAR_10[6];
   VAR_1->params.exposure.blueComp = VAR_10[7];
   FUNC_2(&VAR_1->param_lock);
   break;

  case 129:
   if (!VAR_1->params.qx3.qx3_detected)
    break;

   VAR_1->params.qx3.button = ((VAR_10[1] & 0x02) == 0);
   if (VAR_1->params.qx3.button) {

    FUNC_4(VAR_1,VAR_0,3,0xDF,0xDF,0);
    FUNC_4(VAR_1,VAR_0,3,0xFF,0xFF,0);
   }


   VAR_1->params.qx3.cradled = ((VAR_10[2] & 0x40) == 0);
   break;

  default:
   break;
  }
 }
 return VAR_7;
}
