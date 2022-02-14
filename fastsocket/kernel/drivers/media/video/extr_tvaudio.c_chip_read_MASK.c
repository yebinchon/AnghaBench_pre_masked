
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct i2c_client {int dummy; } ;
struct CHIPSTATE {struct v4l2_subdev sd; } ;


 int VAR_0 ;
 int FUNC_0 (struct i2c_client*,unsigned char*,int) ;
 int FUNC_1 (int,int ,struct v4l2_subdev*,char*,unsigned char) ;
 struct i2c_client* FUNC_2 (struct v4l2_subdev*) ;
 int FUNC_3 (struct v4l2_subdev*,char*) ;

__attribute__((used)) static int FUNC_4(struct CHIPSTATE *VAR_1)
{
 struct v4l2_subdev *VAR_2 = &VAR_1->sd;
 struct i2c_client *VAR_3 = FUNC_2(VAR_2);
 unsigned char VAR_4;

 if (1 != FUNC_0(VAR_3, &VAR_4, 1)) {
  FUNC_3(VAR_2, "I/O error (read)\n");
  return -1;
 }
 FUNC_1(1, VAR_0, VAR_2, "chip_read: 0x%x\n", VAR_4);
 return VAR_4;
}
