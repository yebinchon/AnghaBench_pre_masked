
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int esp_err_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 int * FUNC_0 () ;
 int FUNC_1 (int *,int ) ;

esp_err_t FUNC_2(void)
{
    if (VAR_3 == ((void*)0)) {
        VAR_3 = FUNC_0();
        if (VAR_3 == ((void*)0)) {
            return VAR_0;
        }
    }
    FUNC_1(VAR_3, VAR_2);
    return VAR_1;
}
