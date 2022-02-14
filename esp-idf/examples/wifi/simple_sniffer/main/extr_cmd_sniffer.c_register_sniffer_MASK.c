
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* command; char* help; TYPE_2__* argtable; int * func; int * hint; } ;
typedef TYPE_1__ esp_console_cmd_t ;
struct TYPE_5__ {int end; int stop; int channel; int filter; void* interface; void* file; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,char*,char*,char*) ;
 int FUNC_3 (int *,char*,char*) ;
 void* FUNC_4 (char*,char*,char*,char*) ;
 int FUNC_5 (char*,char*,char*,int ,int,char*) ;
 int FUNC_6 () ;
 int VAR_0 ;
 int FUNC_7 (TYPE_1__ const*) ;
 TYPE_2__ VAR_1 ;

void FUNC_8(void)
{
    VAR_1.file = FUNC_4("f", "file", "<file>",
                                 "name of the file storing the packets in pcap format");
    VAR_1.interface = FUNC_4("i", "interface", "<wlan>",
                                      "which interface to capture packet");
    VAR_1.filter = FUNC_5("F", "filter", "<mgmt|data|ctrl|misc|mpdu|ampdu>", 0, 6, "filter parameters");
    VAR_1.channel = FUNC_2("c", "channel", "<channel>", "communication channel to use");
    VAR_1.stop = FUNC_3(((void*)0), "stop", "stop running sniffer");
    VAR_1.end = FUNC_1(1);
    const esp_console_cmd_t VAR_2 = {
        .command = "sniffer",
        .help = "Capture specific packet and store in pcap format",
        .hint = ((void*)0),
        .func = &VAR_0,
        .argtable = &VAR_1
    };
    FUNC_0(FUNC_7(&VAR_2));

    FUNC_6();
}
