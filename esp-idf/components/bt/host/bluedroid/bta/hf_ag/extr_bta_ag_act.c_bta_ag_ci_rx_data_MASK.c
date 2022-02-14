
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int peer_addr; int app_id; int conn_handle; } ;
typedef TYPE_1__ tBTA_AG_SCB ;
typedef int tBTA_AG_DATA ;
typedef int tBTA_AG_CI_RX_WRITE ;
typedef int UINT16 ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,int ,int *) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (char*) ;

void FUNC_5(tBTA_AG_SCB *VAR_1, tBTA_AG_DATA *VAR_2)
{
    UINT16 VAR_3;
    tBTA_AG_CI_RX_WRITE *VAR_4 = (tBTA_AG_CI_RX_WRITE *)VAR_2;
    char *VAR_5 = (char *)(VAR_4+1);

    FUNC_0("bta_ag_ci_rx_data:");

    FUNC_2(VAR_0, VAR_1->app_id, VAR_1->peer_addr);
    FUNC_1(VAR_1->conn_handle, VAR_5, FUNC_4(VAR_5), &VAR_3);
    FUNC_3(VAR_0, VAR_1->app_id, VAR_1->peer_addr);
}
