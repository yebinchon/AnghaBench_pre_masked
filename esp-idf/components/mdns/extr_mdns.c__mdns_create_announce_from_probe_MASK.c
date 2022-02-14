
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int answers; TYPE_2__* servers; int flags; int ip_protocol; int tcpip_if; } ;
typedef TYPE_1__ mdns_tx_packet_t ;
struct TYPE_8__ {scalar_t__ type; struct TYPE_8__* next; int * service; } ;
typedef TYPE_2__ mdns_out_answer_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int *,scalar_t__,int *,int,int) ;
 TYPE_1__* FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static mdns_tx_packet_t * FUNC_3(mdns_tx_packet_t * VAR_7)
{

    mdns_tx_packet_t * VAR_8 = FUNC_1(VAR_7->tcpip_if, VAR_7->ip_protocol);
    if (!VAR_8) {
        return ((void*)0);
    }
    VAR_8->flags = VAR_0;

    mdns_out_answer_t * VAR_9 = VAR_7->servers;
    while (VAR_9) {
        if (VAR_9->type == VAR_5) {
            if (!FUNC_0(&VAR_8->answers, VAR_4, VAR_9->service, 0, 0)
                    || !FUNC_0(&VAR_8->answers, VAR_3, VAR_9->service, 0, 0)
                    || !FUNC_0(&VAR_8->answers, VAR_5, VAR_9->service, 1, 0)
                    || !FUNC_0(&VAR_8->answers, VAR_6, VAR_9->service, 1, 0)) {
                FUNC_2(VAR_8);
                return ((void*)0);
            }

        } else if (VAR_9->type == VAR_1 || VAR_9->type == VAR_2) {
            if (!FUNC_0(&VAR_8->answers, VAR_9->type, ((void*)0), 1, 0)) {
                FUNC_2(VAR_8);
                return ((void*)0);
            }
        }

        VAR_9 = VAR_9->next;
    }
    return VAR_8;
}
