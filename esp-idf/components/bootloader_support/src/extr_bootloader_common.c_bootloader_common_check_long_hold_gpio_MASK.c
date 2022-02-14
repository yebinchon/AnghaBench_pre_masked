
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
typedef int esp_comm_gpio_hold_t ;


 int FUNC_0 (size_t) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__* VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (scalar_t__) ;
 size_t FUNC_2 () ;
 int FUNC_3 (size_t) ;
 int FUNC_4 (size_t) ;

esp_comm_gpio_hold_t FUNC_5(uint32_t VAR_4, uint32_t VAR_5)
{
    FUNC_4(VAR_4);
    if (VAR_2[VAR_4]) {
        FUNC_1(VAR_2[VAR_4]);
    }
    FUNC_3(VAR_4);
    uint32_t VAR_6 = FUNC_2();
    if (FUNC_0(VAR_4) == 1) {
        return VAR_1;
    }
    do {
        if (FUNC_0(VAR_4) != 0) {
            return VAR_3;
        }
    } while (VAR_5 > ((FUNC_2() - VAR_6) / 1000L));
    return VAR_0;
}
