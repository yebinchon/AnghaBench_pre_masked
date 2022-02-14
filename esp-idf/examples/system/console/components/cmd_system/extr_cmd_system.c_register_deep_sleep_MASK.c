
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* command; char* help; TYPE_3__* argtable; int * func; int * hint; } ;
typedef TYPE_1__ esp_console_cmd_t ;
struct TYPE_5__ {int end; void* wakeup_gpio_level; void* wakeup_gpio_num; void* wakeup_time; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 void* FUNC_2 (char*,char*,char*,char*) ;
 int VAR_0 ;
 TYPE_3__ VAR_1 ;
 int FUNC_3 (TYPE_1__ const*) ;

__attribute__((used)) static void FUNC_4(void)
{
    VAR_1.wakeup_time =
        FUNC_2("t", "time", "<t>", "Wake up time, ms");
    VAR_1.wakeup_gpio_num =
        FUNC_2(((void*)0), "io", "<n>",
                 "If specified, wakeup using GPIO with given number");
    VAR_1.wakeup_gpio_level =
        FUNC_2(((void*)0), "io_level", "<0|1>", "GPIO level to trigger wakeup");
    VAR_1.end = FUNC_1(3);

    const esp_console_cmd_t VAR_2 = {
        .command = "deep_sleep",
        .help = "Enter deep sleep mode. "
        "Two wakeup modes are supported: timer and GPIO. "
        "If no wakeup option is specified, will sleep indefinitely.",
        .hint = ((void*)0),
        .func = &VAR_0,
        .argtable = &VAR_1
    };
    FUNC_0( FUNC_3(&VAR_2) );
}
