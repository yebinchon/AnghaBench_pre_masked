
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ mdns_if_t ;
struct TYPE_6__ {scalar_t__ addr; } ;
struct TYPE_7__ {TYPE_1__ ip; } ;
typedef TYPE_2__ esp_netif_ip_info_t ;
struct TYPE_8__ {scalar_t__ addr; } ;
typedef TYPE_3__ esp_ip4_addr_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int ,TYPE_2__*) ;
 int FUNC_4 (int *,int *,int) ;

__attribute__((used)) static int FUNC_5(esp_ip4_addr_t * VAR_1, mdns_if_t VAR_2)
{
    esp_netif_ip_info_t VAR_3;
    esp_netif_ip_info_t VAR_4;
    if (!VAR_1->addr) {
        return 1;
    }
    if (FUNC_3(FUNC_1(VAR_2), &VAR_3)) {
        return 1;
    }

    int VAR_5 = FUNC_4((uint8_t*)&VAR_3.ip.addr, (uint8_t*)&VAR_1->addr, sizeof(esp_ip4_addr_t));
    if (VAR_5 > 0) {
        return -1;
    } else if (VAR_5 < 0) {

        mdns_if_t VAR_6 = FUNC_2 (VAR_2);
        if (VAR_6 == VAR_0) {
            return 1;
        }
        if (FUNC_3(FUNC_1(VAR_6), &VAR_4)) {
            return 1;
        }
        if (VAR_1->addr != VAR_4.ip.addr) {
            return 1;
        }
        FUNC_0(VAR_2);
        return 2;
    }
    return 0;
}
