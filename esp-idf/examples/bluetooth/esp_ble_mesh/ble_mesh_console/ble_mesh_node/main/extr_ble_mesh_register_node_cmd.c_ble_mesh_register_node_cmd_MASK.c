
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {char* command; char* help; TYPE_3__* argtable; int * func; int * hint; } ;
typedef TYPE_2__ esp_console_cmd_t ;
struct TYPE_12__ {void* end; void* group_addr; void* app_idx; void* app_key; void* dev_key; void* unicast_addr; void* net_idx; void* net_key; void* tx_sense_power; void* action_type; void* package_num; void* enable; void* bearer; void* dev_uuid; void* pub_config; TYPE_1__* config_index; void* model_type; void* input_actions; void* input_size; void* output_actions; void* output_size; void* static_val_len; void* static_val; } ;
struct TYPE_10__ {scalar_t__* ival; } ;


 int FUNC_0 (int ) ;
 void* FUNC_1 (int) ;
 void* FUNC_2 (char*,int *,char*,char*) ;
 void* FUNC_3 (char*,int *,char*,char*) ;
 void* FUNC_4 (char*,int *,char*,char*) ;
 void* FUNC_5 (char*,int *,char*,char*) ;
 TYPE_3__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_3__ VAR_9 ;
 int FUNC_6 (TYPE_2__ const*) ;
 TYPE_3__ VAR_10 ;
 TYPE_3__ VAR_11 ;
 TYPE_3__ VAR_12 ;
 TYPE_3__ VAR_13 ;

void FUNC_7(void)
{
    const esp_console_cmd_t VAR_14 = {
        .command = "bmreg",
        .help = "ble mesh: provisioner/node register callback",
        .hint = ((void*)0),
        .func = &VAR_8,
    };
    FUNC_0(FUNC_6(&VAR_14));

    VAR_12.static_val = FUNC_4("s", ((void*)0), "<value>", "Static OOB value");
    VAR_12.static_val_len = FUNC_2("l", ((void*)0), "<length>", "Static OOB value length");
    VAR_12.output_size = FUNC_2("x", ((void*)0), "<size>", "Maximum size of Output OOB");
    VAR_12.output_actions = FUNC_2("o", ((void*)0), "<actions>", "Supported Output OOB Actions");
    VAR_12.input_size = FUNC_2("y", ((void*)0), "<size>", "Maximum size of Input OOB");
    VAR_12.input_actions = FUNC_2("i", ((void*)0), "<actions>", "Supported Input OOB Actions");
    VAR_12.end = FUNC_1(1);

    const esp_console_cmd_t VAR_15 = {
        .command = "bmoob",
        .help = "ble mesh: provisioner/node config OOB parameters",
        .hint = ((void*)0),
        .func = &VAR_2,
        .argtable = &VAR_12,
    };
    FUNC_0( FUNC_6(&VAR_15) );

    VAR_9.model_type = FUNC_2("m", ((void*)0), "<model>", "mesh model");
    VAR_9.config_index = FUNC_2("c", ((void*)0), "<index>", "mesh model op");
    VAR_9.config_index->ival[0] = 0;
    VAR_9.pub_config = FUNC_2("p", ((void*)0), "<publish>", "publish message buffer");
    VAR_9.dev_uuid = FUNC_4("d", ((void*)0), "<uuid>", "device uuid");
    VAR_9.end = FUNC_1(1);

    const esp_console_cmd_t VAR_16 = {
        .command = "bminit",
        .help = "ble mesh: provisioner/node init",
        .hint = ((void*)0),
        .func = &VAR_1,
        .argtable = &VAR_9,
    };
    FUNC_0( FUNC_6(&VAR_16) );

    VAR_0.bearer = FUNC_2("b", ((void*)0), "<bearer>", "supported bearer");
    VAR_0.enable = FUNC_2("e", ((void*)0), "<enable/disable>", "bearers node supported");
    VAR_0.end = FUNC_1(1);

    const esp_console_cmd_t VAR_17 = {
        .command = "bmnbearer",
        .help = "ble mesh node: enable/disable different bearer",
        .hint = ((void*)0),
        .func = &VAR_3,
        .argtable = &VAR_0,
    };
    FUNC_0(FUNC_6(&VAR_17));

    const esp_console_cmd_t VAR_18 = {
        .command = "bmnreset",
        .help = "ble mesh node: reset",
        .hint = ((void*)0),
        .func = &VAR_5,
    };
    FUNC_0(FUNC_6(&VAR_18));

    VAR_11.action_type = FUNC_5("z", ((void*)0), "<action>", "action type");
    VAR_11.package_num = FUNC_2("p", ((void*)0), "<package>", "package number");
    VAR_11.end = FUNC_1(1);

    const esp_console_cmd_t VAR_19 = {
        .command = "bmsperf",
        .help = "ble mesh server: performance statistics",
        .hint = ((void*)0),
        .func = &VAR_6,
        .argtable = &VAR_11,
    };
    FUNC_0(FUNC_6(&VAR_19));

    VAR_13.action_type = FUNC_5("z", ((void*)0), "<action>", "action type");
    VAR_13.tx_sense_power = FUNC_2("t", ((void*)0), "<power>", "tx power or sense");
    VAR_13.end = FUNC_1(1);

    const esp_console_cmd_t VAR_20 = {
        .command = "bmtxpower",
        .help = "ble mesh: set tx power or sense",
        .hint = ((void*)0),
        .func = &VAR_7,
        .argtable = &VAR_13,
    };
    FUNC_0(FUNC_6(&VAR_20));

    VAR_10.net_key = FUNC_5("k", ((void*)0), "<net key>", "network key");
    VAR_10.net_idx = FUNC_3("n", ((void*)0), "<net index>", "network key index");
    VAR_10.unicast_addr = FUNC_3("u", ((void*)0), "<unicast address>", "unicast address");
    VAR_10.dev_key = FUNC_5("d", ((void*)0), "<device key>", "device key");
    VAR_10.app_key = FUNC_5("a", ((void*)0), "<appkey>", "app key");
    VAR_10.app_idx = FUNC_3("i", ((void*)0), "<app index>", "appkey index");
    VAR_10.group_addr = FUNC_3("g", ((void*)0), "<group address>", "group address");
    VAR_10.end = FUNC_1(1);

    const esp_console_cmd_t VAR_21 = {
        .command = "bmnnwk",
        .help = "ble mesh node: auto join network",
        .hint = ((void*)0),
        .func = &VAR_4,
        .argtable = &VAR_10,
    };
    FUNC_0(FUNC_6(&VAR_21));
}
