
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct v4l2_subdev {int dummy; } ;
struct saa7110 {size_t* reg; } ;
struct i2c_client {int dummy; } ;


 int FUNC_0 (struct i2c_client*,size_t,size_t) ;
 struct saa7110* FUNC_1 (struct v4l2_subdev*) ;
 struct i2c_client* FUNC_2 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_3(struct v4l2_subdev *VAR_0, u8 VAR_1, u8 VAR_2)
{
 struct i2c_client *VAR_3 = FUNC_2(VAR_0);
 struct saa7110 *VAR_4 = FUNC_1(VAR_0);

 VAR_4->reg[VAR_1] = VAR_2;
 return FUNC_0(VAR_3, VAR_1, VAR_2);
}
