
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
struct TYPE_4__ {scalar_t__ state; scalar_t__ pcb; } ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 void* VAR_2 ;
 int FUNC_0 (size_t,size_t) ;
 int FUNC_1 (size_t,size_t) ;
 size_t FUNC_2 (size_t) ;
 int FUNC_3 (size_t,size_t) ;
 TYPE_3__* VAR_3 ;

void FUNC_4(mdns_if_t VAR_4, mdns_ip_protocol_t VAR_5)
{
    if (VAR_3->interfaces[VAR_4].pcbs[VAR_5].pcb) {
        FUNC_0(VAR_4, VAR_5);
        FUNC_3(VAR_4, VAR_5);
        mdns_if_t VAR_6 = FUNC_2 (VAR_4);
        if (VAR_6 != VAR_0 && VAR_3->interfaces[VAR_6].pcbs[VAR_5].state == VAR_1) {
            VAR_3->interfaces[VAR_6].pcbs[VAR_5].state = VAR_2;
            FUNC_1(VAR_6, VAR_5);
        }
    }
    VAR_3->interfaces[VAR_4].pcbs[VAR_5].state = VAR_2;
}
