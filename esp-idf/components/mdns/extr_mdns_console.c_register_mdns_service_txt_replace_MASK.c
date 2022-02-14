
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* command; char* help; TYPE_2__* argtable; int * func; int * hint; } ;
typedef TYPE_1__ esp_console_cmd_t ;
struct TYPE_5__ {int end; int txt; void* proto; void* service; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 void* FUNC_2 (int *,int *,char*,char*) ;
 int FUNC_3 (int *,int *,char*,int ,int,char*) ;
 int VAR_0 ;
 int FUNC_4 (TYPE_1__ const*) ;
 TYPE_2__ VAR_1 ;

__attribute__((used)) static void FUNC_5(void)
{
    VAR_1.service = FUNC_2(((void*)0), ((void*)0), "<service>", "MDNS Service");
    VAR_1.proto = FUNC_2(((void*)0), ((void*)0), "<proto>", "IP Protocol");
    VAR_1.txt = FUNC_3(((void*)0), ((void*)0), "item", 0, 30, "TXT Items (name=value)");
    VAR_1.end = FUNC_1(2);

    const esp_console_cmd_t VAR_2 = {
        .command = "mdns_service_txt_replace",
        .help = "Replace MDNS service TXT items",
        .hint = ((void*)0),
        .func = &VAR_0,
        .argtable = &VAR_1
    };

    FUNC_0( FUNC_4(&VAR_2) );
}
