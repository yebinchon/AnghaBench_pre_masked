
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint8_t ;
struct TYPE_3__ {scalar_t__ addr; } ;
typedef TYPE_1__ esp_ip6_addr_t ;


 size_t VAR_0 ;

__attribute__((used)) static bool FUNC_0(esp_ip6_addr_t VAR_1)
{
    uint8_t VAR_2;
    uint8_t * VAR_3 = (uint8_t *)VAR_1;
    for (VAR_2=0; VAR_2<VAR_0; VAR_2++) {
        if (VAR_3[VAR_2]) {
            return 0;
        }
    }
    return 1;
}
