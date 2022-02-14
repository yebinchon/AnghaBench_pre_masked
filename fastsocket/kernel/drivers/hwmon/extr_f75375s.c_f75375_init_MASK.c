
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dummy; } ;
struct f75375s_platform_data {int * pwm; int * pwm_enable; } ;
struct f75375_data {int * pwm; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (struct i2c_client*,int ,int ) ;
 int FUNC_3 (struct i2c_client*,int,int ) ;

__attribute__((used)) static void FUNC_4(struct i2c_client *VAR_0, struct f75375_data *VAR_1,
  struct f75375s_platform_data *VAR_2)
{
 int VAR_3;
 FUNC_3(VAR_0, 0, VAR_2->pwm_enable[0]);
 FUNC_3(VAR_0, 1, VAR_2->pwm_enable[1]);
 for (VAR_3 = 0; VAR_3 < 2; VAR_3++) {
  VAR_1->pwm[VAR_3] = FUNC_1(VAR_2->pwm[VAR_3], 0, 255);
  FUNC_2(VAR_0, FUNC_0(VAR_3),
   VAR_1->pwm[VAR_3]);
 }

}
