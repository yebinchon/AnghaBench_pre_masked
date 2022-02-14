
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* command; char* help; int * func; int * hint; } ;
typedef TYPE_1__ esp_console_cmd_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__ const*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_2(void)
{
    const esp_console_cmd_t VAR_1 = {
        .command = "free",
        .help = "Get the current size of free heap memory",
        .hint = ((void*)0),
        .func = &VAR_0,
    };
    FUNC_0( FUNC_1(&VAR_1) );
}
