
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct netif {int dummy; } ;
struct ip4_addr {int dummy; } ;
typedef scalar_t__ mdns_ip_protocol_t ;
typedef int mdns_if_t ;
struct TYPE_5__ {int ip6; int ip4; } ;
struct TYPE_6__ {TYPE_1__ u_addr; } ;
typedef TYPE_2__ ip_addr_t ;
typedef int esp_netif_t ;
typedef int esp_err_t ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__ FUNC_0 (int,int ,int ,int) ;
 int FUNC_1 (TYPE_2__*,int,int ,int ,int) ;
 scalar_t__ VAR_2 ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (struct netif*) ;
 struct netif* FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (struct netif*,struct ip4_addr const*) ;
 scalar_t__ FUNC_7 (struct netif*,struct ip4_addr const*) ;
 scalar_t__ FUNC_8 (struct netif*,int *) ;
 scalar_t__ FUNC_9 (struct netif*,int *) ;

__attribute__((used)) static esp_err_t FUNC_10(mdns_if_t VAR_3, mdns_ip_protocol_t VAR_4, bool VAR_5)
{
    struct netif * VAR_6 = ((void*)0);
    esp_netif_t *VAR_7 = FUNC_2(VAR_3);

    if (!FUNC_5(VAR_7)) {

        return VAR_0;
    }

    VAR_6 = FUNC_4(VAR_7);
    FUNC_3(VAR_6);

    if (VAR_4 == VAR_2) {
        ip_addr_t VAR_8;
        FUNC_1(&VAR_8, 224, 0, 0, 251);

        if(VAR_5){
            if (FUNC_6(VAR_6, (const struct ip4_addr *)&VAR_8.u_addr.ip4)) {
                return VAR_0;
            }
        } else {
            if (FUNC_7(VAR_6, (const struct ip4_addr *)&VAR_8.u_addr.ip4)) {
                return VAR_0;
            }
        }
    } else {
        ip_addr_t VAR_9 = FUNC_0(0x000002ff, 0, 0, 0xfb000000);

        if(VAR_5){
            if (FUNC_8(VAR_6, &(VAR_9.u_addr.ip6))) {
                return VAR_0;
            }
        } else {
            if (FUNC_9(VAR_6, &(VAR_9.u_addr.ip6))) {
                return VAR_0;
            }
        }
    }
    return VAR_1;
}
