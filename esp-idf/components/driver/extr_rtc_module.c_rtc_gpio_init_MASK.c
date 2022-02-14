
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t gpio_num_t ;
typedef int esp_err_t ;
struct TYPE_4__ {int func; int reg; int mux; } ;
struct TYPE_3__ {int mux_sel; int fun_sel; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ,int ,int,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 TYPE_2__* VAR_3 ;
 int FUNC_5 (size_t) ;
 TYPE_1__** VAR_4 ;
 int VAR_5 ;

esp_err_t FUNC_6(gpio_num_t VAR_6)
{
    FUNC_0(FUNC_5(VAR_6), "RTC_GPIO number error", VAR_0);
    FUNC_3(&VAR_5);
    FUNC_4(&VAR_5);

    return VAR_1;
}
