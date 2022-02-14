
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int is_running; int interf; int pcap; int * work_queue; int * sem_task_over; } ;
typedef TYPE_1__ sniffer_runtime_t ;
struct TYPE_6__ {int payload; } ;
typedef TYPE_2__ sniffer_packet_info_t ;
typedef scalar_t__ esp_err_t ;
typedef int UBaseType_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int,char*,int ) ;

 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int VAR_5 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,TYPE_2__*,int ) ;
 int FUNC_10 (int *,int ) ;

__attribute__((used)) static esp_err_t FUNC_11(sniffer_runtime_t *VAR_6)
{
    FUNC_1(VAR_6->is_running, "sniffer is already stopped", VAR_4);

    switch (VAR_6->interf) {
    case 128:

        FUNC_1(FUNC_2(0) == VAR_1, "stop wifi promiscuous failed", VAR_4);
        break;
    default:
        FUNC_1(0, "unsupported interface", VAR_4);
        break;
    }
    FUNC_0(VAR_3, "stop WiFi promiscuous ok");


    VAR_6->is_running = 0;

    FUNC_10(VAR_6->sem_task_over, VAR_5);
    FUNC_8(VAR_6->sem_task_over);
    VAR_6->sem_task_over = ((void*)0);

    UBaseType_t VAR_7 = FUNC_6(VAR_6->work_queue);
    sniffer_packet_info_t VAR_8;
    while (VAR_7--) {
        FUNC_9(VAR_6->work_queue, &VAR_8, FUNC_5(VAR_2));
        FUNC_3(VAR_8.payload);
    }
    FUNC_7(VAR_6->work_queue);
    VAR_6->work_queue = ((void*)0);

    FUNC_1(FUNC_4(VAR_6->pcap) == VAR_1, "stop pcap session failed", VAR_4);
    return VAR_1;
err:
    return VAR_0;
}
