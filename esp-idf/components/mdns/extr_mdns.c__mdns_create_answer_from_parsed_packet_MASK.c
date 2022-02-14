
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_11__ {scalar_t__ port; int dst; int answers; int additional; int distributed; int flags; } ;
typedef TYPE_1__ mdns_tx_packet_t ;
struct TYPE_12__ {int * service; } ;
typedef TYPE_2__ mdns_srv_item_t ;
struct TYPE_13__ {scalar_t__ type; struct TYPE_13__* next; scalar_t__ unicast; scalar_t__ proto; scalar_t__ service; } ;
typedef TYPE_3__ mdns_parsed_question_t ;
struct TYPE_14__ {scalar_t__ src_port; int src; int probe; TYPE_3__* questions; int distributed; int ip_protocol; int tcpip_if; } ;
typedef TYPE_4__ mdns_parsed_packet_t ;
typedef int esp_ip_addr_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (int *,scalar_t__,int *,int,int) ;
 TYPE_1__* FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 TYPE_2__* FUNC_4 (scalar_t__,scalar_t__) ;
 int FUNC_5 (TYPE_1__*,int) ;
 int FUNC_6 (int *,int *,int) ;

__attribute__((used)) static void FUNC_7(mdns_parsed_packet_t * VAR_9)
{
    if (!VAR_9->questions) {
        return;
    }
    bool VAR_10 = VAR_9->src_port == VAR_1;
    bool VAR_11 = 0;
    bool VAR_12 = 0;
    mdns_tx_packet_t * VAR_13 = FUNC_1(VAR_9->tcpip_if, VAR_9->ip_protocol);
    if (!VAR_13) {
        return;
    }
    VAR_13->flags = VAR_0;
    VAR_13->distributed = VAR_9->distributed;

    mdns_parsed_question_t * VAR_14 = VAR_9->questions;
    while (VAR_14) {
        mdns_srv_item_t * VAR_15 = ((void*)0);
        if (VAR_14->service && VAR_14->proto) {
            VAR_15 = FUNC_4(VAR_14->service, VAR_14->proto);
            if (!VAR_15) {
                continue;
            }
        }
        if (VAR_14->unicast) {
            VAR_11 = 1;
        }
        if (VAR_15) {
            if (VAR_14->type == VAR_5 || VAR_14->type == VAR_4) {
                if (VAR_14->type == VAR_5 || !VAR_9->probe) {
                    VAR_12 = 1;
                }
                if (!FUNC_0(&VAR_13->answers, VAR_5, VAR_15->service, 0, 0)
                        || !FUNC_0(&VAR_13->answers, VAR_7, VAR_15->service, VAR_10, 0)
                        || !FUNC_0(&VAR_13->answers, VAR_8, VAR_15->service, VAR_10, 0)
                        || !FUNC_0(VAR_12?&VAR_13->additional:&VAR_13->answers, VAR_2, ((void*)0), VAR_10, 0)
                        || !FUNC_0(VAR_12?&VAR_13->additional:&VAR_13->answers, VAR_3, ((void*)0), VAR_10, 0)) {
                    FUNC_3(VAR_13);
                    return;
                }
            } else if (VAR_14->type == VAR_7) {
                if (!FUNC_0(&VAR_13->answers, VAR_7, VAR_15->service, VAR_10, 0)
                        || !FUNC_0(&VAR_13->additional, VAR_2, ((void*)0), VAR_10, 0)
                        || !FUNC_0(&VAR_13->additional, VAR_3, ((void*)0), VAR_10, 0)) {
                    FUNC_3(VAR_13);
                    return;
                }
            } else if (VAR_14->type == VAR_8) {
                if (!FUNC_0(&VAR_13->answers, VAR_8, VAR_15->service, VAR_10, 0)) {
                    FUNC_3(VAR_13);
                    return;
                }
            } else if (VAR_14->type == VAR_6) {
                VAR_12 = 1;
                if (!FUNC_0(&VAR_13->answers, VAR_5, VAR_15->service, 0, 0)) {
                    FUNC_3(VAR_13);
                    return;
                }
            }
        } else {
            if (VAR_14->type == VAR_4 || VAR_14->type == VAR_2 || VAR_14->type == VAR_3) {
                if (!FUNC_0(&VAR_13->answers, VAR_2, ((void*)0), VAR_10, 0)
                        || !FUNC_0(&VAR_13->answers, VAR_3, ((void*)0), VAR_10, 0)) {
                    FUNC_3(VAR_13);
                    return;
                }
            } else if (!FUNC_0(&VAR_13->answers, VAR_14->type, ((void*)0), VAR_10, 0)) {
                FUNC_3(VAR_13);
                return;
            }
        }
        VAR_14 = VAR_14->next;
    }
    if (VAR_11 || !VAR_10) {
        FUNC_6(&VAR_13->dst, &VAR_9->src, sizeof(esp_ip_addr_t));
        VAR_13->port = VAR_9->src_port;
    }

    static uint8_t VAR_16 = 0;
    if (VAR_12) {
        FUNC_5(VAR_13, 25 + (VAR_16 * 25));
        VAR_16 = (VAR_16 + 1) & 0x03;
    } else {
        FUNC_2(VAR_13);
        FUNC_3(VAR_13);
    }
}
