
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int esp_err_t ;
struct TYPE_3__ {char* command; char* help; int * func; } ;
typedef TYPE_1__ esp_console_cmd_t ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;

esp_err_t FUNC_1(void)
{
    esp_console_cmd_t VAR_1 = {
        .command = "help",
        .help = "Print the list of registered commands",
        .func = &VAR_0
    };
    return FUNC_0(&VAR_1);
}
