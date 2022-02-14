
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef int mdns_srv_item_t ;
typedef int mdns_ip_protocol_t ;
typedef int mdns_if_t ;
struct TYPE_6__ {TYPE_1__* interfaces; int hostname; } ;
struct TYPE_5__ {scalar_t__ state; scalar_t__ pcb; } ;
struct TYPE_4__ {TYPE_2__* pcbs; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int ,int **,size_t,int) ;
 TYPE_3__* VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(mdns_srv_item_t ** VAR_4, size_t VAR_5, bool VAR_6)
{
    uint8_t VAR_7, VAR_8;
    if (FUNC_1(VAR_3->hostname)) {
        return;
    }

    for (VAR_7=0; VAR_7<VAR_0; VAR_7++) {
        for (VAR_8=0; VAR_8<VAR_1; VAR_8++) {
            if (VAR_3->interfaces[VAR_7].pcbs[VAR_8].pcb && VAR_3->interfaces[VAR_7].pcbs[VAR_8].state == VAR_2) {
                FUNC_0((mdns_if_t)VAR_7, (mdns_ip_protocol_t)VAR_8, VAR_4, VAR_5, VAR_6);
            }
        }
    }
}
