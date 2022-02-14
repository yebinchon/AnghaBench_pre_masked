
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcpip_api_call_data {int dummy; } ;
struct TYPE_2__ {int err; int ip_protocol; int tcpip_if; } ;
typedef TYPE_1__ mdns_api_call_t ;
typedef int err_t ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static err_t FUNC_1(struct tcpip_api_call_data *VAR_0)
{
    mdns_api_call_t * VAR_1 = (mdns_api_call_t *)VAR_0;
    VAR_1->err = FUNC_0(VAR_1->tcpip_if, VAR_1->ip_protocol);
    return VAR_1->err;
}
