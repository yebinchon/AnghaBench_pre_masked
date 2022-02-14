
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct i2c_client*,unsigned char*,int) ;
 int FUNC_1 (struct i2c_client*,unsigned char*,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int ,struct v4l2_subdev*,char*,unsigned char,...) ;
 struct i2c_client* FUNC_4 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_5(struct v4l2_subdev *VAR_1, unsigned char VAR_2)
{
 struct i2c_client *VAR_3 = FUNC_4(VAR_1);
 unsigned char VAR_4[1];
 int VAR_5;

 VAR_4[0] = VAR_2;
 if (1 != (VAR_5 = FUNC_1(VAR_3, VAR_4, 1)))
  FUNC_3(0, VAR_0, VAR_1, "i2c i/o error: rc == %d (should be 1)\n", VAR_5);

 FUNC_2(10);

 if (1 != (VAR_5 = FUNC_0(VAR_3, VAR_4, 1)))
  FUNC_3(0, VAR_0, VAR_1, "i2c i/o error: rc == %d (should be 1)\n", VAR_5);

 FUNC_3(2, VAR_0, VAR_1, "tvp5150: read 0x%02x = 0x%02x\n", VAR_2, VAR_4[0]);

 return (VAR_4[0]);
}
