
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t gpio_num_t ;
typedef scalar_t__ gpio_drive_cap_t ;
typedef int esp_err_t ;
struct TYPE_4__ {int drv_s; int drv_v; int reg; } ;
struct TYPE_3__ {scalar_t__ drv; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (size_t) ;
 int FUNC_1 (int,char*,int ) ;
 int FUNC_2 (int ,int ,scalar_t__,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 TYPE_2__* VAR_3 ;
 int FUNC_5 (size_t) ;
 TYPE_1__** VAR_4 ;
 int VAR_5 ;

esp_err_t FUNC_6(gpio_num_t VAR_6, gpio_drive_cap_t VAR_7)
{
    FUNC_1(FUNC_5(VAR_6), "RTC_GPIO number error", VAR_0);
    FUNC_1(FUNC_0(VAR_6), "Output pad only", VAR_0);
    FUNC_1(VAR_7 < VAR_2, "GPIO drive capability error", VAR_0);

    FUNC_3(&VAR_5);





    FUNC_4(&VAR_5);
    return VAR_1;
}
