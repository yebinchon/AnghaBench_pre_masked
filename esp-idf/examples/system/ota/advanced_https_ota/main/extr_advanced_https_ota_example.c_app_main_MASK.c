
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ esp_err_t ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 () ;
 scalar_t__ FUNC_5 () ;
 scalar_t__ FUNC_6 () ;
 int FUNC_7 (int *,char*,int,int *,int,int *) ;

void FUNC_8(void)
{

    esp_err_t VAR_4 = FUNC_6();
    if (VAR_4 == VAR_1 || VAR_4 == VAR_0) {




        FUNC_0(FUNC_5());
        VAR_4 = FUNC_6();
    }
    FUNC_0( VAR_4 );

    FUNC_2();
    FUNC_0(FUNC_1());





    FUNC_0(FUNC_4());
    FUNC_7(&VAR_3, "advanced_ota_example_task", 1024 * 8, ((void*)0), 5, ((void*)0));
}
