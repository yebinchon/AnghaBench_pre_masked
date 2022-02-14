
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct i2c_client {int dummy; } ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 int FUNC_0 (struct i2c_client*,unsigned char,unsigned char) ;
 int FUNC_1 (int) ;
 struct i2c_client* FUNC_2 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_3(struct v4l2_subdev *VAR_2, unsigned char VAR_3,
  unsigned char VAR_4)
{
 struct i2c_client *VAR_5 = FUNC_2(VAR_2);
 int VAR_6 = FUNC_0(VAR_5, VAR_3, VAR_4);

 if (VAR_3 == VAR_1 && (VAR_4 & VAR_0))
  FUNC_1(5);
 return VAR_6;
}
