
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int gpio_int; int semphr_int; } ;
typedef TYPE_1__ slot_info_t ;
typedef int esp_err_t ;
typedef int TickType_t ;
typedef scalar_t__ BaseType_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_2 ;
 TYPE_1__* VAR_3 ;
 scalar_t__ FUNC_3 (int ,int ) ;

esp_err_t FUNC_4(int VAR_4, TickType_t VAR_5)
{
    slot_info_t* VAR_6 = &VAR_3[VAR_4];

    if (FUNC_0(VAR_6->gpio_int)==0) return VAR_1;


    FUNC_3(VAR_6->semphr_int, 0);

    FUNC_2(VAR_6->gpio_int);
    BaseType_t VAR_7 = FUNC_3(VAR_6->semphr_int, VAR_5);
    if (VAR_7 == VAR_2) {
        FUNC_1(VAR_6->gpio_int);
        return VAR_0;
    }
    return VAR_1;
}
