
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int dst; int port; scalar_t__ ip_protocol; int tcpip_if; } ;
typedef TYPE_1__ mdns_tx_packet_t ;
typedef scalar_t__ mdns_ip_protocol_t ;
typedef int mdns_if_t ;
typedef int esp_ip_addr_t ;


 int VAR_0 ;
 int FUNC_0 (int,int ,int ,int) ;
 int FUNC_1 (int *,int,int ,int ,int) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (int *,int ,int) ;

__attribute__((used)) static mdns_tx_packet_t * FUNC_5(mdns_if_t VAR_3, mdns_ip_protocol_t VAR_4)
{
    mdns_tx_packet_t * VAR_5 = (mdns_tx_packet_t*)FUNC_2(sizeof(mdns_tx_packet_t));
    if (!VAR_5) {
        VAR_0;
        return ((void*)0);
    }
    FUNC_4((uint8_t*)VAR_5, 0, sizeof(mdns_tx_packet_t));
    VAR_5->tcpip_if = VAR_3;
    VAR_5->ip_protocol = VAR_4;
    VAR_5->port = VAR_2;
    if (VAR_4 == VAR_1) {
        FUNC_1(&VAR_5->dst, 224, 0, 0, 251);
    } else {
        esp_ip_addr_t VAR_6 = FUNC_0(0x000002ff, 0, 0, 0xfb000000);
        FUNC_3(&VAR_5->dst, &VAR_6, sizeof(esp_ip_addr_t));
    }
    return VAR_5;
}
