
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct mt9v022 {int chip_control; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct i2c_client*,int ,int) ;
 struct mt9v022* FUNC_1 (struct i2c_client*) ;
 struct i2c_client* FUNC_2 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_3(struct v4l2_subdev *VAR_2, int VAR_3)
{
 struct i2c_client *VAR_4 = FUNC_2(VAR_2);
 struct mt9v022 *VAR_5 = FUNC_1(VAR_4);

 if (VAR_3)

  VAR_5->chip_control &= ~0x10;
 else

  VAR_5->chip_control |= 0x10;

 if (FUNC_0(VAR_4, VAR_1, VAR_5->chip_control) < 0)
  return -VAR_0;
 return 0;
}
