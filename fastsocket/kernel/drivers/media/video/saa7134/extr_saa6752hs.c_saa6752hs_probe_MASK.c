
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct v4l2_subdev {int dummy; } ;
struct saa6752hs_state {int revision; int has_ac3; scalar_t__ standard; int params; int chip; struct v4l2_subdev sd; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int addr; TYPE_1__* adapter; } ;
typedef int data ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct i2c_client*,int*,int) ;
 int FUNC_1 (struct i2c_client*,int*,int) ;
 struct saa6752hs_state* FUNC_2 (int,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (struct v4l2_subdev*,struct i2c_client*,int *) ;
 int FUNC_4 (struct i2c_client*,char*,...) ;

__attribute__((used)) static int FUNC_5(struct i2c_client *VAR_6,
  const struct i2c_device_id *VAR_7)
{
 struct saa6752hs_state *VAR_8 = FUNC_2(sizeof(*VAR_8), VAR_1);
 struct v4l2_subdev *VAR_9;
 u8 VAR_10 = 0x13;
 u8 VAR_11[12];

 FUNC_4(VAR_6, "chip found @ 0x%x (%s)\n",
   VAR_6->addr << 1, VAR_6->adapter->name);
 if (VAR_8 == ((void*)0))
  return -VAR_0;
 VAR_9 = &VAR_8->sd;
 FUNC_3(VAR_9, VAR_6, &VAR_5);

 FUNC_1(VAR_6, &VAR_10, 1);
 FUNC_0(VAR_6, VAR_11, sizeof(VAR_11));
 VAR_8->chip = VAR_2;
 VAR_8->revision = (VAR_11[8] << 8) | VAR_11[9];
 VAR_8->has_ac3 = 0;
 if (VAR_8->revision == 0x0206) {
  VAR_8->chip = VAR_3;
  VAR_8->has_ac3 = 1;
  FUNC_4(VAR_6, "support AC-3\n");
 }
 VAR_8->params = VAR_4;
 VAR_8->standard = 0;
 return 0;
}
