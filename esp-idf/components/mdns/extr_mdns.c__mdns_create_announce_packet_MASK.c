
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t uint8_t ;
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
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,int ,int *,int,int) ;
 TYPE_1__* FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static mdns_tx_packet_t * FUNC_3(mdns_if_t VAR_7, mdns_ip_protocol_t VAR_8, mdns_srv_item_t * VAR_9[], size_t VAR_10, bool VAR_11)
{
    mdns_tx_packet_t * VAR_12 = FUNC_1(VAR_7, VAR_8);
    if (!VAR_12) {
        return ((void*)0);
    }
    VAR_12->flags = VAR_0;

    uint8_t VAR_13;
    for (VAR_13=0; VAR_13<VAR_10; VAR_13++) {
        if (!FUNC_0(&VAR_12->answers, VAR_4, VAR_9[VAR_13]->service, 0, 0)
                || !FUNC_0(&VAR_12->answers, VAR_3, VAR_9[VAR_13]->service, 0, 0)
                || !FUNC_0(&VAR_12->answers, VAR_5, VAR_9[VAR_13]->service, 1, 0)
                || !FUNC_0(&VAR_12->answers, VAR_6, VAR_9[VAR_13]->service, 1, 0)) {
            FUNC_2(VAR_12);
            return ((void*)0);
        }
    }
    if (VAR_11) {
        if (!FUNC_0(&VAR_12->answers, VAR_1, ((void*)0), 1, 0)
                || !FUNC_0(&VAR_12->answers, VAR_2, ((void*)0), 1, 0)) {
            FUNC_2(VAR_12);
            return ((void*)0);
        }
    }
    return VAR_12;
}
