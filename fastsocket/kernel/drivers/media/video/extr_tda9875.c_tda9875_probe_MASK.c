
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev {int dummy; } ;
struct tda9875 {struct v4l2_subdev sd; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int addr; TYPE_1__* adapter; } ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct v4l2_subdev*) ;
 struct tda9875* FUNC_1 (int,int ) ;
 int FUNC_2 (struct i2c_client*,int) ;
 int VAR_3 ;
 int FUNC_3 (struct v4l2_subdev*,struct i2c_client*,int *) ;
 int FUNC_4 (struct i2c_client*,char*,int,int ) ;

__attribute__((used)) static int FUNC_5(struct i2c_client *VAR_4,
   const struct i2c_device_id *VAR_5)
{
 struct tda9875 *VAR_6;
 struct v4l2_subdev *VAR_7;

 FUNC_4(VAR_4, "chip found @ 0x%02x (%s)\n",
   VAR_4->addr << 1, VAR_4->adapter->name);

 if (!FUNC_2(VAR_4, VAR_4->addr))
  return -VAR_0;

 VAR_6 = FUNC_1(sizeof(*VAR_6), VAR_2);
 if (!VAR_6)
  return -VAR_1;
 VAR_7 = &VAR_6->sd;
 FUNC_3(VAR_7, VAR_4, &VAR_3);

 FUNC_0(VAR_7);
 return 0;
}
