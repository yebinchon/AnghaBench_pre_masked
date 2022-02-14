
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct v4l2_subdev {int dummy; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct i2c_client*,int,int) ;
 int FUNC_1 (int,int ,struct v4l2_subdev*,char*,int,int) ;
 int FUNC_2 (struct v4l2_subdev*,char*,int,...) ;
 struct i2c_client* FUNC_3 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_4(struct v4l2_subdev *VAR_2, int VAR_3, u16 VAR_4)
{
 struct i2c_client *VAR_5 = FUNC_3(VAR_2);
 int VAR_6;

 if (VAR_3 < 0 || VAR_3 >= VAR_0) {
  FUNC_2(VAR_2, "Invalid register R%d\n", VAR_3);
  return -1;
 }

 FUNC_1(1, VAR_1, VAR_2, "write: %02x %02x\n", VAR_3, VAR_4);

 for (VAR_6 = 0; VAR_6 < 3; VAR_6++)
  if (FUNC_0(VAR_5,
    (VAR_3 << 1) | (VAR_4 >> 8), VAR_4 & 0xff) == 0)
   return 0;
 FUNC_2(VAR_2, "I2C: cannot write %03x to register R%d\n", VAR_4, VAR_3);
 return -1;
}
