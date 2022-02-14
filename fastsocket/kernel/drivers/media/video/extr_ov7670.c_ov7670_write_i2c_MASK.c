
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct i2c_msg {int len; unsigned char* buf; scalar_t__ flags; int addr; } ;
struct i2c_client {int adapter; int addr; } ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 int FUNC_0 (int ,struct i2c_msg*,int) ;
 int FUNC_1 (int) ;
 struct i2c_client* FUNC_2 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_3(struct v4l2_subdev *VAR_2, unsigned char VAR_3,
  unsigned char VAR_4)
{
 struct i2c_client *VAR_5 = FUNC_2(VAR_2);
 struct i2c_msg VAR_6;
 unsigned char VAR_7[2] = { VAR_3, VAR_4 };
 int VAR_8;

 VAR_6.addr = VAR_5->addr;
 VAR_6.flags = 0;
 VAR_6.len = 2;
 VAR_6.buf = VAR_7;
 VAR_8 = FUNC_0(VAR_5->adapter, &VAR_6, 1);
 if (VAR_8 > 0)
  VAR_8 = 0;
 if (VAR_3 == VAR_1 && (VAR_4 & VAR_0))
  FUNC_1(5);
 return VAR_8;
}
