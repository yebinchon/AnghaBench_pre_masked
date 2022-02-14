
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct saa7146_vv {int video_status; int * ov_suspend; int * video_fh; } ;
struct saa7146_standard {int dummy; } ;
struct saa7146_fh {struct saa7146_dev* dev; } ;
struct saa7146_dev {scalar_t__ ext_priv; struct saa7146_vv* vv_data; } ;
struct TYPE_2__ {int num; } ;
struct av7110 {int current_input; int analog_tuner_flags; TYPE_1__ dvb_adapter; } ;


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
 scalar_t__ FUNC_0 (struct av7110*,int ,int ,int,int) ;
 int FUNC_1 (int,char*,...) ;
 int VAR_13 ;
 int FUNC_2 (struct av7110*,int,int,int) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (struct av7110*,int ,int,int) ;
 int FUNC_5 (struct saa7146_dev*,int,int) ;
 int FUNC_6 (struct saa7146_dev*,int,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int VAR_14 ;
 scalar_t__ FUNC_9 (struct saa7146_dev*,int,int,int) ;

__attribute__((used)) static int FUNC_10(struct saa7146_fh *VAR_15)
{
 struct saa7146_dev *VAR_16 = VAR_15->dev;
 struct saa7146_vv *VAR_17 = VAR_16->vv_data;
 struct av7110 *VAR_18 = (struct av7110*)VAR_16->ext_priv;
 u16 VAR_19;
 int VAR_20, VAR_21, VAR_22;

 FUNC_1(4, "%p\n", VAR_18);

 if ((VAR_17->video_status & VAR_11) != 0) {
  VAR_17->ov_suspend = VAR_17->video_fh;
  VAR_22 = FUNC_8(VAR_17->video_fh);
  if (VAR_22 != 0) {
   FUNC_1(2, "suspending video failed\n");
   VAR_17->ov_suspend = ((void*)0);
  }
 }

 if (0 != VAR_18->current_input) {
  FUNC_1(1, "switching to analog TV:\n");
  VAR_19 = 1;
  VAR_20 = VAR_8;
  VAR_21 = VAR_10;
  FUNC_3(VAR_14, VAR_12, sizeof(struct saa7146_standard) * 2);

  switch (VAR_18->current_input) {
  case 1:
   FUNC_1(1, "switching SAA7113 to Analog Tuner Input.\n");
   FUNC_4(VAR_18, VAR_4, 0x0008, 0x0000);
   FUNC_4(VAR_18, VAR_4, 0x0009, 0x0000);
   FUNC_4(VAR_18, VAR_4, 0x000a, 0x0000);
   FUNC_4(VAR_18, VAR_4, 0x000e, 0x3000);
   FUNC_4(VAR_18, VAR_4, 0x0000, 0x4f00);
   FUNC_4(VAR_18, VAR_4, 0x0007, 0x4f00);

   if (VAR_18->analog_tuner_flags & VAR_2) {
    if (FUNC_9(VAR_16, 0x09, 0x0f, 0x60))
     FUNC_1(1, "setting band in demodulator failed.\n");
   } else if (VAR_18->analog_tuner_flags & VAR_1) {
    FUNC_6(VAR_16, 1, VAR_5);
    FUNC_6(VAR_16, 3, VAR_5);
   }
   if (FUNC_2(VAR_18, 0x48, 0x02, 0xd0) != 1)
    FUNC_1(1, "saa7113 write failed @ card %d", VAR_18->dvb_adapter.num);
   break;
  case 2:
   FUNC_1(1, "switching SAA7113 to Video AV CVBS Input.\n");
   if (FUNC_2(VAR_18, 0x48, 0x02, 0xd2) != 1)
    FUNC_1(1, "saa7113 write failed @ card %d", VAR_18->dvb_adapter.num);
   break;
  case 3:
   FUNC_1(1, "switching SAA7113 to Video AV Y/C Input.\n");
   if (FUNC_2(VAR_18, 0x48, 0x02, 0xd9) != 1)
    FUNC_1(1, "saa7113 write failed @ card %d", VAR_18->dvb_adapter.num);
   break;
  default:
   FUNC_1(1, "switching SAA7113 to Input: AV7110: SAA7113: invalid input.\n");
  }
 } else {
  VAR_19 = 0;
  VAR_20 = VAR_7;
  VAR_21 = VAR_9;
  FUNC_3(VAR_14, VAR_13, sizeof(struct saa7146_standard) * 2);
  FUNC_1(1, "switching DVB mode\n");
  FUNC_4(VAR_18, VAR_4, 0x0008, 0x0220);
  FUNC_4(VAR_18, VAR_4, 0x0009, 0x0220);
  FUNC_4(VAR_18, VAR_4, 0x000a, 0x0220);
  FUNC_4(VAR_18, VAR_4, 0x000e, 0x3000);
  FUNC_4(VAR_18, VAR_4, 0x0000, 0x7f00);
  FUNC_4(VAR_18, VAR_4, 0x0007, 0x7f00);

  if (VAR_18->analog_tuner_flags & VAR_2) {
   if (FUNC_9(VAR_16, 0x09, 0x0f, 0x20))
    FUNC_1(1, "setting band in demodulator failed.\n");
  } else if (VAR_18->analog_tuner_flags & VAR_1) {
   FUNC_6(VAR_16, 1, VAR_6);
   FUNC_6(VAR_16, 3, VAR_6);
  }
 }


 if (FUNC_0(VAR_18, VAR_3, VAR_0, 1, VAR_19))
  FUNC_1(1, "ADSwitch error\n");

 FUNC_5(VAR_16, VAR_20, VAR_21);

 if (VAR_17->ov_suspend != ((void*)0)) {
  FUNC_7(VAR_17->ov_suspend);
  VAR_17->ov_suspend = ((void*)0);
 }

 return 0;
}
