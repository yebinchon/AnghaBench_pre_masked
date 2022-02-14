
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* command; char* help; TYPE_2__* argtable; int * func; int * hint; } ;
typedef TYPE_1__ esp_console_cmd_t ;
struct TYPE_5__ {int end; int txt; int instance; int port; void* proto; void* service; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int *,char*,char*) ;
 int FUNC_3 (char*,char*,char*,char*) ;
 void* FUNC_4 (int *,int *,char*,char*) ;
 int FUNC_5 (int *,int *,char*,int ,int,char*) ;
 int VAR_0 ;
 int FUNC_6 (TYPE_1__ const*) ;
 TYPE_2__ VAR_1 ;

__attribute__((used)) static void FUNC_7(void)
{
    VAR_1.service = FUNC_4(((void*)0), ((void*)0), "<service>", "MDNS Service");
    VAR_1.proto = FUNC_4(((void*)0), ((void*)0), "<proto>", "IP Protocol");
    VAR_1.port = FUNC_2(((void*)0), ((void*)0), "<port>", "Service Port");
    VAR_1.instance = FUNC_3("i", "instance", "<instance>", "Instance name");
    VAR_1.txt = FUNC_5(((void*)0), ((void*)0), "item", 0, 30, "TXT Items (name=value)");
    VAR_1.end = FUNC_1(2);

    const esp_console_cmd_t VAR_2 = {
        .command = "mdns_service_add",
        .help = "Add service to MDNS",
        .hint = ((void*)0),
        .func = &VAR_0,
        .argtable = &VAR_1
    };

    FUNC_0( FUNC_6(&VAR_2) );
}
