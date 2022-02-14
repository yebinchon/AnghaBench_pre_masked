
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int answers; int flags; } ;
typedef TYPE_1__ mdns_tx_packet_t ;
struct TYPE_8__ {int * service; } ;
typedef TYPE_2__ mdns_srv_item_t ;
typedef int mdns_ip_protocol_t ;
typedef int mdns_if_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ,int *,int,int) ;
 TYPE_1__* FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_4(mdns_if_t VAR_4, mdns_ip_protocol_t VAR_5, mdns_srv_item_t ** VAR_6, size_t VAR_7, bool VAR_8)
{
    mdns_tx_packet_t * VAR_9 = FUNC_1(VAR_4, VAR_5);
    if (!VAR_9) {
        return;
    }
    VAR_9->flags = VAR_0;
    size_t VAR_10;
    for (VAR_10=0; VAR_10<VAR_7; VAR_10++) {
        if (!FUNC_0(&VAR_9->answers, VAR_3, VAR_6[VAR_10]->service, 1, 1)) {
            FUNC_3(VAR_9);
            return;
        }
    }
    if (VAR_8 && (!FUNC_0(&VAR_9->answers, VAR_1, ((void*)0), 1, 1) || !FUNC_0(&VAR_9->answers, VAR_2, ((void*)0), 1, 1))) {
        FUNC_3(VAR_9);
        return;
    }
    FUNC_2(VAR_9);
    FUNC_3(VAR_9);
}
