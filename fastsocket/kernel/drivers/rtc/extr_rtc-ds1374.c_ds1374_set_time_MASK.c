
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtc_time {int dummy; } ;
struct i2c_client {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct i2c_client*,unsigned long,int ,int) ;
 int FUNC_1 (struct rtc_time*,unsigned long*) ;
 struct i2c_client* FUNC_2 (struct device*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_1, struct rtc_time *VAR_2)
{
 struct i2c_client *VAR_3 = FUNC_2(VAR_1);
 unsigned long VAR_4;

 FUNC_1(VAR_2, &VAR_4);
 return FUNC_0(VAR_3, VAR_4, VAR_0, 4);
}
