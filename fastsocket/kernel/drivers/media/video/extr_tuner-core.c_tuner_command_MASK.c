
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;

 struct v4l2_subdev* FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (struct v4l2_subdev*,void*) ;

__attribute__((used)) static int FUNC_2(struct i2c_client *VAR_1, unsigned VAR_2, void *VAR_3)
{
 struct v4l2_subdev *VAR_4 = FUNC_0(VAR_1);




 switch (VAR_2) {
 case 128:
  return FUNC_1(VAR_4, VAR_3);
 }
 return -VAR_0;
}
