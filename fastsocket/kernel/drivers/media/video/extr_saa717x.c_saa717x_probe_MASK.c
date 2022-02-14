
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct v4l2_subdev {struct v4l2_ctrl_handler* ctrl_handler; } ;
struct v4l2_ctrl_handler {int error; } ;
struct saa717x_state {int input; int enable; int audio; int audio_input; int audio_main_vol_l; int audio_main_vol_r; int tuner_audio_mode; scalar_t__ playback; int std; struct v4l2_ctrl_handler hdl; struct v4l2_subdev sd; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int addr; TYPE_1__* adapter; } ;
struct TYPE_2__ {int name; } ;


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
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (struct saa717x_state*) ;
 struct saa717x_state* FUNC_2 (int,int ) ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_3 (struct v4l2_subdev*,int) ;
 scalar_t__ FUNC_4 (struct v4l2_subdev*,int,int) ;
 int FUNC_5 (struct v4l2_subdev*,int ) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct v4l2_ctrl_handler*) ;
 int FUNC_9 (struct v4l2_ctrl_handler*,int) ;
 int FUNC_10 (struct v4l2_ctrl_handler*) ;
 int FUNC_11 (struct v4l2_ctrl_handler*,int *,int ,int,int,int,int) ;
 int FUNC_12 (int,int ,struct v4l2_subdev*,char*,...) ;
 int FUNC_13 (struct v4l2_subdev*,struct i2c_client*,int *) ;
 int FUNC_14 (struct v4l2_subdev*,char*,char*,int,int ) ;

__attribute__((used)) static int FUNC_15(struct i2c_client *VAR_22,
    const struct i2c_device_id *VAR_23)
{
 struct saa717x_state *VAR_24;
 struct v4l2_ctrl_handler *VAR_25;
 struct v4l2_subdev *VAR_26;
 u8 VAR_27 = 0;
 char *VAR_28 = "";


 if (!FUNC_0(VAR_22->adapter, VAR_5))
  return -VAR_0;

 VAR_24 = FUNC_2(sizeof(struct saa717x_state), VAR_3);
 if (VAR_24 == ((void*)0))
  return -VAR_2;

 VAR_26 = &VAR_24->sd;
 FUNC_13(VAR_26, VAR_22, &VAR_21);

 if (FUNC_4(VAR_26, 0x5a4, 0xfe) &&
   FUNC_4(VAR_26, 0x5a5, 0x0f) &&
   FUNC_4(VAR_26, 0x5a6, 0x00) &&
   FUNC_4(VAR_26, 0x5a7, 0x01))
  VAR_27 = FUNC_3(VAR_26, 0x5a0);
 if (VAR_27 != 0xc2 && VAR_27 != 0x32 && VAR_27 != 0xf2 && VAR_27 != 0x6c) {
  FUNC_12(1, VAR_18, VAR_26, "saa717x not found (id=%02x)\n", VAR_27);
  FUNC_1(VAR_24);
  return -VAR_1;
 }
 if (VAR_27 == 0xc2)
  VAR_28 = "saa7173";
 else if (VAR_27 == 0x32)
  VAR_28 = "saa7174A";
 else if (VAR_27 == 0x6c)
  VAR_28 = "saa7174HL";
 else
  VAR_28 = "saa7171";
 FUNC_14(VAR_26, "%s found @ 0x%x (%s)\n", VAR_28,
   VAR_22->addr << 1, VAR_22->adapter->name);

 VAR_25 = &VAR_24->hdl;
 FUNC_9(VAR_25, 9);

 FUNC_11(VAR_25, &VAR_20,
   VAR_13, 0, 255, 1, 128);
 FUNC_11(VAR_25, &VAR_20,
   VAR_14, 0, 255, 1, 68);
 FUNC_11(VAR_25, &VAR_20,
   VAR_16, 0, 255, 1, 64);
 FUNC_11(VAR_25, &VAR_20,
   VAR_15, -128, 127, 1, 0);
 FUNC_11(VAR_25, &VAR_20,
   VAR_12, 0, 65535, 65535 / 100, 42000);
 FUNC_11(VAR_25, &VAR_20,
   VAR_8, 0, 65535, 65535 / 100, 32768);
 FUNC_11(VAR_25, &VAR_20,
   VAR_9, -16, 15, 1, 0);
 FUNC_11(VAR_25, &VAR_20,
   VAR_11, -16, 15, 1, 0);
 FUNC_11(VAR_25, &VAR_20,
   VAR_10, 0, 1, 1, 0);
 VAR_26->ctrl_handler = VAR_25;
 if (VAR_25->error) {
  int VAR_29 = VAR_25->error;

  FUNC_8(VAR_25);
  FUNC_1(VAR_24);
  return VAR_29;
 }

 VAR_24->std = VAR_17;
 VAR_24->input = -1;
 VAR_24->enable = 1;


 VAR_24->playback = 0;
 VAR_24->audio = 1;

 VAR_24->audio_input = 2;

 VAR_24->tuner_audio_mode = VAR_7;

 VAR_24->audio_main_vol_l = 6;
 VAR_24->audio_main_vol_r = 6;

 FUNC_12(1, VAR_18, VAR_26, "writing init values\n");


 FUNC_5(VAR_26, VAR_19);

 FUNC_10(VAR_25);

 FUNC_7(VAR_6);
 FUNC_6(2*VAR_4);
 return 0;
}
