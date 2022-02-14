
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t gpio_num_t ;
typedef int gpio_drive_cap_t ;
typedef int esp_err_t ;
struct TYPE_4__ {int drv_s; int drv_v; int reg; } ;
struct TYPE_3__ {int drv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (size_t) ;
 int FUNC_2 (int ,char*,int ) ;
 TYPE_2__* VAR_2 ;
 int FUNC_3 (size_t) ;
 TYPE_1__** VAR_3 ;

esp_err_t FUNC_4(gpio_num_t VAR_4, gpio_drive_cap_t* VAR_5)
{
    FUNC_2(FUNC_3(VAR_4), "RTC_GPIO number error", VAR_0);
    FUNC_2(FUNC_1(VAR_4), "Output pad only", VAR_0);
    FUNC_2(VAR_5 != ((void*)0), "GPIO drive pointer error", VAR_0);





    return VAR_1;
}
