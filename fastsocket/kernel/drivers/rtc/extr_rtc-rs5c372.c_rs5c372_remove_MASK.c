
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rs5c372 {int rtc; } ;
struct i2c_client {int dev; } ;


 struct rs5c372* FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (struct rs5c372*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct i2c_client *VAR_0)
{
 struct rs5c372 *VAR_1 = FUNC_0(VAR_0);

 FUNC_3(VAR_1->rtc);
 FUNC_2(&VAR_0->dev);
 FUNC_1(VAR_1);
 return 0;
}
