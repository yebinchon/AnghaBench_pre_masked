
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ wifi_mode_t ;
typedef int uint32_t ;
typedef int esp_netif_t ;
struct TYPE_4__ {int addr; } ;
struct TYPE_5__ {TYPE_1__ ip; } ;
typedef TYPE_2__ esp_netif_ip_info_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *,TYPE_2__*) ;
 int FUNC_2 (scalar_t__*) ;
 int * VAR_3 ;
 int * VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int ,int,int ,int,int ) ;

__attribute__((used)) static uint32_t FUNC_4(void)
{
    int VAR_6 = FUNC_3(VAR_5, VAR_0, 0, 1, 0);
    esp_netif_t * VAR_7 = VAR_3;
    esp_netif_ip_info_t VAR_8;
    wifi_mode_t VAR_9;

    FUNC_2(&VAR_9);
    if (VAR_2 == VAR_9) {
        VAR_6 = FUNC_3(VAR_5, VAR_0, 0, 1, 0);
        if (VAR_6 & VAR_0) {
            VAR_7 = VAR_4;
        } else {
            FUNC_0(VAR_1, "sta has no IP");
            return 0;
        }
     }

     FUNC_1(VAR_7, &VAR_8);
     return VAR_8.ip.addr;
}
