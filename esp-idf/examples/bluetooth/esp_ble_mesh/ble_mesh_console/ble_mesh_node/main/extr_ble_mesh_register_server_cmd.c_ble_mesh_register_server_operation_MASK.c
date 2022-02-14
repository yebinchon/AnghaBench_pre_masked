
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* command; char* help; TYPE_2__* argtable; int * func; int * hint; } ;
typedef TYPE_1__ esp_console_cmd_t ;
struct TYPE_5__ {int end; void* role; void* model; void* opcode; int data; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 void* FUNC_2 (char*,int *,char*,char*) ;
 int FUNC_3 (char*,int *,char*,char*) ;
 int VAR_0 ;
 int FUNC_4 (TYPE_1__ const*) ;
 TYPE_2__ VAR_1 ;

void FUNC_5(void)
{
    VAR_1.data = FUNC_3("d", ((void*)0), "<data>", "message data");
    VAR_1.opcode = FUNC_2("o", ((void*)0), "<opcode>", "operation opcode");
    VAR_1.model = FUNC_2("m", ((void*)0), "<module>", "module published to");
    VAR_1.role = FUNC_2("r", ((void*)0), "<role>", "device role");
    VAR_1.end = FUNC_1(1);

    const esp_console_cmd_t VAR_2 = {
        .command = "bmpublish",
        .help = "ble mesh: publish message",
        .hint = ((void*)0),
        .func = &VAR_0,
        .argtable = &VAR_1,
    };
    FUNC_0(FUNC_4(&VAR_2));
}
