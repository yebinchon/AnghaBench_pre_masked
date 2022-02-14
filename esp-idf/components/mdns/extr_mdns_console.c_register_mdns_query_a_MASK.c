
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* command; char* help; TYPE_2__* argtable; int * func; int * hint; } ;
typedef TYPE_1__ esp_console_cmd_t ;
struct TYPE_5__ {int end; int timeout; int hostname; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,char*,char*,char*) ;
 int FUNC_3 (int *,int *,char*,char*) ;
 int VAR_0 ;
 int FUNC_4 (TYPE_1__ const*) ;
 TYPE_2__ VAR_1 ;

__attribute__((used)) static void FUNC_5(void)
{
    VAR_1.hostname = FUNC_3(((void*)0), ((void*)0), "<hostname>", "Hostname that is searched for");
    VAR_1.timeout = FUNC_2("t", "timeout", "<timeout>", "Timeout for this query");
    VAR_1.end = FUNC_1(2);

    const esp_console_cmd_t VAR_2 = {
        .command = "mdns_query_a",
        .help = "Query MDNS for IPv4",
        .hint = ((void*)0),
        .func = &VAR_0,
        .argtable = &VAR_1
    };

    FUNC_0( FUNC_4(&VAR_2) );
}
