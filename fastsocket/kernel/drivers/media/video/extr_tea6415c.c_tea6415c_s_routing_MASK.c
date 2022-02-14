
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct v4l2_subdev {int dummy; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct i2c_client*,int) ;
 int FUNC_1 (int,int ,struct v4l2_subdev*,char*,int,...) ;
 struct i2c_client* FUNC_2 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_3(struct v4l2_subdev *VAR_3,
         u32 VAR_4, u32 VAR_5, u32 VAR_6)
{
 struct i2c_client *VAR_7 = FUNC_2(VAR_3);
 u8 VAR_8 = 0;
 int VAR_9;

 FUNC_1(1, VAR_2, VAR_3, "i=%d, o=%d\n", VAR_4, VAR_5);


 if (0 == ((1 == VAR_4 || 3 == VAR_4 || 5 == VAR_4 || 6 == VAR_4 || 8 == VAR_4 || 10 == VAR_4 || 20 == VAR_4 || 11 == VAR_4)
       && (18 == VAR_5 || 17 == VAR_5 || 16 == VAR_5 || 15 == VAR_5 || 14 == VAR_5 || 13 == VAR_5)))
  return -VAR_0;


 switch (VAR_5) {
 case 18:
  VAR_8 = 0x00;
  break;
 case 14:
  VAR_8 = 0x20;
  break;
 case 16:
  VAR_8 = 0x10;
  break;
 case 17:
  VAR_8 = 0x08;
  break;
 case 15:
  VAR_8 = 0x18;
  break;
 case 13:
  VAR_8 = 0x28;
  break;
 };

 switch (VAR_4) {
 case 5:
  VAR_8 |= 0x00;
  break;
 case 8:
  VAR_8 |= 0x04;
  break;
 case 3:
  VAR_8 |= 0x02;
  break;
 case 20:
  VAR_8 |= 0x06;
  break;
 case 6:
  VAR_8 |= 0x01;
  break;
 case 10:
  VAR_8 |= 0x05;
  break;
 case 1:
  VAR_8 |= 0x03;
  break;
 case 11:
  VAR_8 |= 0x07;
  break;
 };

 VAR_9 = FUNC_0(VAR_7, VAR_8);
 if (VAR_9) {
  FUNC_1(1, VAR_2, VAR_3,
   "i2c_smbus_write_byte() failed, ret:%d\n", VAR_9);
  return -VAR_1;
 }
 return VAR_9;
}
