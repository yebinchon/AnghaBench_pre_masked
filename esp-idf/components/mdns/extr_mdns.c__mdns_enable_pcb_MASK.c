
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t mdns_ip_protocol_t ;
typedef size_t mdns_if_t ;
struct TYPE_6__ {TYPE_2__* interfaces; } ;
struct TYPE_5__ {TYPE_1__* pcbs; } ;
struct TYPE_4__ {int pcb; } ;


 scalar_t__ FUNC_0 (size_t,size_t) ;
 int FUNC_1 (size_t,size_t) ;
 TYPE_3__* VAR_0 ;

void FUNC_2(mdns_if_t VAR_1, mdns_ip_protocol_t VAR_2)
{
    if (!VAR_0->interfaces[VAR_1].pcbs[VAR_2].pcb) {
        if (FUNC_0(VAR_1, VAR_2)) {
            return;
        }
    }
    FUNC_1(VAR_1, VAR_2);
}
