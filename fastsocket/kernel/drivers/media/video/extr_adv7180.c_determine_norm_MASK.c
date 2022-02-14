
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v4l2_std_id ;
typedef int u8 ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct i2c_client*,int ) ;

__attribute__((used)) static v4l2_std_id FUNC_1(struct i2c_client *VAR_11)
{
 u8 VAR_12 = FUNC_0(VAR_11, VAR_1);

 switch (VAR_12 & VAR_0) {
 case 134:
  return VAR_3;
 case 135:
  return VAR_2;
 case 130:
  return VAR_6;
 case 133:
  return VAR_5;
 case 132:
  return VAR_4;
 case 129:
  return VAR_9;
 case 131:
  return VAR_8 | VAR_7;
 case 128:
  return VAR_9;
 default:
  return VAR_10;
 }
}
