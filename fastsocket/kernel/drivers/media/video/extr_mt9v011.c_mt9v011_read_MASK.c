
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct i2c_client {int dummy; } ;
typedef int __be16 ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct i2c_client*,char*,int) ;
 int FUNC_2 (struct i2c_client*,unsigned char*,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,int ,struct v4l2_subdev*,char*,unsigned char,...) ;
 struct i2c_client* FUNC_5 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_6(struct v4l2_subdev *VAR_1, unsigned char VAR_2)
{
 struct i2c_client *VAR_3 = FUNC_5(VAR_1);
 __be16 VAR_4;
 int VAR_5, VAR_6;

 VAR_5 = FUNC_2(VAR_3, &VAR_2, 1);
 if (VAR_5 != 1)
  FUNC_4(0, VAR_0, VAR_1,
    "i2c i/o error: rc == %d (should be 1)\n", VAR_5);

 FUNC_3(10);

 VAR_5 = FUNC_1(VAR_3, (char *)&VAR_4, 2);
 if (VAR_5 != 2)
  FUNC_4(0, VAR_0, VAR_1,
    "i2c i/o error: rc == %d (should be 2)\n", VAR_5);

 VAR_6 = FUNC_0(VAR_4);

 FUNC_4(2, VAR_0, VAR_1, "mt9v011: read 0x%02x = 0x%04x\n", VAR_2, VAR_6);

 return VAR_6;
}
