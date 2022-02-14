
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct saa7146_standard {int dummy; } ;
struct TYPE_7__ {int num; } ;
struct av7110 {int analog_tuner_flags; TYPE_3__* dev; TYPE_2__ dvb_adapter; int adac_type; } ;
struct TYPE_8__ {TYPE_1__* pci; } ;
struct TYPE_6__ {int subsystem_vendor; int subsystem_device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_1 (int,char*,...) ;
 int VAR_16 ;
 int FUNC_2 (struct av7110*,int,int,int) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct av7110*,int ,int,int *) ;
 int FUNC_6 (struct av7110*,int ,int,int) ;
 int FUNC_7 (char*,int ) ;
 int* VAR_17 ;
 int FUNC_8 (TYPE_3__*,int,int ) ;
 int FUNC_9 (TYPE_3__*,int ,int) ;
 int VAR_18 ;
 scalar_t__ FUNC_10 (TYPE_3__*,int,int,int) ;

int FUNC_11(struct av7110 *VAR_19)
{
 u16 VAR_20, VAR_21;

 if (FUNC_2(VAR_19, 0x80, 0x0, 0x80) == 1 &&
     FUNC_2(VAR_19, 0x80, 0x0, 0) == 1) {
  FUNC_7("dvb-ttpci: DVB-C analog module @ card %d detected, initializing MSP3400\n",
   VAR_19->dvb_adapter.num);
  VAR_19->adac_type = VAR_4;
 } else if (FUNC_2(VAR_19, 0x84, 0x0, 0x80) == 1 &&
     FUNC_2(VAR_19, 0x84, 0x0, 0) == 1) {
  FUNC_7("dvb-ttpci: DVB-C analog module @ card %d detected, initializing MSP3415\n",
   VAR_19->dvb_adapter.num);
  VAR_19->adac_type = VAR_5;
 } else
  return -VAR_6;

 FUNC_4(100);
 FUNC_5(VAR_19, VAR_12, 0x001e, &VAR_20);
 FUNC_5(VAR_19, VAR_12, 0x001f, &VAR_21);
 FUNC_1(1, "dvb-ttpci: @ card %d MSP34xx version 0x%04x 0x%04x\n",
  VAR_19->dvb_adapter.num, VAR_20, VAR_21);
 FUNC_6(VAR_19, VAR_14, 0x0013, 0x0c00);
 FUNC_6(VAR_19, VAR_14, 0x0000, 0x7f00);
 FUNC_6(VAR_19, VAR_14, 0x0008, 0x0220);
 FUNC_6(VAR_19, VAR_14, 0x0009, 0x0220);
 FUNC_6(VAR_19, VAR_14, 0x0004, 0x7f00);
 FUNC_6(VAR_19, VAR_14, 0x000a, 0x0220);
 FUNC_6(VAR_19, VAR_14, 0x0007, 0x7f00);
 FUNC_6(VAR_19, VAR_14, 0x000d, 0x1900);

 if (FUNC_2(VAR_19, 0x48, 0x01, 0x00)!=1) {
  FUNC_0(("saa7113 not accessible.\n"));
 } else {
  u8 *VAR_22 = VAR_17;

  if ((VAR_19->dev->pci->subsystem_vendor == 0x110a) && (VAR_19->dev->pci->subsystem_device == 0x0000)) {

   VAR_19->analog_tuner_flags |= VAR_1;
  } else if ((VAR_19->dev->pci->subsystem_vendor == 0x13c2) && (VAR_19->dev->pci->subsystem_device == 0x0002)) {

   VAR_19->analog_tuner_flags |= VAR_1;
  } else if ((VAR_19->dev->pci->subsystem_vendor == 0x13c2) && (VAR_19->dev->pci->subsystem_device == 0x000A)) {

   VAR_19->analog_tuner_flags |= VAR_0;
  }


  if (VAR_19->analog_tuner_flags & VAR_1) {
   if (FUNC_10(VAR_19->dev, 0x09, 0x0f, 0x20))
    FUNC_1(1, "setting band in demodulator failed.\n");
  } else if (VAR_19->analog_tuner_flags & VAR_0) {
   FUNC_8(VAR_19->dev, 1, VAR_15);
   FUNC_8(VAR_19->dev, 3, VAR_15);
  }


  while (*VAR_22 != 0xff) {
   if (FUNC_2(VAR_19, 0x48, VAR_22[0], VAR_22[1]) != 1) {
    FUNC_1(1, "saa7113 initialization failed @ card %d", VAR_19->dvb_adapter.num);
    break;
   }
   VAR_22 += 2;
  }

  FUNC_6(VAR_19, VAR_13, 0x00bb, 0x02d0);
  FUNC_6(VAR_19, VAR_13, 0x0001, 3);
  FUNC_6(VAR_19, VAR_13, 0x0001, 18);
  FUNC_6(VAR_19, VAR_13, 0x0001, 27);
  FUNC_6(VAR_19, VAR_13, 0x0001, 48);
  FUNC_6(VAR_19, VAR_13, 0x0001, 66);
  FUNC_6(VAR_19, VAR_13, 0x0001, 72);
  FUNC_6(VAR_19, VAR_13, 0x0005, 4);
  FUNC_6(VAR_19, VAR_13, 0x0005, 64);
  FUNC_6(VAR_19, VAR_13, 0x0005, 0);
  FUNC_6(VAR_19, VAR_13, 0x0005, 3);
  FUNC_6(VAR_19, VAR_13, 0x0005, 18);
  FUNC_6(VAR_19, VAR_13, 0x0005, 27);
  FUNC_6(VAR_19, VAR_13, 0x0005, 48);
  FUNC_6(VAR_19, VAR_13, 0x0005, 66);
  FUNC_6(VAR_19, VAR_13, 0x0005, 72);
  FUNC_6(VAR_19, VAR_13, 0x0083, 0xa000);
  FUNC_6(VAR_19, VAR_13, 0x0093, 0x00aa);
  FUNC_6(VAR_19, VAR_13, 0x009b, 0x04fc);
  FUNC_6(VAR_19, VAR_13, 0x00a3, 0x038e);
  FUNC_6(VAR_19, VAR_13, 0x00ab, 0x04c6);
  FUNC_6(VAR_19, VAR_13, 0x0056, 0);
 }

 FUNC_3(VAR_18, VAR_16, sizeof(struct saa7146_standard) * 2);

 FUNC_9(VAR_19->dev, VAR_3, 0x00000000);
 FUNC_9(VAR_19->dev, VAR_2, 0x03000700);
 FUNC_9(VAR_19->dev, VAR_11, (VAR_7 | VAR_9 | VAR_8 | VAR_10));

 return 0;
}
