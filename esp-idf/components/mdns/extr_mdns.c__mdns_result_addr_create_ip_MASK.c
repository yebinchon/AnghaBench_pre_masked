
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_9__ ;
typedef struct TYPE_20__ TYPE_8__ ;
typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_15__ {int addr; } ;
struct TYPE_13__ {int addr; } ;
struct TYPE_16__ {TYPE_3__ ip4; TYPE_1__ ip6; } ;
struct TYPE_19__ {scalar_t__ type; TYPE_4__ u_addr; } ;
struct TYPE_20__ {TYPE_7__ addr; } ;
typedef TYPE_8__ mdns_ip_addr_t ;
struct TYPE_17__ {int addr; } ;
struct TYPE_14__ {int addr; } ;
struct TYPE_18__ {TYPE_5__ ip4; TYPE_2__ ip6; } ;
struct TYPE_21__ {scalar_t__ type; TYPE_6__ u_addr; } ;
typedef TYPE_9__ esp_ip_addr_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (TYPE_8__*,int ,int) ;

__attribute__((used)) static mdns_ip_addr_t * FUNC_3(esp_ip_addr_t * VAR_2)
{
    mdns_ip_addr_t * VAR_3 = (mdns_ip_addr_t *)FUNC_0(sizeof(mdns_ip_addr_t));
    if (!VAR_3) {
        VAR_0;
        return ((void*)0);
    }
    FUNC_2(VAR_3, 0 , sizeof(mdns_ip_addr_t));
    VAR_3->addr.type = VAR_2->type;
    if (VAR_2->type == VAR_1) {
        FUNC_1(VAR_3->addr.u_addr.ip6.addr, VAR_2->u_addr.ip6.addr, 16);
    } else {
        VAR_3->addr.u_addr.ip4.addr = VAR_2->u_addr.ip4.addr;
    }
    return VAR_3;
}
