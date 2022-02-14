
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ioc3_submodule {unsigned int irq_mask; } ;
struct ioc3_driver_data {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ioc3_driver_data*,unsigned int,int ) ;

void FUNC_1(struct ioc3_submodule *VAR_1,
    struct ioc3_driver_data *VAR_2, unsigned int VAR_3)
{
 FUNC_0(VAR_2, VAR_3 & VAR_1->irq_mask, VAR_0);
}
