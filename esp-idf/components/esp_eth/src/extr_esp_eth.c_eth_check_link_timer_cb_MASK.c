
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* get_link ) (TYPE_1__*) ;} ;
typedef TYPE_1__ esp_eth_phy_t ;
struct TYPE_5__ {TYPE_1__* phy; } ;
typedef TYPE_2__ esp_eth_driver_t ;
typedef int TimerHandle_t ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_2(TimerHandle_t VAR_0)
{
    esp_eth_driver_t *VAR_1 = (esp_eth_driver_t *)FUNC_0(VAR_0);
    esp_eth_phy_t *VAR_2 = VAR_1->phy;
    VAR_2->get_link(VAR_2);
}
