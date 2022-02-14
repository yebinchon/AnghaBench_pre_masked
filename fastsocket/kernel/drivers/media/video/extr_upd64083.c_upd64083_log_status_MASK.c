
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct v4l2_subdev {int dummy; } ;
struct i2c_client {int dummy; } ;


 int FUNC_0 (struct i2c_client*,int *,int) ;
 struct i2c_client* FUNC_1 (struct v4l2_subdev*) ;
 int FUNC_2 (struct v4l2_subdev*,char*,int ,int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct v4l2_subdev *VAR_0)
{
 struct i2c_client *VAR_1 = FUNC_1(VAR_0);
 u8 VAR_2[7];

 FUNC_0(VAR_1, VAR_2, 7);
 FUNC_2(VAR_0, "Status: SA00=%02x SA01=%02x SA02=%02x SA03=%02x "
        "SA04=%02x SA05=%02x SA06=%02x\n",
  VAR_2[0], VAR_2[1], VAR_2[2], VAR_2[3], VAR_2[4], VAR_2[5], VAR_2[6]);
 return 0;
}
