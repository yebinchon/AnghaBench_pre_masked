
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_40__ TYPE_9__ ;
typedef struct TYPE_39__ TYPE_8__ ;
typedef struct TYPE_38__ TYPE_7__ ;
typedef struct TYPE_37__ TYPE_6__ ;
typedef struct TYPE_36__ TYPE_5__ ;
typedef struct TYPE_35__ TYPE_4__ ;
typedef struct TYPE_34__ TYPE_3__ ;
typedef struct TYPE_33__ TYPE_2__ ;
typedef struct TYPE_32__ TYPE_20__ ;
typedef struct TYPE_31__ TYPE_1__ ;
typedef struct TYPE_30__ TYPE_18__ ;
typedef struct TYPE_29__ TYPE_17__ ;
typedef struct TYPE_28__ TYPE_16__ ;
typedef struct TYPE_27__ TYPE_15__ ;
typedef struct TYPE_26__ TYPE_14__ ;
typedef struct TYPE_25__ TYPE_13__ ;
typedef struct TYPE_24__ TYPE_12__ ;
typedef struct TYPE_23__ TYPE_11__ ;
typedef struct TYPE_22__ TYPE_10__ ;


typedef size_t uint8_t ;
typedef int uint16_t ;
struct udp_pcb {int dummy; } ;
struct pbuf {scalar_t__ payload; struct pbuf* next; } ;
struct TYPE_25__ {int addr; } ;
struct TYPE_26__ {TYPE_13__ ip4; } ;
struct TYPE_27__ {TYPE_14__ u_addr; } ;
struct TYPE_22__ {int addr; } ;
struct TYPE_23__ {TYPE_10__ ip4; } ;
struct TYPE_24__ {TYPE_11__ u_addr; } ;
struct netif {TYPE_15__ netmask; TYPE_12__ ip_addr; } ;
struct TYPE_33__ {int addr; } ;
struct ip_hdr {TYPE_2__ dest; } ;
struct TYPE_36__ {scalar_t__ addr; } ;
struct ip6_hdr {TYPE_5__ dest; } ;
struct TYPE_39__ {int addr; } ;
struct TYPE_40__ {TYPE_8__ ip4; } ;
struct TYPE_29__ {scalar_t__ type; TYPE_9__ u_addr; } ;
struct TYPE_34__ {TYPE_17__ addr; } ;
struct TYPE_31__ {int addr; } ;
struct TYPE_35__ {TYPE_3__ ip6; TYPE_1__ ip4; } ;
struct TYPE_30__ {scalar_t__ type; TYPE_4__ u_addr; } ;
struct TYPE_28__ {size_t tcpip_if; size_t ip_protocol; TYPE_17__ src; TYPE_18__ dest; int multicast; struct pbuf* pb; int src_port; } ;
typedef TYPE_16__ mdns_rx_packet_t ;
typedef size_t ip_addr_t ;
struct TYPE_38__ {TYPE_6__* pcbs; } ;
struct TYPE_37__ {struct udp_pcb* pcb; } ;
struct TYPE_32__ {int action_queue; TYPE_7__* interfaces; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t* VAR_8 ;
 int FUNC_0 (size_t) ;
 scalar_t__ FUNC_1 (TYPE_16__*) ;
 TYPE_20__* VAR_9 ;
 struct netif* FUNC_2 (int ) ;
 int FUNC_3 (TYPE_16__*) ;
 int FUNC_4 (TYPE_18__*) ;
 struct netif* FUNC_5 () ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (TYPE_17__*,size_t const*,int) ;
 int FUNC_8 (struct pbuf*) ;

__attribute__((used)) static void FUNC_9(void *VAR_10, struct udp_pcb *VAR_11, struct pbuf *VAR_12, const ip_addr_t *VAR_13, uint16_t VAR_14)
{

    uint8_t VAR_15;
    while (VAR_12 != ((void*)0)) {
        struct pbuf * VAR_16 = VAR_12;
        VAR_12 = VAR_12->next;
        VAR_16->next = ((void*)0);

        mdns_rx_packet_t * VAR_17 = (mdns_rx_packet_t *)FUNC_6(sizeof(mdns_rx_packet_t));
        if (!VAR_17) {
            VAR_1;

            FUNC_8(VAR_16);
            continue;
        }

        VAR_17->tcpip_if = VAR_5;
        VAR_17->pb = VAR_16;
        VAR_17->src_port = VAR_14;
        FUNC_7(&VAR_17->src, VAR_13, sizeof(ip_addr_t));
        VAR_17->dest.type = VAR_17->src.type;

        if (VAR_17->src.type == VAR_3) {
            VAR_17->ip_protocol = VAR_6;
            struct ip_hdr * VAR_18 = (struct ip_hdr *)(((uint8_t *)(VAR_17->pb->payload)) - VAR_8 - VAR_4);
            VAR_17->dest.u_addr.ip4.addr = VAR_18->dest.addr;
        } else {
            VAR_17->ip_protocol = VAR_7;
            struct ip6_hdr * VAR_19 = (struct ip6_hdr *)(((uint8_t *)(VAR_17->pb->payload)) - VAR_8 - VAR_2);
            FUNC_7(&VAR_17->dest.u_addr.ip6.addr, (uint8_t *)VAR_19->dest.addr, 16);
        }
        VAR_17->multicast = FUNC_4(&(VAR_17->dest));


        struct netif * VAR_20 = ((void*)0);
        struct udp_pcb * VAR_21 = ((void*)0);
        for (VAR_15=0; VAR_15<VAR_5; VAR_15++) {
            VAR_21 = VAR_9->interfaces[VAR_15].pcbs[VAR_17->ip_protocol].pcb;
            VAR_20 = FUNC_2(FUNC_0(VAR_15));
            if (VAR_21 && VAR_20 && VAR_20 == FUNC_5 ()) {
                if (VAR_17->src.type == VAR_3) {
                    if ((VAR_17->src.u_addr.ip4.addr & VAR_20->netmask.u_addr.ip4.addr) != (VAR_20->ip_addr.u_addr.ip4.addr & VAR_20->netmask.u_addr.ip4.addr)) {

                        VAR_21 = ((void*)0);
                        break;
                    }
                }
                VAR_17->tcpip_if = VAR_15;
                break;
            }
            VAR_21 = ((void*)0);
        }

        if (!VAR_21 || !VAR_9 || !VAR_9->action_queue
          || FUNC_1(VAR_17) != VAR_0) {
            FUNC_8(VAR_16);
            FUNC_3(VAR_17);
        }
    }

}
