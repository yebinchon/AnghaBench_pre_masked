
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct si4713_device {scalar_t__ power_state; } ;
struct i2c_client {scalar_t__ irq; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,struct si4713_device*) ;
 struct v4l2_subdev* FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (struct si4713_device*) ;
 int FUNC_3 (struct si4713_device*,int ) ;
 struct si4713_device* FUNC_4 (struct v4l2_subdev*) ;
 int FUNC_5 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_6(struct i2c_client *VAR_1)
{
 struct v4l2_subdev *VAR_2 = FUNC_1(VAR_1);
 struct si4713_device *VAR_3 = FUNC_4(VAR_2);

 if (VAR_3->power_state)
  FUNC_3(VAR_3, VAR_0);

 if (VAR_1->irq > 0)
  FUNC_0(VAR_1->irq, VAR_3);

 FUNC_5(VAR_2);

 FUNC_2(VAR_3);

 return 0;
}
