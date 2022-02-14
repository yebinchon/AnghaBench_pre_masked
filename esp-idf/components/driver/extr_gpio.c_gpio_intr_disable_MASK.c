
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t gpio_num_t ;
typedef int esp_err_t ;
struct TYPE_4__ {TYPE_1__* pin; } ;
struct TYPE_3__ {scalar_t__ int_ena; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__ VAR_2 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (size_t) ;
 int FUNC_2 (size_t) ;

esp_err_t FUNC_3(gpio_num_t VAR_3)
{
    FUNC_0(FUNC_1(VAR_3), "GPIO number error", VAR_0);
    VAR_2.pin[VAR_3].int_ena = 0;
    FUNC_2(VAR_3);
    return VAR_1;
}
