
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct saa7185 {int* reg; } ;
struct i2c_client {int dummy; } ;


 struct v4l2_subdev* FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (struct saa7185*) ;
 int FUNC_2 (struct v4l2_subdev*,int,int) ;
 struct saa7185* FUNC_3 (struct v4l2_subdev*) ;
 int FUNC_4 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_5(struct i2c_client *VAR_0)
{
 struct v4l2_subdev *VAR_1 = FUNC_0(VAR_0);
 struct saa7185 *VAR_2 = FUNC_3(VAR_1);

 FUNC_4(VAR_1);

 FUNC_2(VAR_1, 0x61, (VAR_2->reg[0x61]) | 0x40);
 FUNC_1(VAR_2);
 return 0;
}
