
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int v4l2_std_id ;
struct v4l2_subdev {int dummy; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int addr; TYPE_1__* adapter; } ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 struct v4l2_subdev* FUNC_1 (int,int ) ;
 int VAR_5 ;
 int FUNC_2 (struct v4l2_subdev*,int ) ;
 int FUNC_3 (struct v4l2_subdev*,struct i2c_client*,int *) ;
 int FUNC_4 (struct i2c_client*,char*,int,int ) ;

__attribute__((used)) static int FUNC_5(struct i2c_client *VAR_6,
   const struct i2c_device_id *VAR_7)
{
 struct v4l2_subdev *VAR_8;
 v4l2_std_id VAR_9 = VAR_4;

 if (!FUNC_0(VAR_6->adapter, VAR_3))
  return -VAR_0;

 FUNC_4(VAR_6, "chip found @ 0x%x (%s)\n",
   VAR_6->addr << 1, VAR_6->adapter->name);

 VAR_8 = FUNC_1(sizeof(struct v4l2_subdev), VAR_2);
 if (VAR_8 == ((void*)0))
  return -VAR_1;

 FUNC_3(VAR_8, VAR_6, &VAR_5);

 return FUNC_2(VAR_8, VAR_9);
}
