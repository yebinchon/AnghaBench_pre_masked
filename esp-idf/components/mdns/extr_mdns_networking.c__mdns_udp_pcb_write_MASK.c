
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct pbuf {scalar_t__ payload; } ;
typedef int mdns_ip_protocol_t ;
typedef int mdns_if_t ;
struct TYPE_2__ {scalar_t__ err; int call; int port; int * ip; struct pbuf* pbt; int ip_protocol; int tcpip_if; } ;
typedef TYPE_1__ mdns_api_call_t ;
typedef int ip_addr_t ;
typedef int esp_ip_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int *,size_t) ;
 struct pbuf* FUNC_1 (int ,size_t,int ) ;
 int FUNC_2 (int ,int *) ;

size_t FUNC_3(mdns_if_t VAR_3, mdns_ip_protocol_t VAR_4, const esp_ip_addr_t *VAR_5, uint16_t VAR_6, uint8_t * VAR_7, size_t VAR_8)
{
    struct pbuf* VAR_9 = FUNC_1(VAR_1, VAR_8, VAR_0);
    if (VAR_9 == ((void*)0)) {
        return 0;
    }
    FUNC_0((uint8_t *)VAR_9->payload, VAR_7, VAR_8);

    mdns_api_call_t VAR_10 = {
        .tcpip_if = VAR_3,
        .ip_protocol = VAR_4,
        .pbt = VAR_9,
        .ip = (ip_addr_t *)VAR_5,
        .port = VAR_6
    };
    FUNC_2(VAR_2, &VAR_10.call);

    if (VAR_10.err) {
        return 0;
    }
    return VAR_8;
}
