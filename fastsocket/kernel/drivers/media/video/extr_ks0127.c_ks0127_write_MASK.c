
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char u8 ;
struct v4l2_subdev {int dummy; } ;
struct ks0127 {char* regs; } ;
struct i2c_client {int dummy; } ;
typedef int msg ;


 int VAR_0 ;
 int FUNC_0 (struct i2c_client*,char*,int) ;
 struct ks0127* FUNC_1 (struct v4l2_subdev*) ;
 int FUNC_2 (int,int ,struct v4l2_subdev*,char*) ;
 struct i2c_client* FUNC_3 (struct v4l2_subdev*) ;

__attribute__((used)) static void FUNC_4(struct v4l2_subdev *VAR_1, u8 VAR_2, u8 VAR_3)
{
 struct i2c_client *VAR_4 = FUNC_3(VAR_1);
 struct ks0127 *VAR_5 = FUNC_1(VAR_1);
 char VAR_6[] = { VAR_2, VAR_3 };

 if (FUNC_0(VAR_4, VAR_6, sizeof(VAR_6)) != sizeof(VAR_6))
  FUNC_2(1, VAR_0, VAR_1, "write error\n");

 VAR_5->regs[VAR_2] = VAR_3;
}
