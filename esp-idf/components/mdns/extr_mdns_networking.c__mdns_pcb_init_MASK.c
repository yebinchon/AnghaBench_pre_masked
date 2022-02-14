
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int mdns_ip_protocol_t ;
typedef int mdns_if_t ;
struct TYPE_2__ {int err; int call; int ip_protocol; int tcpip_if; } ;
typedef TYPE_1__ mdns_api_call_t ;
typedef int esp_err_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;

esp_err_t FUNC_1(mdns_if_t VAR_1, mdns_ip_protocol_t VAR_2)
{
    mdns_api_call_t VAR_3 = {
        .tcpip_if = VAR_1,
        .ip_protocol = VAR_2
    };
    FUNC_0(VAR_0, &VAR_3.call);
    return VAR_3.err;
}
