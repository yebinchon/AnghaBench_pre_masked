
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct tcpip_api_call_data {int dummy; } ;
struct netif {int dummy; } ;
struct TYPE_6__ {int pcb; } ;
typedef TYPE_2__ mdns_pcb_t ;
struct TYPE_7__ {size_t tcpip_if; size_t ip_protocol; void* err; int pbt; int port; int ip; } ;
typedef TYPE_3__ mdns_api_call_t ;
typedef void* esp_err_t ;
typedef void* err_t ;
struct TYPE_8__ {TYPE_1__* interfaces; } ;
struct TYPE_5__ {TYPE_2__* pcbs; } ;


 void* VAR_0 ;
 int FUNC_0 (size_t) ;
 TYPE_4__* VAR_1 ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 void* FUNC_3 (int ,int ,int ,int ,struct netif*) ;

__attribute__((used)) static err_t FUNC_4(struct tcpip_api_call_data *VAR_2)
{
    void * VAR_3 = ((void*)0);
    mdns_api_call_t * VAR_4 = (mdns_api_call_t *)VAR_2;
    mdns_pcb_t * VAR_5 = &VAR_1->interfaces[VAR_4->tcpip_if].pcbs[VAR_4->ip_protocol];
    VAR_3 = FUNC_1(FUNC_0(VAR_4->tcpip_if));
    if (!VAR_3) {
        FUNC_2(VAR_4->pbt);
        VAR_4->err = VAR_0;
        return VAR_0;
    }
    esp_err_t VAR_6 = FUNC_3 (VAR_5->pcb, VAR_4->pbt, VAR_4->ip, VAR_4->port, (struct netif *)VAR_3);
    FUNC_2(VAR_4->pbt);
    VAR_4->err = VAR_6;
    return VAR_6;
}
