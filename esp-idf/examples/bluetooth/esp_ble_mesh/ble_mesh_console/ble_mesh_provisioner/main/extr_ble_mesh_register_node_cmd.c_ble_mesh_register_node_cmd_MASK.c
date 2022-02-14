
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {char* command; char* help; TYPE_4__* argtable; int * func; int * hint; } ;
typedef TYPE_3__ esp_console_cmd_t ;
struct TYPE_12__ {void* end; int action_type; void* tx_sense_power; void* enable; void* bearer; void* pub_config; TYPE_2__* config_index; void* model_type; TYPE_1__* prov_start_address; void* input_actions; void* input_size; void* output_actions; void* output_size; void* static_val_len; int static_val; } ;
struct TYPE_10__ {scalar_t__* ival; } ;
struct TYPE_9__ {int* ival; } ;


 int FUNC_0 (int ) ;
 void* FUNC_1 (int) ;
 void* FUNC_2 (char*,int *,char*,char*) ;
 int FUNC_3 (char*,int *,char*,char*) ;
 int FUNC_4 (char*,int *,char*,char*) ;
 TYPE_4__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_4__ VAR_6 ;
 int FUNC_5 (TYPE_3__ const*) ;
 TYPE_4__ VAR_7 ;
 TYPE_4__ VAR_8 ;

void FUNC_6(void)
{
    const esp_console_cmd_t VAR_9 = {
        .command = "bmreg",
        .help = "ble mesh: provisioner/node register callback",
        .hint = ((void*)0),
        .func = &VAR_5,
    };
    FUNC_0(FUNC_5(&VAR_9));
    VAR_7.static_val = FUNC_3("s", ((void*)0), "<value>", "Static OOB value");
    VAR_7.static_val_len = FUNC_2("l", ((void*)0), "<length>", "Static OOB value length");
    VAR_7.output_size = FUNC_2("x", ((void*)0), "<size>", "Maximum size of Output OOB");
    VAR_7.output_actions = FUNC_2("o", ((void*)0), "<actions>", "Supported Output OOB Actions");
    VAR_7.input_size = FUNC_2("y", ((void*)0), "<size>", "Maximum size of Input OOB");
    VAR_7.input_actions = FUNC_2("i", ((void*)0), "<actions>", "Supported Input OOB Actions");
    VAR_7.prov_start_address = FUNC_2("p", ((void*)0), "<address>", "start address assigned by provisioner");
    VAR_7.prov_start_address->ival[0] = 0x0005;
    VAR_7.end = FUNC_1(1);

    const esp_console_cmd_t VAR_10 = {
        .command = "bmoob",
        .help = "ble mesh: provisioner/node config OOB parameters",
        .hint = ((void*)0),
        .func = &VAR_2,
        .argtable = &VAR_7,
    };
    FUNC_0( FUNC_5(&VAR_10) );

    VAR_6.model_type = FUNC_2("m", ((void*)0), "<model>", "mesh model");
    VAR_6.config_index = FUNC_2("c", ((void*)0), "<index>", "mesh model op");
    VAR_6.config_index->ival[0] = 0;
    VAR_6.pub_config = FUNC_2("p", ((void*)0), "<publish>", "publish message buffer");
    VAR_6.end = FUNC_1(1);

    const esp_console_cmd_t VAR_11 = {
        .command = "bminit",
        .help = "ble mesh: provisioner/node init",
        .hint = ((void*)0),
        .func = &VAR_1,
        .argtable = &VAR_6,
    };
    FUNC_0( FUNC_5(&VAR_11) );

    VAR_0.bearer = FUNC_2("b", ((void*)0), "<bearer>", "supported bearer");
    VAR_0.enable = FUNC_2("e", ((void*)0), "<enable/disable>", "bearers node supported");
    VAR_0.end = FUNC_1(1);

    const esp_console_cmd_t VAR_12 = {
        .command = "bmpbearer",
        .help = "ble mesh provisioner: enable/disable different bearers",
        .hint = ((void*)0),
        .func = &VAR_4,
        .argtable = &VAR_0,
    };
    FUNC_0(FUNC_5(&VAR_12));

    VAR_8.tx_sense_power = FUNC_2("t", ((void*)0), "<power>", "tx power or sense");
    VAR_8.action_type = FUNC_4("z", ((void*)0), "<action>", "action type");
    VAR_8.end = FUNC_1(1);

    const esp_console_cmd_t VAR_13 = {
        .command = "bmtxpower",
        .help = "ble mesh: set tx power or sense",
        .hint = ((void*)0),
        .func = &VAR_3,
        .argtable = &VAR_8,
    };
    FUNC_0(FUNC_5(&VAR_13));
}
