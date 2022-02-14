
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ gpio_num_t ;
struct TYPE_3__ {int pull_up_en; int pull_down_en; int intr_type; int mode; int pin_bit_mask; } ;
typedef TYPE_1__ gpio_config_t ;
typedef int esp_err_t ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int VAR_2 ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__*) ;

esp_err_t FUNC_4(gpio_num_t VAR_3)
{
    FUNC_2(VAR_3 >= 0 && FUNC_1(VAR_3));
    gpio_config_t VAR_4 = {
        .pin_bit_mask = FUNC_0(VAR_3),
        .mode = VAR_2,

        .pull_up_en = 1,
        .pull_down_en = 0,
        .intr_type = VAR_1,
    };
    FUNC_3(&VAR_4);
    return VAR_0;
}
