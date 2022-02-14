
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ioc3_driver_data {int dummy; } ;


 int FUNC_0 (struct ioc3_driver_data*) ;

__attribute__((used)) static unsigned FUNC_1(struct ioc3_driver_data *VAR_0)
{
 unsigned VAR_1 = 0;
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < 8; VAR_2++)
  VAR_1 = (VAR_1 >> 1) | (FUNC_0(VAR_0) << 7);

 return VAR_1;
}
