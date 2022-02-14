
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int linenoiseHintsCallback ;
struct TYPE_3__ {int max_cmdline_args; int max_cmdline_length; int hint_color; } ;
typedef TYPE_1__ esp_console_config_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int ,int *,int ,int ) ;
 int VAR_7 ;
 int FUNC_11 (int ,int,int ,int ,int *,int ) ;

__attribute__((used)) static void FUNC_12(void)
{

    FUNC_10(VAR_7, ((void*)0), VAR_4, 0);


    FUNC_3(VAR_1);

    FUNC_4(VAR_2);


    FUNC_0( FUNC_11(VAR_0,
                                         256, 0, 0, ((void*)0), 0) );


    FUNC_5(VAR_0);


    esp_console_config_t VAR_8 = {
        .max_cmdline_args = 32,
        .max_cmdline_length = 256,



    };
    FUNC_0( FUNC_2(&VAR_8) );





    FUNC_9(1);


    FUNC_7(&VAR_5);
    FUNC_8((linenoiseHintsCallback *) &VAR_6);


    FUNC_6(100);
}
