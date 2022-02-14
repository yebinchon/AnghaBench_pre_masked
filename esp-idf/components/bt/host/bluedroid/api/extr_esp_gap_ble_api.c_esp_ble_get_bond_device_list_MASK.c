
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int esp_err_t ;
typedef int esp_ble_bond_dev_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 () ;

esp_err_t FUNC_3(int *VAR_5, esp_ble_bond_dev_t *VAR_6)
{
    int VAR_7;
    int VAR_8;

    if (VAR_5 == ((void*)0) || VAR_6 == ((void*)0)) {
        return VAR_2;
    }

    FUNC_0(VAR_1);

    VAR_8 = FUNC_2();
    if (*VAR_5 > VAR_8) {
        *VAR_5 = VAR_8;
    }

    VAR_7 = FUNC_1(VAR_6, *VAR_5);

    return (VAR_7 == VAR_0 ? VAR_4 : VAR_3);
}
