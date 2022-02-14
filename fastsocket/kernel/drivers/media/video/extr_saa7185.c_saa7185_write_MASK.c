
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct v4l2_subdev {int dummy; } ;
struct saa7185 {size_t* reg; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct i2c_client*,size_t,size_t) ;
 struct saa7185* FUNC_1 (struct v4l2_subdev*) ;
 int FUNC_2 (int,int ,struct v4l2_subdev*,char*,size_t,size_t) ;
 struct i2c_client* FUNC_3 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_4(struct v4l2_subdev *VAR_1, u8 VAR_2, u8 VAR_3)
{
 struct i2c_client *VAR_4 = FUNC_3(VAR_1);
 struct saa7185 *VAR_5 = FUNC_1(VAR_1);

 FUNC_2(1, VAR_0, VAR_1, "%02x set to %02x\n", VAR_2, VAR_3);
 VAR_5->reg[VAR_2] = VAR_3;
 return FUNC_0(VAR_4, VAR_2, VAR_3);
}
