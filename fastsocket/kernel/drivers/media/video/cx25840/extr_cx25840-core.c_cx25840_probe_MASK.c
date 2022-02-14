
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_5__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct v4l2_subdev {TYPE_1__* ctrl_handler; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int addr; TYPE_5__* adapter; } ;
struct TYPE_6__ {int error; } ;
struct cx25840_state {int audclk_freq; int vbi_line_offset; int id; int rev; TYPE_1__ hdl; void* volume; void* mute; int audmode; scalar_t__ pvr150_workaround; int aud_input; int vid_input; struct i2c_client* c; struct v4l2_subdev sd; } ;
struct TYPE_7__ {int name; } ;


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
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_0 (struct v4l2_subdev*) ;
 int VAR_21 ;
 int FUNC_1 (struct i2c_client*,int) ;
 int FUNC_2 (struct i2c_client*,int,int) ;
 int FUNC_3 (struct i2c_client*) ;
 int FUNC_4 (TYPE_5__*,int ) ;
 int FUNC_5 (struct cx25840_state*) ;
 int FUNC_6 (struct cx25840_state*) ;
 struct cx25840_state* FUNC_7 (int,int ) ;
 int FUNC_8 (int,void**) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*,int) ;
 int FUNC_11 (TYPE_1__*) ;
 void* FUNC_12 (TYPE_1__*,int *,int ,int,int,int,int) ;
 int FUNC_13 (struct v4l2_subdev*,struct i2c_client*,int *) ;
 int FUNC_14 (int,int ,struct i2c_client*,char*,...) ;
 int FUNC_15 (struct i2c_client*,char*,...) ;
 int FUNC_16 (struct i2c_client*,char*,int,int,...) ;

__attribute__((used)) static int FUNC_17(struct i2c_client *VAR_22,
    const struct i2c_device_id *VAR_23)
{
 struct cx25840_state *VAR_24;
 struct v4l2_subdev *VAR_25;
 int VAR_26;
 u32 VAR_27 = VAR_16;
 u16 VAR_28;


 if (!FUNC_4(VAR_22->adapter, VAR_6))
  return -VAR_2;

 FUNC_14(1, VAR_20, VAR_22, "detecting cx25840 client on address 0x%x\n", VAR_22->addr << 1);

 VAR_28 = FUNC_1(VAR_22, 0x101) << 8;
 VAR_28 |= FUNC_1(VAR_22, 0x100);
 FUNC_14(1, VAR_20, VAR_22, "device_id = 0x%04x\n", VAR_28);



 if ((VAR_28 & 0xff00) == 0x8300) {
  VAR_27 = 133 + ((VAR_28 >> 4) & 0xf) - 6;
 } else if ((VAR_28 & 0xff00) == 0x8400) {
  VAR_27 = 131 + ((VAR_28 >> 4) & 0xf);
 } else if (VAR_28 == 0x0000) {
  VAR_27 = FUNC_3(VAR_22);
 } else if ((VAR_28 & 0xfff0) == 0x5A30) {

  VAR_27 = 137;
 } else if ((VAR_28 & 0xff) == (VAR_28 >> 8)) {
  FUNC_15(VAR_22,
   "likely a confused/unresponsive cx2388[578] A/V decoder"
   " found @ 0x%x (%s)\n",
   VAR_22->addr << 1, VAR_22->adapter->name);
  FUNC_15(VAR_22, "A method to reset it from the cx25840 driver"
   " software is not known at this time\n");
  return -VAR_3;
 } else {
  FUNC_14(1, VAR_20, VAR_22, "cx25840 not found\n");
  return -VAR_3;
 }

 VAR_24 = FUNC_7(sizeof(struct cx25840_state), VAR_5);
 if (VAR_24 == ((void*)0))
  return -VAR_4;

 VAR_25 = &VAR_24->sd;
 FUNC_13(VAR_25, VAR_22, &VAR_21);

 switch (VAR_27) {
 case 136:
  FUNC_16(VAR_22, "cx23885 A/V decoder found @ 0x%x (%s)\n",
    VAR_22->addr << 1, VAR_22->adapter->name);
  break;
 case 135:
  FUNC_16(VAR_22, "cx23887 A/V decoder found @ 0x%x (%s)\n",
    VAR_22->addr << 1, VAR_22->adapter->name);
  break;
 case 134:
  FUNC_16(VAR_22, "cx23888 A/V decoder found @ 0x%x (%s)\n",
    VAR_22->addr << 1, VAR_22->adapter->name);
  break;
 case 137:
  FUNC_16(VAR_22, "cx%d A/V decoder found @ 0x%x (%s)\n",
    VAR_28, VAR_22->addr << 1, VAR_22->adapter->name);
  break;
 case 131:
 case 130:
 case 129:
 case 128:


  FUNC_16(VAR_22, "cx25%3x-2%x found @ 0x%x (%s)\n",
    (VAR_28 & 0xfff0) >> 4,
    (VAR_28 & 0x0f) < 3 ? (VAR_28 & 0x0f) + 1
      : (VAR_28 & 0x0f),
    VAR_22->addr << 1, VAR_22->adapter->name);
  break;
 case 133:
 case 132:
 default:
  FUNC_16(VAR_22, "cx25%3x-%x found @ 0x%x (%s)\n",
    (VAR_28 & 0xfff0) >> 4, VAR_28 & 0x0f,
    VAR_22->addr << 1, VAR_22->adapter->name);
  break;
 }

 VAR_24->c = VAR_22;
 VAR_24->vid_input = VAR_1;
 VAR_24->aud_input = VAR_0;
 VAR_24->audclk_freq = 48000;
 VAR_24->pvr150_workaround = 0;
 VAR_24->audmode = VAR_17;
 VAR_24->vbi_line_offset = 8;
 VAR_24->id = VAR_27;
 VAR_24->rev = VAR_28;
 FUNC_10(&VAR_24->hdl, 9);
 FUNC_12(&VAR_24->hdl, &VAR_19,
   VAR_12, 0, 255, 1, 128);
 FUNC_12(&VAR_24->hdl, &VAR_19,
   VAR_13, 0, 127, 1, 64);
 FUNC_12(&VAR_24->hdl, &VAR_19,
   VAR_15, 0, 127, 1, 64);
 FUNC_12(&VAR_24->hdl, &VAR_19,
   VAR_14, -128, 127, 1, 0);
 if (!FUNC_5(VAR_24)) {
  VAR_26 = FUNC_1(VAR_22, 0x8d4);





  if (VAR_26 > 228) {

   VAR_26 = 228;
   FUNC_2(VAR_22, 0x8d4, 228);
  }
  else if (VAR_26 < 20) {

   VAR_26 = 20;
   FUNC_2(VAR_22, 0x8d4, 20);
  }
  VAR_26 = (((228 - VAR_26) >> 1) + 23) << 9;

  VAR_24->volume = FUNC_12(&VAR_24->hdl,
   &VAR_18, VAR_11,
   0, 65535, 65535 / 100, VAR_26);
  VAR_24->mute = FUNC_12(&VAR_24->hdl,
   &VAR_18, VAR_9,
   0, 1, 1, 0);
  FUNC_12(&VAR_24->hdl, &VAR_18,
   VAR_7,
   0, 65535, 65535 / 100, 32768);
  FUNC_12(&VAR_24->hdl, &VAR_18,
   VAR_8,
   0, 65535, 65535 / 100, 32768);
  FUNC_12(&VAR_24->hdl, &VAR_18,
   VAR_10,
   0, 65535, 65535 / 100, 32768);
 }
 VAR_25->ctrl_handler = &VAR_24->hdl;
 if (VAR_24->hdl.error) {
  int VAR_29 = VAR_24->hdl.error;

  FUNC_9(&VAR_24->hdl);
  FUNC_6(VAR_24);
  return VAR_29;
 }
 if (!FUNC_5(VAR_24))
  FUNC_8(2, &VAR_24->volume);
 FUNC_11(&VAR_24->hdl);

 FUNC_0(VAR_25);
 return 0;
}
