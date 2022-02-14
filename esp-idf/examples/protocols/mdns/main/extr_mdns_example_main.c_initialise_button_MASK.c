
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int pull_up_en; scalar_t__ pull_down_en; int mode; int pin_bit_mask; int intr_type; int member_0; } ;
typedef TYPE_1__ gpio_config_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_2(void)
{
    gpio_config_t VAR_3 = {0};
    VAR_3.intr_type = VAR_2;
    VAR_3.pin_bit_mask = FUNC_0(VAR_0);
    VAR_3.mode = VAR_1;
    VAR_3.pull_up_en = 1;
    VAR_3.pull_down_en = 0;
    FUNC_1(&VAR_3);
}
