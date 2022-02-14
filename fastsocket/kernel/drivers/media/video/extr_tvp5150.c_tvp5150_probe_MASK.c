
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct v4l2_subdev {int dummy; } ;
struct tvp5150 {int enable; int bright; int contrast; int sat; scalar_t__ hue; int input; int norm; struct v4l2_subdev sd; } ;
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
 int FUNC_0 (TYPE_1__*,int) ;
 struct tvp5150* FUNC_1 (int,int ) ;
 int FUNC_2 (struct v4l2_subdev*) ;
 int VAR_13 ;
 int FUNC_3 (struct v4l2_subdev*,int ) ;
 int FUNC_4 (struct v4l2_subdev*,int ,int ) ;
 int FUNC_5 (struct v4l2_subdev*,struct i2c_client*,int *) ;
 int FUNC_6 (struct v4l2_subdev*,char*,int,int) ;
 int FUNC_7 (struct i2c_client*,char*,int,int ) ;

__attribute__((used)) static int FUNC_8(struct i2c_client *VAR_14,
    const struct i2c_device_id *VAR_15)
{
 struct tvp5150 *VAR_16;
 struct v4l2_subdev *VAR_17;
 u8 VAR_18, VAR_19, VAR_20, VAR_21;


 if (!FUNC_0(VAR_14->adapter,
      VAR_3 | VAR_4))
  return -VAR_0;

 VAR_16 = FUNC_1(sizeof(struct tvp5150), VAR_2);
 if (!VAR_16) {
  return -VAR_1;
 }
 VAR_17 = &VAR_16->sd;
 FUNC_5(VAR_17, VAR_14, &VAR_13);
 FUNC_7(VAR_14, "chip found @ 0x%02x (%s)\n",
   VAR_14->addr << 1, VAR_14->adapter->name);

 VAR_18 = FUNC_3(VAR_17, VAR_7);
 VAR_19 = FUNC_3(VAR_17, VAR_6);
 VAR_20 = FUNC_3(VAR_17, VAR_9);
 VAR_21 = FUNC_3(VAR_17, VAR_10);

 if (VAR_20 == 4 && VAR_21 == 0) {
  FUNC_6(VAR_17, "tvp%02x%02xam1 detected.\n", VAR_18, VAR_19);


  FUNC_4(VAR_17, VAR_8, 0);
 } else {
  if (VAR_20 == 3 || VAR_21 == 0x21) {
   FUNC_6(VAR_17, "tvp%02x%02xa detected.\n", VAR_18, VAR_19);
  } else {
   FUNC_6(VAR_17, "*** unknown tvp%02x%02x chip detected.\n",
     VAR_18, VAR_19);
   FUNC_6(VAR_17, "*** Rom ver is %d.%d\n", VAR_20, VAR_21);
  }
 }

 VAR_16->norm = VAR_11;
 VAR_16->input = VAR_5;
 VAR_16->enable = 1;
 VAR_16->bright = 128;
 VAR_16->contrast = 128;
 VAR_16->hue = 0;
 VAR_16->sat = 128;

 if (VAR_12 > 1)
  FUNC_2(VAR_17);
 return 0;
}
