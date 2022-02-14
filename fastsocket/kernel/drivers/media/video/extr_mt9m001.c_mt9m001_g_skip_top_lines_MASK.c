
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct v4l2_subdev {int dummy; } ;
struct mt9m001 {int y_skip_top; } ;
struct i2c_client {int dummy; } ;


 struct mt9m001* FUNC_0 (struct i2c_client*) ;
 struct i2c_client* FUNC_1 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_2(struct v4l2_subdev *VAR_0, u32 *VAR_1)
{
 struct i2c_client *VAR_2 = FUNC_1(VAR_0);
 struct mt9m001 *VAR_3 = FUNC_0(VAR_2);

 *VAR_1 = VAR_3->y_skip_top;

 return 0;
}
