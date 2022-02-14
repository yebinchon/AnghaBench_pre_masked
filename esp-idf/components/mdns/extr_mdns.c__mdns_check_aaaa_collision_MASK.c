
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct esp_ip6_addr {int addr; } ;
typedef scalar_t__ mdns_if_t ;
struct TYPE_4__ {scalar_t__ addr; } ;
typedef TYPE_1__ esp_ip6_addr_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_1__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (int ,struct esp_ip6_addr*) ;
 int FUNC_5 (int *,int *,int ) ;

__attribute__((used)) static int FUNC_6(esp_ip6_addr_t * VAR_2, mdns_if_t VAR_3)
{
    struct esp_ip6_addr VAR_4;
    struct esp_ip6_addr VAR_5;
    if (FUNC_0(*VAR_2)) {
        return 1;
    }
    if (FUNC_4(FUNC_2(VAR_3), &VAR_4)) {
        return 1;
    }
    int VAR_6 = FUNC_5((uint8_t*)&VAR_4, (uint8_t*)VAR_2->addr, VAR_1);
    if (VAR_6 > 0) {
        return -1;
    } else if (VAR_6 < 0) {

        mdns_if_t VAR_7 = FUNC_3 (VAR_3);
        if (VAR_7 == VAR_0) {
            return 1;
        }
        if (FUNC_4(FUNC_2(VAR_7), &VAR_5)) {
            return 1;
        }
        if (FUNC_5((uint8_t*)&VAR_5, (uint8_t*)VAR_2->addr, VAR_1)) {
            return 1;
        }
        FUNC_1(VAR_3);
        return 2;
    }
    return 0;
}
