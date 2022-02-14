
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_client {int dummy; } ;
struct f75375_data {int* pwm; int* pwm_enable; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct i2c_client*,int ) ;
 int FUNC_3 (struct i2c_client*,int ,int) ;
 struct f75375_data* FUNC_4 (struct i2c_client*) ;

__attribute__((used)) static int FUNC_5(struct i2c_client *VAR_2, int VAR_3, int VAR_4)
{
 struct f75375_data *VAR_5 = FUNC_4(VAR_2);
 u8 VAR_6;

 if (VAR_4 < 0 || VAR_4 > 4)
  return -VAR_0;

 VAR_6 = FUNC_2(VAR_2, VAR_1);
 VAR_6 = ~(3 << FUNC_1(VAR_3));

 switch (VAR_4) {
 case 0:
  VAR_6 |= (3 << FUNC_1(VAR_3));
  VAR_5->pwm[VAR_3] = 255;
  FUNC_3(VAR_2, FUNC_0(VAR_3),
    VAR_5->pwm[VAR_3]);
  break;
 case 1:
  VAR_6 |= (3 << FUNC_1(VAR_3));
  break;
 case 2:
  VAR_6 |= (2 << FUNC_1(VAR_3));
  break;
 case 3:
  break;
 }
 FUNC_3(VAR_2, VAR_1, VAR_6);
 VAR_5->pwm_enable[VAR_3] = VAR_4;
 return 0;
}
