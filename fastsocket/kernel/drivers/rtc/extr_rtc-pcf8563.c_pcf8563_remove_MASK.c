
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcf8563 {scalar_t__ rtc; } ;
struct i2c_client {int dummy; } ;


 struct pcf8563* FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (struct pcf8563*) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct i2c_client *VAR_0)
{
 struct pcf8563 *VAR_1 = FUNC_0(VAR_0);

 if (VAR_1->rtc)
  FUNC_2(VAR_1->rtc);

 FUNC_1(VAR_1);

 return 0;
}
