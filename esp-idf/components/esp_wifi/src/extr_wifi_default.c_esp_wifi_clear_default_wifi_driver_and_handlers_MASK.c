
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int esp_err_t ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 (void*) ;
 void** VAR_2 ;

esp_err_t FUNC_3(void *VAR_3)
{
    int VAR_4;
    for (VAR_4 = 0; VAR_4< VAR_0; ++VAR_4) {

        if (VAR_2[VAR_4] == VAR_3) {
            VAR_2[VAR_4] = ((void*)0);
        }

        if (VAR_2[VAR_4] != ((void*)0)) {
            break;
        }
    }

    if (VAR_4 == VAR_0) {
        FUNC_0(VAR_1, "Clearing wifi default handlers");
        FUNC_1();
    }
    return FUNC_2(VAR_3);
}
