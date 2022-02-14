
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {char* command; char* help; TYPE_4__* argtable; int * func; int * hint; } ;
typedef TYPE_3__ esp_console_cmd_t ;
struct TYPE_10__ {void* end; void* ttl; void* node_num; void* test_size; void* action_type; TYPE_2__* dev_role; void* net_idx; void* app_idx; void* unicast_address; void* opcode; TYPE_1__* test_num; void* playload_byte; } ;
struct TYPE_8__ {int * ival; } ;
struct TYPE_7__ {int* ival; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 void* FUNC_1 (int) ;
 void* FUNC_2 (char*,int *,char*,char*) ;
 void* FUNC_3 (char*,int *,char*,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (TYPE_3__ const*) ;
 TYPE_4__ VAR_3 ;
 TYPE_4__ VAR_4 ;

void FUNC_5(void)
{
    VAR_3.action_type = FUNC_3("z", ((void*)0), "<action>", "action type");
    VAR_3.playload_byte = FUNC_2("p", ((void*)0), "<byte>", "playload byte");
    VAR_3.test_num = FUNC_2("n", ((void*)0), "<number>", "test number");

    VAR_3.test_num->ival[0] = 1000;
    VAR_3.opcode = FUNC_2("o", ((void*)0), "<opcode>", "opcode");
    VAR_3.unicast_address = FUNC_2("u", ((void*)0), "<address>", "unicast address");
    VAR_3.ttl = FUNC_2("t", ((void*)0), "<ttl>", "ttl");
    VAR_3.app_idx = FUNC_2("a", ((void*)0), "<appkey>", "appkey index");
    VAR_3.net_idx = FUNC_2("i", ((void*)0), "<network key>", "network key index");
    VAR_3.dev_role = FUNC_2("d", ((void*)0), "<role>", "device role");
    VAR_3.dev_role->ival[0] = VAR_0;
    VAR_3.end = FUNC_1(1);

    const esp_console_cmd_t VAR_5 = {
        .command = "bmtpcvm",
        .help = "ble mesh test performance client vendor model",
        .hint = ((void*)0),
        .func = &VAR_1,
        .argtable = &VAR_3,
    };
    FUNC_0(FUNC_4(&VAR_5));

    VAR_4.action_type = FUNC_3("z", ((void*)0), "<action>", "action type");
    VAR_4.test_size = FUNC_2("s", ((void*)0), "<test size>", "test size");
    VAR_4.node_num = FUNC_2("n", ((void*)0), "<node number>", "node number");
    VAR_4.ttl = FUNC_2("l", ((void*)0), "<test number>", "ttl");
    VAR_4.end = FUNC_1(1);

    const esp_console_cmd_t VAR_6 = {
        .command = "bmcperf",
        .help = "ble mesh client: test performance",
        .hint = ((void*)0),
        .func = &VAR_2,
        .argtable = &VAR_4,
    };
    FUNC_0(FUNC_4(&VAR_6));
}
