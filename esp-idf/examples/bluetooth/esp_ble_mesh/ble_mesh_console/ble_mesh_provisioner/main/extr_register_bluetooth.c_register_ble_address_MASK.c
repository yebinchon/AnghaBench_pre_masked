
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* command; char* help; int func; int * hint; } ;
typedef TYPE_1__ esp_console_cmd_t ;
typedef int esp_console_cmd_func_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__ const*) ;

void FUNC_2(void)
{
    const esp_console_cmd_t VAR_1 = {
        .command = "btmac",
        .help = "BLE address",
        .hint = ((void*)0),
        .func = (esp_console_cmd_func_t)&VAR_0,
    };
    FUNC_0(FUNC_1(&VAR_1));
}
