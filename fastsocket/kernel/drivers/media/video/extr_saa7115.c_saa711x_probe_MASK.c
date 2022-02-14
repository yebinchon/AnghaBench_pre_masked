
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct v4l2_subdev {struct v4l2_ctrl_handler* ctrl_handler; } ;
struct v4l2_ctrl_handler {int error; } ;
struct saa711x_state {int input; int enable; int ident; int audclk_freq; int crystal_freq; scalar_t__ radio; int output; TYPE_2__* agc; TYPE_1__* gain; struct v4l2_ctrl_handler hdl; struct v4l2_subdev sd; } ;
struct i2c_device_id {int driver_data; char* name; } ;
struct i2c_client {int addr; TYPE_3__* adapter; int name; } ;
struct TYPE_6__ {int name; } ;
struct TYPE_5__ {int flags; } ;
struct TYPE_4__ {int is_volatile; } ;


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
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_0 (TYPE_3__*,int ) ;
 int FUNC_1 (struct i2c_client*,int ) ;
 int FUNC_2 (struct i2c_client*,int ,int) ;
 int FUNC_3 (struct saa711x_state*) ;
 struct saa711x_state* FUNC_4 (int,int ) ;
 scalar_t__ FUNC_5 (char*,char*,int) ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int FUNC_6 (struct v4l2_subdev*,int ) ;
 int FUNC_7 (struct v4l2_subdev*,int ) ;
 int FUNC_8 (struct v4l2_subdev*,int ) ;
 int FUNC_9 (int ,int,char*,char) ;
 int FUNC_10 (int,TYPE_2__**) ;
 int FUNC_11 (struct v4l2_ctrl_handler*) ;
 int FUNC_12 (struct v4l2_ctrl_handler*,int) ;
 int FUNC_13 (struct v4l2_ctrl_handler*) ;
 void* FUNC_14 (struct v4l2_ctrl_handler*,int *,int ,int,int,int,int) ;
 int FUNC_15 (int,int ,struct v4l2_subdev*,char*,...) ;
 int FUNC_16 (struct v4l2_subdev*,struct i2c_client*,int *) ;
 int FUNC_17 (struct v4l2_subdev*,char*) ;
 int FUNC_18 (int,int ,struct i2c_client*,char*,int,char*) ;
 int FUNC_19 (struct i2c_client*,char*,...) ;
 int FUNC_20 (struct i2c_client*,char*,char,char*) ;

__attribute__((used)) static int FUNC_21(struct i2c_client *VAR_29,
    const struct i2c_device_id *VAR_30)
{
 struct saa711x_state *VAR_31;
 struct v4l2_subdev *VAR_32;
 struct v4l2_ctrl_handler *VAR_33;
 int VAR_34;
 char VAR_35[17];
 char VAR_36;
 int VAR_37 = !VAR_30 || VAR_30->driver_data == 1;


 if (!FUNC_0(VAR_29->adapter, VAR_4))
  return -VAR_0;

 for (VAR_34 = 0; VAR_34 < 0x0f; VAR_34++) {
  FUNC_2(VAR_29, 0, VAR_34);
  VAR_35[VAR_34] = (FUNC_1(VAR_29, 0) & 0x0f) + '0';
  if (VAR_35[VAR_34] > '9')
   VAR_35[VAR_34] += 'a' - '9' - 1;
 }
 VAR_35[VAR_34] = '\0';

 VAR_36 = VAR_35[5];


 if (FUNC_5(VAR_35, "1f711", 5)) {
  FUNC_18(1, VAR_22, VAR_29, "chip found @ 0x%x (ID %s) does not match a known saa711x chip.\n",
   VAR_29->addr << 1, VAR_35);
  return -VAR_1;
 }


 if (!VAR_37 && VAR_30->name[6] != VAR_36) {
  FUNC_20(VAR_29, "found saa711%c while %s was expected\n",
    VAR_36, VAR_30->name);
 }
 FUNC_9(VAR_29->name, sizeof(VAR_29->name), "saa711%c", VAR_36);
 FUNC_19(VAR_29, "saa711%c found (%s) @ 0x%x (%s)\n", VAR_36, VAR_35,
   VAR_29->addr << 1, VAR_29->adapter->name);

 VAR_31 = FUNC_4(sizeof(struct saa711x_state), VAR_3);
 if (VAR_31 == ((void*)0))
  return -VAR_2;
 VAR_32 = &VAR_31->sd;
 FUNC_16(VAR_32, VAR_29, &VAR_28);

 VAR_33 = &VAR_31->hdl;
 FUNC_12(VAR_33, 6);

 FUNC_14(VAR_33, &VAR_27,
   VAR_11, 0, 255, 1, 128);
 FUNC_14(VAR_33, &VAR_27,
   VAR_14, 0, 127, 1, 64);
 FUNC_14(VAR_33, &VAR_27,
   VAR_16, 0, 127, 1, 64);
 FUNC_14(VAR_33, &VAR_27,
   VAR_15, -128, 127, 1, 0);
 VAR_31->agc = FUNC_14(VAR_33, &VAR_27,
   VAR_12, 0, 1, 1, 1);
 VAR_31->gain = FUNC_14(VAR_33, &VAR_27,
   VAR_13, 0, 127, 1, 40);
 VAR_31->gain->is_volatile = 1;
 VAR_32->ctrl_handler = VAR_33;
 if (VAR_33->error) {
  int VAR_38 = VAR_33->error;

  FUNC_11(VAR_33);
  FUNC_3(VAR_31);
  return VAR_38;
 }
 VAR_31->agc->flags |= VAR_17;
 FUNC_10(2, &VAR_31->agc);

 VAR_31->input = -1;
 VAR_31->output = VAR_10;
 VAR_31->enable = 1;
 VAR_31->radio = 0;
 switch (VAR_36) {
 case '1':
  VAR_31->ident = 130;
  if (FUNC_6(VAR_32, VAR_5) & 0xf0) {
   FUNC_19(VAR_29, "saa7111a variant found\n");
   VAR_31->ident = 129;
  }
  break;
 case '3':
  VAR_31->ident = 128;
  break;
 case '4':
  VAR_31->ident = VAR_18;
  break;
 case '5':
  VAR_31->ident = VAR_19;
  break;
 case '8':
  VAR_31->ident = VAR_20;
  break;
 default:
  VAR_31->ident = 130;
  FUNC_17(VAR_32, "WARNING: Chip is not known - Falling back to saa7111\n");
  break;
 }

 VAR_31->audclk_freq = 48000;

 FUNC_15(1, VAR_22, VAR_32, "writing init values\n");


 VAR_31->crystal_freq = VAR_8;
 switch (VAR_31->ident) {
 case 130:
 case 129:
  FUNC_8(VAR_32, VAR_23);
  break;
 case 128:
  FUNC_8(VAR_32, VAR_24);
  break;
 default:
  VAR_31->crystal_freq = VAR_9;
  FUNC_8(VAR_32, VAR_25);
 }
 if (VAR_31->ident > 129)
  FUNC_8(VAR_32, VAR_26);
 FUNC_7(VAR_32, VAR_21);
 FUNC_13(VAR_33);

 FUNC_15(1, VAR_22, VAR_32, "status: (1E) 0x%02x, (1F) 0x%02x\n",
  FUNC_6(VAR_32, VAR_6),
  FUNC_6(VAR_32, VAR_7));
 return 0;
}
