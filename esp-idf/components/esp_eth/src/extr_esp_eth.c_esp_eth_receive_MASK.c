
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_5__ {int (* receive ) (TYPE_1__*,int *,int *) ;} ;
typedef TYPE_1__ esp_eth_mac_t ;
typedef scalar_t__ esp_eth_handle_t ;
struct TYPE_6__ {TYPE_1__* mac; } ;
typedef TYPE_2__ esp_eth_driver_t ;
typedef int esp_err_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,char*,int ,int ) ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*,int *,int *) ;

esp_err_t FUNC_2(esp_eth_handle_t VAR_3, uint8_t *VAR_4, uint32_t *VAR_5)
{
    esp_err_t VAR_6 = VAR_1;
    esp_eth_driver_t *VAR_7 = (esp_eth_driver_t *)VAR_3;
    FUNC_0(VAR_7, "ethernet driver handle can't be null", VAR_2, VAR_0);
    esp_eth_mac_t *VAR_8 = VAR_7->mac;
    return VAR_8->receive(VAR_8, VAR_4, VAR_5);
err:
    return VAR_6;
}
