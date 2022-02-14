
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* command; char* help; TYPE_2__* argtable; int * func; int * hint; } ;
typedef TYPE_1__ esp_console_cmd_t ;
struct TYPE_5__ {int end; int host; void* tos; void* count; void* data_size; void* interval; void* timeout; } ;


 int FUNC_0 (int ) ;
 void* FUNC_1 (char*,char*,char*,char*) ;
 int FUNC_2 (int) ;
 void* FUNC_3 (char*,char*,char*,char*) ;
 int FUNC_4 (int *,int *,char*,char*) ;
 int VAR_0 ;
 int FUNC_5 (TYPE_1__ const*) ;
 TYPE_2__ VAR_1 ;

void FUNC_6(void)
{
    VAR_1.timeout = FUNC_1("W", "timeout", "<t>", "Time to wait for a response, in seconds");
    VAR_1.interval = FUNC_1("i", "interval", "<t>", "Wait interval seconds between sending each packet");
    VAR_1.data_size = FUNC_3("s", "size", "<n>", "Specify the number of data bytes to be sent");
    VAR_1.count = FUNC_3("c", "count", "<n>", "Stop after sending count packets");
    VAR_1.tos = FUNC_3("Q", "tos", "<n>", "Set Type of Service related bits in IP datagrams");
    VAR_1.host = FUNC_4(((void*)0), ((void*)0), "<host>", "Host address");
    VAR_1.end = FUNC_2(1);
    const esp_console_cmd_t VAR_2 = {
        .command = "ping",
        .help = "send ICMP ECHO_REQUEST to network hosts",
        .hint = ((void*)0),
        .func = &VAR_0,
        .argtable = &VAR_1
    };
    FUNC_0(FUNC_5(&VAR_2));
}
