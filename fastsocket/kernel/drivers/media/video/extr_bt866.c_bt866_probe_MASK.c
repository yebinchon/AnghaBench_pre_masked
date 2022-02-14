
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev {int dummy; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int addr; TYPE_1__* adapter; } ;
struct bt866 {struct v4l2_subdev sd; } ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct bt866* FUNC_0 (int,int ) ;
 int FUNC_1 (struct v4l2_subdev*,struct i2c_client*,int *) ;
 int FUNC_2 (struct i2c_client*,char*,int,int ) ;

__attribute__((used)) static int FUNC_3(struct i2c_client *VAR_3,
   const struct i2c_device_id *VAR_4)
{
 struct bt866 *VAR_5;
 struct v4l2_subdev *VAR_6;

 FUNC_2(VAR_3, "chip found @ 0x%x (%s)\n",
   VAR_3->addr << 1, VAR_3->adapter->name);

 VAR_5 = FUNC_0(sizeof(*VAR_5), VAR_1);
 if (VAR_5 == ((void*)0))
  return -VAR_0;
 VAR_6 = &VAR_5->sd;
 FUNC_1(VAR_6, VAR_3, &VAR_2);
 return 0;
}
