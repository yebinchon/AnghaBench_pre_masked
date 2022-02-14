
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct ov7670_info {struct v4l2_subdev sd; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ov7670_info* FUNC_0 (int,int ) ;
 int VAR_2 ;
 int FUNC_1 (struct v4l2_subdev*,struct i2c_client*,int *) ;

__attribute__((used)) static int FUNC_2(struct i2c_client *VAR_3,
   const struct i2c_device_id *VAR_4)
{
 struct v4l2_subdev *VAR_5;
 struct ov7670_info *VAR_6;

 VAR_6 = FUNC_0(sizeof(struct ov7670_info), VAR_1);
 if (VAR_6 == ((void*)0))
  return -VAR_0;
 VAR_5 = &VAR_6->sd;
 FUNC_1(VAR_5, VAR_3, &VAR_2);

 return 0;
}
