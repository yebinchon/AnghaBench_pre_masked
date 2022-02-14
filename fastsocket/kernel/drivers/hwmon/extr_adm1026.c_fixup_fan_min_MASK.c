
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dummy; } ;
struct device {int dummy; } ;
struct adm1026_data {int* fan_div; int* fan_min; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int,int) ;
 int FUNC_2 (struct i2c_client*,int ,int) ;
 struct adm1026_data* FUNC_3 (struct i2c_client*) ;
 struct i2c_client* FUNC_4 (struct device*) ;

__attribute__((used)) static void FUNC_5(struct device *VAR_0, int VAR_1, int VAR_2)
{
 struct i2c_client *VAR_3 = FUNC_4(VAR_0);
 struct adm1026_data *VAR_4 = FUNC_3(VAR_3);
 int VAR_5;
 int VAR_6 = VAR_4->fan_div[VAR_1];


 if (VAR_4->fan_min[VAR_1] == 0 || VAR_4->fan_min[VAR_1] == 0xff) {
  return;
 }

 VAR_5 = VAR_4->fan_min[VAR_1] * VAR_2 / VAR_6;
 VAR_5 = FUNC_1(VAR_5, 1, 254);
 VAR_4->fan_min[VAR_1] = VAR_5;
 FUNC_2(VAR_3, FUNC_0(VAR_1), VAR_5);
}
