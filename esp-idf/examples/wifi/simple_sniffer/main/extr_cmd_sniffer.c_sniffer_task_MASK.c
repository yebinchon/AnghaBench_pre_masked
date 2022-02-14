
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int sem_task_over; int pcap; int work_queue; scalar_t__ is_running; } ;
typedef TYPE_1__ sniffer_runtime_t ;
struct TYPE_5__ {int payload; int microseconds; int seconds; int length; } ;
typedef TYPE_2__ sniffer_packet_info_t ;


 int FUNC_0 (int ,char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int ,int ,int ,int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int ,TYPE_2__*,int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(void *VAR_4)
{
    sniffer_packet_info_t VAR_5;
    sniffer_runtime_t *VAR_6 = (sniffer_runtime_t *)VAR_4;

    while (VAR_6->is_running) {

        if (FUNC_5(VAR_6->work_queue, &VAR_5, FUNC_3(VAR_1)) != VAR_3) {
            continue;
        }
        if (FUNC_2(VAR_6->pcap, VAR_5.payload, VAR_5.length,
                                VAR_5.seconds, VAR_5.microseconds) != VAR_0) {
            FUNC_0(VAR_2, "save captured packet failed");
        }
        FUNC_1(VAR_5.payload);
    }

    FUNC_6(VAR_6->sem_task_over);
    FUNC_4(((void*)0));
}
