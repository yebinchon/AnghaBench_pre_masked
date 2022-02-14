
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct netif {int dummy; } ;
struct TYPE_2__ {int addr; } ;
struct dhcp {TYPE_1__ offered_ip_addr; } ;
typedef int nvs_handle_t ;
typedef int esp_netif_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 int * FUNC_1 (void*) ;
 int FUNC_2 (int *) ;
 struct dhcp* FUNC_3 (struct netif*) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ,int ,int *) ;
 scalar_t__ FUNC_6 (int ,int ,int *) ;

bool FUNC_7(void *VAR_3)
{
    nvs_handle_t VAR_4;
    bool VAR_5 = 0;
    struct netif *VAR_6 = (struct netif *)VAR_3;
    struct dhcp *VAR_7 = FUNC_3(VAR_6);
    esp_netif_t *VAR_8 = FUNC_1(VAR_3);

    if(FUNC_0(VAR_8)) {
        uint32_t *VAR_9 = &VAR_7->offered_ip_addr.addr;
        if (FUNC_6(VAR_0, VAR_2, &VAR_4) == VAR_1) {
            if (FUNC_5(VAR_4, FUNC_2(VAR_8), VAR_9) == VAR_1) {
                VAR_5 = 1;
            }
            FUNC_4(VAR_4);
        }
    }
    return VAR_5;
}
