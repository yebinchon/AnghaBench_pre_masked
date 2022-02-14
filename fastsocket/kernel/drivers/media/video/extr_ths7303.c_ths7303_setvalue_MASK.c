
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v4l2_std_id ;
typedef int u8 ;
struct v4l2_subdev {int dummy; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct i2c_client*,int,int) ;
 int FUNC_1 (int,int ,struct v4l2_subdev*,char*) ;
 int FUNC_2 (struct v4l2_subdev*,char*) ;
 struct i2c_client* FUNC_3 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_4(struct v4l2_subdev *VAR_3, v4l2_std_id VAR_4)
{
 int VAR_5 = 0;
 u8 VAR_6;
 struct i2c_client *VAR_7;

 VAR_7 = FUNC_3(VAR_3);

 if (VAR_4 & (VAR_0 & ~VAR_1)) {
  VAR_6 = 0x02;
  FUNC_1(1, VAR_2, VAR_3, "setting value for SDTV format\n");
 } else {
  VAR_6 = 0x00;
  FUNC_1(1, VAR_2, VAR_3, "disabling all channels\n");
 }

 VAR_5 |= FUNC_0(VAR_7, 0x01, VAR_6);
 VAR_5 |= FUNC_0(VAR_7, 0x02, VAR_6);
 VAR_5 |= FUNC_0(VAR_7, 0x03, VAR_6);

 if (VAR_5)
  FUNC_2(VAR_3, "write failed\n");

 return VAR_5;
}
