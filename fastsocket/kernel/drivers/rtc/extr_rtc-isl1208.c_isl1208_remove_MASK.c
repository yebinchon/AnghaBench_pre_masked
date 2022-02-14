
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtc_device {int dummy; } ;
struct i2c_client {int dev; } ;


 struct rtc_device* FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct rtc_device*) ;

__attribute__((used)) static int
FUNC_3(struct i2c_client *VAR_0)
{
 struct rtc_device *VAR_1 = FUNC_0(VAR_0);

 FUNC_1(&VAR_0->dev);
 FUNC_2(VAR_1);

 return 0;
}
