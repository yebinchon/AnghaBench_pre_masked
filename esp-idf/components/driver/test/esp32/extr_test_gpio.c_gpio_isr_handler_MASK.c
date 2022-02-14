
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int isr_cnt; int gpio_num; } ;
typedef TYPE_1__ gpio_isr_param_t ;


 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(void* VAR_0)
{
    gpio_isr_param_t *VAR_1 = (gpio_isr_param_t *)VAR_0;
    FUNC_0("GPIO[%d] intr, val: %d\n", VAR_1->gpio_num, FUNC_1(VAR_1->gpio_num));
    VAR_1->isr_cnt++;
}
