
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtc_device {int dummy; } ;
struct m41t80_data {int features; struct rtc_device* rtc; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 struct m41t80_data* FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (struct m41t80_data*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct rtc_device*) ;
 int FUNC_4 (int *) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_5(struct i2c_client *VAR_3)
{
 struct m41t80_data *VAR_4 = FUNC_0(VAR_3);
 struct rtc_device *VAR_5 = VAR_4->rtc;







 if (VAR_5)
  FUNC_3(VAR_5);
 FUNC_1(VAR_4);

 return 0;
}
