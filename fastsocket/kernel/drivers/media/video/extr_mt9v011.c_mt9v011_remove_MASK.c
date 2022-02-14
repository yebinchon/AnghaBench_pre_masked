
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct i2c_client {int addr; } ;


 int VAR_0 ;
 struct v4l2_subdev* FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct v4l2_subdev*) ;
 int FUNC_3 (int,int ,struct v4l2_subdev*,char*,int) ;
 int FUNC_4 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_5(struct i2c_client *VAR_1)
{
 struct v4l2_subdev *VAR_2 = FUNC_0(VAR_1);

 FUNC_3(1, VAR_0, VAR_2,
  "mt9v011.c: removing mt9v011 adapter on address 0x%x\n",
  VAR_1->addr << 1);

 FUNC_4(VAR_2);
 FUNC_1(FUNC_2(VAR_2));
 return 0;
}
