
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ioc3_driver_data {int dummy; } ;


 int FUNC_0 (struct ioc3_driver_data*) ;
 int FUNC_1 (struct ioc3_driver_data*) ;
 int FUNC_2 (struct ioc3_driver_data*,unsigned long) ;
 int FUNC_3 (struct ioc3_driver_data*,int) ;

__attribute__((used)) static void FUNC_4(struct ioc3_driver_data *VAR_0, unsigned long VAR_1)
{
 int VAR_2;

 FUNC_1(VAR_0);
 FUNC_3(VAR_0, 0xF0);
 for (VAR_2 = 0; VAR_2 < 64; VAR_2++) {
  FUNC_0(VAR_0);
  FUNC_0(VAR_0);
  FUNC_2(VAR_0, (VAR_1>>VAR_2)&1);
 }
}
