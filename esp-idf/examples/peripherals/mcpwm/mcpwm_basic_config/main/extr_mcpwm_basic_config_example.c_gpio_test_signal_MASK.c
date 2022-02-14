
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int pin_bit_mask; int mode; int intr_type; } ;
typedef TYPE_1__ gpio_config_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(void *VAR_4)
{
    FUNC_2("intializing test signal...\n");
    gpio_config_t VAR_5;
    VAR_5.intr_type = VAR_0;
    VAR_5.mode = VAR_1;
    VAR_5.pin_bit_mask = VAR_3;
    FUNC_0(&VAR_5);
    while (1) {

        FUNC_1(VAR_2, 1);
        FUNC_3(10);
        FUNC_1(VAR_2, 0);
        FUNC_3(10);
    }
}
