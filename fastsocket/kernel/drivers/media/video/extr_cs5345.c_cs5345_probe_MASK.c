
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
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct v4l2_subdev*,int,int) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 struct v4l2_subdev* FUNC_2 (int,int ) ;
 int FUNC_3 (struct v4l2_subdev*,struct i2c_client*,int *) ;
 int FUNC_4 (struct i2c_client*,char*,int,int ) ;

__attribute__((used)) static int FUNC_5(struct i2c_client *VAR_5,
   const struct i2c_device_id *VAR_6)
{
 struct v4l2_subdev *VAR_7;


 if (!FUNC_1(VAR_5->adapter, VAR_3))
  return -VAR_0;

 FUNC_4(VAR_5, "chip found @ 0x%x (%s)\n",
   VAR_5->addr << 1, VAR_5->adapter->name);

 VAR_7 = FUNC_2(sizeof(struct v4l2_subdev), VAR_2);
 if (VAR_7 == ((void*)0))
  return -VAR_1;
 FUNC_3(VAR_7, VAR_5, &VAR_4);

 FUNC_0(VAR_7, 0x02, 0x00);
 FUNC_0(VAR_7, 0x04, 0x01);
 FUNC_0(VAR_7, 0x09, 0x01);
 return 0;
}
