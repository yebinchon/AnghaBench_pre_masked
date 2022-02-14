
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int gpio_num_t ;
typedef int esp_err_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,scalar_t__) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 () ;

esp_err_t FUNC_6(gpio_num_t VAR_4)
{
    FUNC_0(FUNC_1(VAR_4), "GPIO number error", VAR_0);
    FUNC_3(&VAR_2);
    if(VAR_3 == VAR_1) {
        VAR_3 = FUNC_5();
    }
    FUNC_4(&VAR_2);
    return FUNC_2 (VAR_4, VAR_3);
}
