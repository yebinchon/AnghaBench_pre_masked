
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct i2c_client*,unsigned char*,int) ;
 int FUNC_1 (int,int ,struct v4l2_subdev*,char*,int,...) ;
 struct i2c_client* FUNC_2 (struct v4l2_subdev*) ;

__attribute__((used)) static inline void FUNC_3(struct v4l2_subdev *VAR_1, unsigned char VAR_2,
     unsigned char VAR_3)
{
 struct i2c_client *VAR_4 = FUNC_2(VAR_1);
 unsigned char VAR_5[2];
 int VAR_6;

 VAR_5[0] = VAR_2;
 VAR_5[1] = VAR_3;
 FUNC_1(2, VAR_0, VAR_1, "tvp5150: writing 0x%02x 0x%02x\n", VAR_5[0], VAR_5[1]);
 if (2 != (VAR_6 = FUNC_0(VAR_4, VAR_5, 2)))
  FUNC_1(0, VAR_0, VAR_1, "i2c i/o error: rc == %d (should be 2)\n", VAR_6);
}
