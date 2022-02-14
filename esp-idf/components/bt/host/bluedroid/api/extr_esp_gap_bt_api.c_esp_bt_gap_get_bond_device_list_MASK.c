
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int esp_err_t ;
typedef int esp_bd_addr_t ;
typedef int bt_bdaddr_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 () ;

esp_err_t FUNC_3(int *VAR_6, esp_bd_addr_t *VAR_7)
{
    int VAR_8;
    int VAR_9;

    if (VAR_6 == ((void*)0) || VAR_7 == ((void*)0)) {
        return VAR_2;
    }

    if (FUNC_2() != VAR_1) {
        return VAR_3;
    }

    VAR_9 = FUNC_1();
    if (*VAR_6 > VAR_9) {
        *VAR_6 = VAR_9;
    }

    VAR_8 = FUNC_0((bt_bdaddr_t *)VAR_7, *VAR_6);

    return (VAR_8 == VAR_0 ? VAR_5 : VAR_4);
}
