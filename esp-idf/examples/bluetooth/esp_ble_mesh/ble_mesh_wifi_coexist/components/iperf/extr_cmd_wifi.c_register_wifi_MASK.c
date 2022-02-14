
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {char* command; char* help; int * func; int * hint; TYPE_2__* argtable; } ;
typedef TYPE_1__ esp_console_cmd_t ;
struct TYPE_8__ {void* end; void* abort; void* time; void* interval; void* port; void* udp; void* server; void* ip; void* password; void* ssid; } ;


 int FUNC_0 (int ) ;
 TYPE_2__ VAR_0 ;
 void* FUNC_1 (int) ;
 void* FUNC_2 (char*,char*,char*,char*) ;
 void* FUNC_3 (char*,char*,char*) ;
 void* FUNC_4 (char*,char*,char*,char*) ;
 void* FUNC_5 (int *,int *,char*,char*) ;
 int FUNC_6 (TYPE_1__ const*) ;
 int VAR_1 ;
 TYPE_2__ VAR_2 ;
 int VAR_3 ;
 TYPE_2__ VAR_4 ;
 TYPE_2__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

void FUNC_7(void)
{
    VAR_5.ssid = FUNC_5(((void*)0), ((void*)0), "<ssid>", "SSID of AP");
    VAR_5.password = FUNC_4(((void*)0), ((void*)0), "<pass>", "password of AP");
    VAR_5.end = FUNC_1(2);

    const esp_console_cmd_t VAR_11 = {
        .command = "sta",
        .help = "WiFi is station mode, join specified soft-AP",
        .hint = ((void*)0),
        .func = &VAR_10,
        .argtable = &VAR_5
    };

    FUNC_0( FUNC_6(&VAR_11) );

    VAR_4.ssid = FUNC_4(((void*)0), ((void*)0), "<ssid>", "SSID of AP want to be scanned");
    VAR_4.end = FUNC_1(1);

    const esp_console_cmd_t VAR_12 = {
        .command = "scan",
        .help = "WiFi is station mode, start scan ap",
        .hint = ((void*)0),
        .func = &VAR_9,
        .argtable = &VAR_4
    };

    VAR_0.ssid = FUNC_5(((void*)0), ((void*)0), "<ssid>", "SSID of AP");
    VAR_0.password = FUNC_4(((void*)0), ((void*)0), "<pass>", "password of AP");
    VAR_0.end = FUNC_1(2);


    FUNC_0( FUNC_6(&VAR_12) );

    const esp_console_cmd_t VAR_13 = {
        .command = "ap",
        .help = "AP mode, configure ssid and password",
        .hint = ((void*)0),
        .func = &VAR_6,
        .argtable = &VAR_0
    };

    FUNC_0( FUNC_6(&VAR_13) );

    const esp_console_cmd_t VAR_14 = {
        .command = "query",
        .help = "query WiFi info",
        .hint = ((void*)0),
        .func = &VAR_8,
    };
    FUNC_0( FUNC_6(&VAR_14) );

    const esp_console_cmd_t VAR_15 = {
        .command = "restart",
        .help = "Restart the program",
        .hint = ((void*)0),
        .func = &VAR_3,
    };
    FUNC_0( FUNC_6(&VAR_15) );

    VAR_2.ip = FUNC_4("c", "client", "<ip>", "run in client mode, connecting to <host>");
    VAR_2.server = FUNC_3("s", "server", "run in server mode");
    VAR_2.udp = FUNC_3("u", "udp", "use UDP rather than TCP");
    VAR_2.port = FUNC_2("p", "port", "<port>", "server port to listen on/connect to");
    VAR_2.interval = FUNC_2("i", "interval", "<interval>", "seconds between periodic bandwidth reports");
    VAR_2.time = FUNC_2("t", "time", "<time>", "time in seconds to transmit for (default 10 secs)");
    VAR_2.abort = FUNC_3("a", "abort", "abort running iperf");
    VAR_2.end = FUNC_1(1);
    const esp_console_cmd_t VAR_16 = {
        .command = "iperf",
        .help = "iperf command",
        .hint = ((void*)0),
        .func = &VAR_7,
        .argtable = &VAR_2
    };

    FUNC_0( FUNC_6(&VAR_16) );

    const esp_console_cmd_t VAR_17 = {
        .command = "heap",
        .help = "get min free heap size during test",
        .hint = ((void*)0),
        .func = &VAR_1,
    };
    FUNC_0( FUNC_6(&VAR_17) );
}
