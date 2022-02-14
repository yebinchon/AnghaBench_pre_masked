
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* command; char* help; TYPE_2__* argtable; int * func; int * hint; } ;
typedef TYPE_1__ esp_console_cmd_t ;
struct TYPE_5__ {int end; void* wakeup_gpio_level; void* wakeup_gpio_num; int wakeup_time; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,char*,char*,char*) ;
 void* FUNC_3 (int *,char*,char*,int ,int,char*) ;
 int FUNC_4 (TYPE_1__ const*) ;
 int VAR_0 ;
 TYPE_2__ VAR_1 ;

__attribute__((used)) static void FUNC_5(void)
{
    VAR_1.wakeup_time =
        FUNC_2("t", "time", "<t>", "Wake up time, ms");
    VAR_1.wakeup_gpio_num =
        FUNC_3(((void*)0), "io", "<n>", 0, 8,
                 "If specified, wakeup using GPIO with given number");
    VAR_1.wakeup_gpio_level =
        FUNC_3(((void*)0), "io_level", "<0|1>", 0, 8, "GPIO level to trigger wakeup");
    VAR_1.end = FUNC_1(3);

    const esp_console_cmd_t VAR_2 = {
        .command = "light_sleep",
        .help = "Enter light sleep mode. "
        "Two wakeup modes are supported: timer and GPIO. "
        "Multiple GPIO pins can be specified using pairs of "
        "'io' and 'io_level' arguments. "
        "Will also wake up on UART input.",
        .hint = ((void*)0),
        .func = &VAR_0,
        .argtable = &VAR_1
    };
    FUNC_0( FUNC_4(&VAR_2) );
}
