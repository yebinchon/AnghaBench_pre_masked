
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {char* command; char* help; TYPE_2__* argtable; int * func; int * hint; } ;
typedef TYPE_1__ esp_console_cmd_t ;
struct TYPE_10__ {void* end; void* type; void* namespace; void* partition; void* key; void* value; } ;


 char* VAR_0 ;
 int FUNC_0 (int ) ;
 void* FUNC_1 (int) ;
 void* FUNC_2 (char*,char*,char*,char*) ;
 void* FUNC_3 (char*,char*,char*,char*) ;
 TYPE_2__ VAR_1 ;
 TYPE_2__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (TYPE_1__ const*) ;
 TYPE_2__ VAR_5 ;
 int VAR_6 ;
 TYPE_2__ VAR_7 ;
 int VAR_8 ;
 TYPE_2__ VAR_9 ;
 TYPE_2__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;

void FUNC_5(void)
{
    VAR_10.key = FUNC_3(((void*)0), ((void*)0), "<key>", "key of the value to be set");
    VAR_10.type = FUNC_3(((void*)0), ((void*)0), "<type>", VAR_0);

    VAR_10.value = FUNC_3("v", "value", "<value>", "value to be stored");
    VAR_10.end = FUNC_1(2);

    VAR_5.key = FUNC_3(((void*)0), ((void*)0), "<key>", "key of the value to be read");
    VAR_5.type = FUNC_3(((void*)0), ((void*)0), "<type>", VAR_0);
    VAR_5.end = FUNC_1(2);

    VAR_2.key = FUNC_3(((void*)0), ((void*)0), "<key>", "key of the value to be erased");
    VAR_2.end = FUNC_1(2);

    VAR_1.namespace = FUNC_3(((void*)0), ((void*)0), "<namespace>", "namespace to be erased");
    VAR_1.end = FUNC_1(2);

    VAR_9.namespace = FUNC_3(((void*)0), ((void*)0), "<namespace>", "namespace of the partition to be selected");
    VAR_9.end = FUNC_1(2);

    VAR_7.partition = FUNC_3(((void*)0), ((void*)0), "<partition>", "partition name");
    VAR_7.namespace = FUNC_2("n", "namespace", "<namespace>", "namespace name");
    VAR_7.type = FUNC_2("t", "type", "<type>", VAR_0);
    VAR_7.end = FUNC_1(2);

    const esp_console_cmd_t VAR_13 = {
        .command = "nvs_set",
        .help = "Set key-value pair in selected namespace.\n"
        "Examples:\n"
        " nvs_set VarName i32 -v 123 \n"
        " nvs_set VarName srt -v YourString \n"
        " nvs_set VarName blob -v 0123456789abcdef \n",
        .hint = ((void*)0),
        .func = &VAR_12,
        .argtable = &VAR_10
    };

    const esp_console_cmd_t VAR_14 = {
        .command = "nvs_get",
        .help = "Get key-value pair from selected namespace. \n"
        "Example: nvs_get VarName i32",
        .hint = ((void*)0),
        .func = &VAR_6,
        .argtable = &VAR_5
    };

    const esp_console_cmd_t VAR_15 = {
        .command = "nvs_erase",
        .help = "Erase key-value pair from current namespace",
        .hint = ((void*)0),
        .func = &VAR_4,
        .argtable = &VAR_2
    };

    const esp_console_cmd_t VAR_16 = {
        .command = "nvs_erase_namespace",
        .help = "Erases specified namespace",
        .hint = ((void*)0),
        .func = &VAR_3,
        .argtable = &VAR_1
    };

    const esp_console_cmd_t VAR_17 = {
        .command = "nvs_namespace",
        .help = "Set current namespace",
        .hint = ((void*)0),
        .func = &VAR_11,
        .argtable = &VAR_9
    };

    const esp_console_cmd_t VAR_18 = {
        .command = "nvs_list",
        .help = "List stored key-value pairs stored in NVS."
        "Namespace and type can be specified to print only those key-value pairs.\n"
        "Following command list variables stored inside 'nvs' partition, under namespace 'storage' with type uint32_t"
        "Example: nvs_list nvs -n storage -t u32 \n",
        .hint = ((void*)0),
        .func = &VAR_8,
        .argtable = &VAR_7
    };

    FUNC_0(FUNC_4(&VAR_13));
    FUNC_0(FUNC_4(&VAR_14));
    FUNC_0(FUNC_4(&VAR_15));
    FUNC_0(FUNC_4(&VAR_17));
    FUNC_0(FUNC_4(&VAR_18));
    FUNC_0(FUNC_4(&VAR_16));
}
