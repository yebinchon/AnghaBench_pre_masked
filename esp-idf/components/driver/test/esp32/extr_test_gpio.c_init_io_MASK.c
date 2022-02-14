
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned long long gpio_num_t ;
struct TYPE_3__ {unsigned long long pin_bit_mask; scalar_t__ pull_up_en; scalar_t__ pull_down_en; int mode; int intr_type; } ;
typedef TYPE_1__ gpio_config_t ;


 int VAR_0 ;
 unsigned long long VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;

__attribute__((used)) static gpio_config_t FUNC_1(gpio_num_t VAR_3)
{
    FUNC_0(VAR_3 < VAR_1);
    gpio_config_t VAR_4;
    VAR_4.intr_type = VAR_2;
    VAR_4.mode = VAR_0;
    VAR_4.pin_bit_mask = (1ULL << VAR_3);
    VAR_4.pull_down_en = 0;
    VAR_4.pull_up_en = 0;
    return VAR_4;
}
