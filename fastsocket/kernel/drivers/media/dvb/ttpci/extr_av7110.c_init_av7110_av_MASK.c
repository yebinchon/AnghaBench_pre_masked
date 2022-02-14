
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct saa7146_dev {TYPE_2__* pci; } ;
struct TYPE_6__ {int volume_right; int volume_left; } ;
struct TYPE_4__ {int num; } ;
struct av7110 {int display_panscan; TYPE_3__ mixer; struct saa7146_dev* dev; int adac_type; TYPE_1__ dvb_adapter; scalar_t__ current_input; scalar_t__ analog_tuner_flags; scalar_t__ display_ar; } ;
struct TYPE_5__ {int subsystem_vendor; int subsystem_device; } ;


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
 int FUNC_0 (struct av7110*,int ,int ,int,int,...) ;
 scalar_t__ FUNC_1 (struct av7110*) ;
 int FUNC_2 (struct av7110*,int ,int ) ;
 int FUNC_3 (struct av7110*,int ) ;
 int FUNC_4 (struct av7110*,int,int,int) ;
 int FUNC_5 (char*,...) ;
 scalar_t__ VAR_14 ;
 int FUNC_6 (struct saa7146_dev*,int,int ) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;

__attribute__((used)) static void FUNC_7(struct av7110 *VAR_18)
{
 int VAR_19;
 struct saa7146_dev *VAR_20 = VAR_18->dev;


 VAR_18->adac_type = VAR_6;
 VAR_19 = FUNC_2(VAR_18, VAR_18->mixer.volume_left, VAR_18->mixer.volume_right);
 if (VAR_19 < 0)
  FUNC_5("dvb-ttpci:cannot set internal volume to maximum:%d\n",VAR_19);

 VAR_19 = FUNC_0(VAR_18, VAR_2, VAR_9,
       1, (u16) VAR_18->display_ar);
 if (VAR_19 < 0)
  FUNC_5("dvb-ttpci: unable to set aspect ratio\n");
 VAR_19 = FUNC_0(VAR_18, VAR_2, VAR_10,
       1, VAR_18->display_panscan);
 if (VAR_19 < 0)
  FUNC_5("dvb-ttpci: unable to set pan scan\n");

 VAR_19 = FUNC_0(VAR_18, VAR_2, VAR_11, 2, 2, VAR_17);
 if (VAR_19 < 0)
  FUNC_5("dvb-ttpci: unable to configure 4:3 wss\n");
 VAR_19 = FUNC_0(VAR_18, VAR_2, VAR_11, 2, 3, VAR_16);
 if (VAR_19 < 0)
  FUNC_5("dvb-ttpci: unable to configure 16:9 wss\n");

 VAR_19 = FUNC_3(VAR_18, VAR_15);
 if (VAR_19 < 0)
  FUNC_5("dvb-ttpci:cannot set video mode:%d\n",VAR_19);



 VAR_18->analog_tuner_flags = 0;
 VAR_18->current_input = 0;
 if (VAR_20->pci->subsystem_vendor == 0x13c2 && VAR_20->pci->subsystem_device == 0x000a)
  FUNC_0(VAR_18, VAR_1, VAR_0, 1, 0);
 if (FUNC_4(VAR_18, 0x20, 0x00, 0x00) == 1) {
  FUNC_5 ("dvb-ttpci: Crystal audio DAC @ card %d detected\n",
   VAR_18->dvb_adapter.num);
  VAR_18->adac_type = VAR_3;
  FUNC_4(VAR_18, 0x20, 0x01, 0xd2);
  FUNC_4(VAR_18, 0x20, 0x02, 0x49);
  FUNC_4(VAR_18, 0x20, 0x03, 0x00);
  FUNC_4(VAR_18, 0x20, 0x04, 0x00);




 } else if (0 == FUNC_1(VAR_18)) {

 }
 else if (VAR_20->pci->subsystem_vendor == 0x110a) {
  FUNC_5("dvb-ttpci: DVB-C w/o analog module @ card %d detected\n",
   VAR_18->dvb_adapter.num);
  VAR_18->adac_type = VAR_5;
 }
 else {
  VAR_18->adac_type = VAR_13;
  FUNC_5("dvb-ttpci: adac type set to %d @ card %d\n",
   VAR_18->adac_type, VAR_18->dvb_adapter.num);
 }

 if (VAR_18->adac_type == VAR_5 || VAR_18->adac_type == VAR_4) {

  VAR_19 = FUNC_0(VAR_18, VAR_1, VAR_7, 1, 0);
  if (VAR_19 < 0)
   FUNC_5("dvb-ttpci:cannot switch on SCART(Main):%d\n",VAR_19);
  VAR_19 = FUNC_0(VAR_18, VAR_1, VAR_0, 1, 1);
  if (VAR_19 < 0)
   FUNC_5("dvb-ttpci:cannot switch on SCART(AD):%d\n",VAR_19);
  if (VAR_14 &&
      ((VAR_18->dev->pci->subsystem_vendor == 0x110a) ||
       (VAR_18->dev->pci->subsystem_vendor == 0x13c2)) &&
       (VAR_18->dev->pci->subsystem_device == 0x0000)) {
   FUNC_6(VAR_20, 1, VAR_8);

  }
 }

 if (VAR_20->pci->subsystem_vendor == 0x13c2 && VAR_20->pci->subsystem_device == 0x000e)
  FUNC_0(VAR_18, VAR_1, VAR_12, 1, 0);

 VAR_19 = FUNC_2(VAR_18, VAR_18->mixer.volume_left, VAR_18->mixer.volume_right);
 if (VAR_19 < 0)
  FUNC_5("dvb-ttpci:cannot set volume :%d\n",VAR_19);
}
