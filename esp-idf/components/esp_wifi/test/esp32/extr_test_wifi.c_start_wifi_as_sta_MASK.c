
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int nvs_enable; } ;
typedef TYPE_1__ wifi_init_config_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 TYPE_1__ FUNC_1 () ;
 int VAR_1 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int VAR_2 ;
 int * VAR_3 ;
 int FUNC_7 (int *,int) ;
 int * FUNC_8 () ;

__attribute__((used)) static void FUNC_9(void)
{
    wifi_init_config_t VAR_4 = FUNC_1();
    VAR_4.nvs_enable = 0;


    VAR_2 |= VAR_0;
    FUNC_5();


    FUNC_6();

    if (VAR_3 == ((void*)0)) {
        VAR_3 = FUNC_8();
    } else {
        FUNC_7(VAR_3, 0x00ffffff);
    }

    FUNC_0(FUNC_2(&VAR_4));
    FUNC_0(FUNC_3(VAR_1));
    FUNC_0(FUNC_4());

}
