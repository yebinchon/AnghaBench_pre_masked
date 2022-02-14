
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev {int dummy; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int addr; TYPE_1__* adapter; } ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 struct v4l2_subdev* FUNC_1 (int,int ) ;
 int VAR_3 ;
 int FUNC_2 (struct v4l2_subdev*,struct i2c_client*,int *) ;
 int FUNC_3 (struct i2c_client*,char*,int,int ) ;

__attribute__((used)) static int FUNC_4(struct i2c_client *VAR_4,
     const struct i2c_device_id *VAR_5)
{
 struct v4l2_subdev *VAR_6;


 if (!FUNC_0(VAR_4->adapter, VAR_2))
  return 0;

 FUNC_3(VAR_4, "chip found @ 0x%x (%s)\n",
   VAR_4->addr << 1, VAR_4->adapter->name);
 VAR_6 = FUNC_1(sizeof(struct v4l2_subdev), VAR_1);
 if (VAR_6 == ((void*)0))
  return -VAR_0;
 FUNC_2(VAR_6, VAR_4, &VAR_3);
 return 0;
}
