
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ioc3_submodule {int dummy; } ;
struct ioc3_driver_data {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (struct ioc3_submodule*,struct ioc3_driver_data*,unsigned int) ;

__attribute__((used)) static int FUNC_1(struct ioc3_submodule *VAR_2,
   struct ioc3_driver_data *VAR_3,
   unsigned int VAR_4)
{
 int VAR_5 = 0;






 if (VAR_4 & VAR_0)
  VAR_5 |= FUNC_0(VAR_2, VAR_3, VAR_4 & VAR_0);
 if (VAR_4 & VAR_1)
  VAR_5 |= FUNC_0(VAR_2, VAR_3, VAR_4 & VAR_1);

 return VAR_5;
}
