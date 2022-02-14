
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int eth_driver ;
typedef TYPE_1__* esp_eth_handle_t ;
struct TYPE_6__ {int check_link_timer; } ;
typedef TYPE_1__ esp_eth_driver_t ;
typedef scalar_t__ esp_err_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (int ,int ,TYPE_1__**,int,int ) ;
 scalar_t__ VAR_6 ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (int ,int ) ;

esp_err_t FUNC_5(esp_eth_handle_t VAR_7)
{
    esp_err_t VAR_8 = VAR_1;
    esp_eth_driver_t *VAR_9 = VAR_7;
    FUNC_0(FUNC_4(VAR_9->check_link_timer, 0) == VAR_6, "start eth_link_timer failed", VAR_5, VAR_0);

    FUNC_0(FUNC_2(VAR_3, VAR_2, &VAR_9, sizeof(VAR_9), 0) == VAR_1,
              "send ETHERNET_EVENT_START event failed", VAR_4, VAR_0);
    return VAR_8;
err_start_timer:
    FUNC_3(VAR_9->check_link_timer, 0);
err_event:
    FUNC_1(VAR_9);
    return VAR_8;
}
