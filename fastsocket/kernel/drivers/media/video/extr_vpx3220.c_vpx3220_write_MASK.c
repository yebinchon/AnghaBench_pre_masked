
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct vpx3220 {size_t* reg; } ;
struct v4l2_subdev {int dummy; } ;
struct i2c_client {int dummy; } ;


 struct vpx3220* FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (struct i2c_client*,size_t,size_t) ;
 struct i2c_client* FUNC_2 (struct v4l2_subdev*) ;

__attribute__((used)) static inline int FUNC_3(struct v4l2_subdev *VAR_0, u8 VAR_1, u8 VAR_2)
{
 struct i2c_client *VAR_3 = FUNC_2(VAR_0);
 struct vpx3220 *VAR_4 = FUNC_0(VAR_3);

 VAR_4->reg[VAR_1] = VAR_2;
 return FUNC_1(VAR_3, VAR_1, VAR_2);
}
