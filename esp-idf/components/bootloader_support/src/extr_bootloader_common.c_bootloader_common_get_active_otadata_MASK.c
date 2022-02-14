
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int esp_ota_select_entry_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int*,int) ;

int FUNC_2(esp_ota_select_entry_t *VAR_0)
{
    if (VAR_0 == ((void*)0)) {
        return -1;
    }
    bool VAR_1[2];
    VAR_1[0] = FUNC_0(&VAR_0[0]);
    VAR_1[1] = FUNC_0(&VAR_0[1]);
    return FUNC_1(VAR_0, VAR_1, 1);
}
