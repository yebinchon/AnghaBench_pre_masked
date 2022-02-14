
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct i2c_client {int dummy; } ;


 int FUNC_0 (struct i2c_client*,unsigned char) ;
 struct i2c_client* FUNC_1 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_2(struct v4l2_subdev *VAR_0, unsigned char VAR_1,
  unsigned char *VAR_2)
{
 struct i2c_client *VAR_3 = FUNC_1(VAR_0);
 int VAR_4;

 VAR_4 = FUNC_0(VAR_3, VAR_1);
 if (VAR_4 >= 0) {
  *VAR_2 = (unsigned char)VAR_4;
  VAR_4 = 0;
 }
 return VAR_4;
}
