
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_9__ ;
typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_10__ ;


struct TYPE_23__ {TYPE_9__* addr; } ;
typedef TYPE_8__ mdns_result_t ;
struct TYPE_18__ {int addr; } ;
struct TYPE_16__ {scalar_t__ addr; } ;
struct TYPE_19__ {TYPE_3__ ip6; TYPE_1__ ip4; } ;
struct TYPE_20__ {scalar_t__ type; TYPE_4__ u_addr; } ;
struct TYPE_24__ {struct TYPE_24__* next; TYPE_5__ addr; } ;
typedef TYPE_9__ mdns_ip_addr_t ;
struct TYPE_21__ {int addr; } ;
struct TYPE_17__ {scalar_t__ addr; } ;
struct TYPE_22__ {TYPE_6__ ip6; TYPE_2__ ip4; } ;
struct TYPE_15__ {scalar_t__ type; TYPE_7__ u_addr; } ;
typedef TYPE_10__ esp_ip_addr_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_9__* FUNC_0 (TYPE_10__*) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static void FUNC_2(mdns_result_t * VAR_2, esp_ip_addr_t * VAR_3)
{
    mdns_ip_addr_t * VAR_4 = VAR_2->addr;
    while (VAR_4) {
        if (VAR_4->addr.type == VAR_3->type) {
            if (VAR_4->addr.type == VAR_0 && VAR_4->addr.u_addr.ip4.addr == VAR_3->u_addr.ip4.addr) {
                return;
            }
            if (VAR_4->addr.type == VAR_1 && !FUNC_1(VAR_4->addr.u_addr.ip6.addr, VAR_3->u_addr.ip6.addr, 16)) {
                return;
            }
        }
        VAR_4 = VAR_4->next;
    }
    VAR_4 = FUNC_0(VAR_3);
    if (!VAR_4) {
        return;
    }
    VAR_4->next = VAR_2->addr;
    VAR_2->addr = VAR_4;
}
