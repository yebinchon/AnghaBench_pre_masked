
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int esp_err_t ;
struct TYPE_2__ {int width; int d7_gpio; int d6_gpio; int d5_gpio; int d4_gpio; int d3_gpio; int d2_gpio; int d1_gpio; int d0_gpio; int cmd_gpio; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 TYPE_1__* VAR_2 ;

esp_err_t FUNC_1(int VAR_3, int VAR_4)
{
    if (VAR_4 > VAR_2[VAR_3].width) {

        return VAR_0;
    }

    FUNC_0(VAR_2[VAR_3].cmd_gpio);
    FUNC_0(VAR_2[VAR_3].d0_gpio);
    if (VAR_4 >= 4) {
        FUNC_0(VAR_2[VAR_3].d1_gpio);
        FUNC_0(VAR_2[VAR_3].d2_gpio);
        FUNC_0(VAR_2[VAR_3].d3_gpio);
    }
    if (VAR_4 == 8) {
        FUNC_0(VAR_2[VAR_3].d4_gpio);
        FUNC_0(VAR_2[VAR_3].d5_gpio);
        FUNC_0(VAR_2[VAR_3].d6_gpio);
        FUNC_0(VAR_2[VAR_3].d7_gpio);
    }
    return VAR_1;
}
