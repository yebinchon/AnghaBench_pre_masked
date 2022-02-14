
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t mdns_ip_protocol_t ;
typedef size_t mdns_if_t ;
typedef scalar_t__ esp_err_t ;
struct TYPE_6__ {TYPE_1__* interfaces; } ;
struct TYPE_5__ {scalar_t__ failed_probes; scalar_t__ pcb; } ;
struct TYPE_4__ {TYPE_2__* pcbs; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_3__* VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (size_t,size_t,int) ;
 scalar_t__ FUNC_1 () ;

__attribute__((used)) static esp_err_t FUNC_2(mdns_if_t VAR_4, mdns_ip_protocol_t VAR_5)
{
    if (!VAR_2 || VAR_2->interfaces[VAR_4].pcbs[VAR_5].pcb) {
        return VAR_0;
    }

    esp_err_t VAR_6 = FUNC_0(VAR_4, VAR_5, 1);
    if(VAR_6){
        return VAR_6;
    }

    VAR_6 = FUNC_1();
    if(VAR_6){
        return VAR_6;
    }

    VAR_2->interfaces[VAR_4].pcbs[VAR_5].pcb = VAR_3;
    VAR_2->interfaces[VAR_4].pcbs[VAR_5].failed_probes = 0;
    return VAR_1;
}
