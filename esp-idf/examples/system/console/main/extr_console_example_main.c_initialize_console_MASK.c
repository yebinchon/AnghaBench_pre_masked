
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int use_ref_tick; int stop_bits; int parity; int data_bits; int baud_rate; } ;
typedef TYPE_1__ uart_config_t ;
typedef int linenoiseHintsCallback ;
struct TYPE_6__ {int max_cmdline_args; int max_cmdline_length; int hint_color; } ;
typedef TYPE_2__ esp_console_config_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int ,int *,int ,int ) ;
 int VAR_12 ;
 int FUNC_12 (int ,int,int ,int ,int *,int ) ;
 int FUNC_13 (int ,TYPE_1__ const*) ;

__attribute__((used)) static void FUNC_14(void)
{

    FUNC_11(VAR_12, ((void*)0), VAR_9, 0);


    FUNC_3(VAR_2);

    FUNC_4(VAR_3);




    const uart_config_t VAR_13 = {
            .baud_rate = VAR_0,
            .data_bits = VAR_6,
            .parity = VAR_7,
            .stop_bits = VAR_8,
            .use_ref_tick = 1
    };
    FUNC_0( FUNC_13(VAR_1, &VAR_13) );


    FUNC_0( FUNC_12(VAR_1,
            256, 0, 0, ((void*)0), 0) );


    FUNC_5(VAR_1);


    esp_console_config_t VAR_14 = {
            .max_cmdline_args = 8,
            .max_cmdline_length = 256,



    };
    FUNC_0( FUNC_2(&VAR_14) );





    FUNC_10(1);


    FUNC_8(&VAR_10);
    FUNC_9((linenoiseHintsCallback*) &VAR_11);


    FUNC_7(100);





}
