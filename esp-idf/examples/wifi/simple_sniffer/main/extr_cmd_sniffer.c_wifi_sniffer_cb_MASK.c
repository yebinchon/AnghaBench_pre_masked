
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ wifi_promiscuous_pkt_type_t ;
struct TYPE_6__ {unsigned int timestamp; int rx_state; int sig_len; } ;
struct TYPE_7__ {int payload; TYPE_1__ rx_ctrl; } ;
typedef TYPE_2__ wifi_promiscuous_pkt_t ;
struct TYPE_8__ {unsigned int seconds; unsigned int microseconds; void* payload; int length; } ;
typedef TYPE_3__ sniffer_packet_info_t ;
struct TYPE_9__ {scalar_t__ work_queue; } ;


 int FUNC_0 (int ,char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (void*,int ,int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_4 ;
 TYPE_5__ VAR_5 ;
 scalar_t__ FUNC_4 (scalar_t__,TYPE_3__*,int ) ;

__attribute__((used)) static void FUNC_5(void *VAR_6, wifi_promiscuous_pkt_type_t VAR_7)
{
    sniffer_packet_info_t VAR_8;
    wifi_promiscuous_pkt_t *VAR_9 = (wifi_promiscuous_pkt_t *)VAR_6;

    VAR_8.seconds = VAR_9->rx_ctrl.timestamp / 1000000U;
    VAR_8.microseconds = VAR_9->rx_ctrl.timestamp % 1000000U;
    VAR_8.length = VAR_9->rx_ctrl.sig_len;

    if (VAR_7 != VAR_3 && !VAR_9->rx_ctrl.rx_state) {
        VAR_8.length -= VAR_0;
        void *VAR_10 = FUNC_1(VAR_8.length);
        if (VAR_10) {
            FUNC_2(VAR_10, VAR_9->payload, VAR_8.length);
            VAR_8.payload = VAR_10;
            if (VAR_5.work_queue) {

                if (FUNC_4(VAR_5.work_queue, &VAR_8, FUNC_3(VAR_1)) != VAR_4) {
                    FUNC_0(VAR_2, "sniffer work queue full");
                }
            }
        } else {
            FUNC_0(VAR_2, "No enough memory for promiscuous packet");
        }
    }
}
