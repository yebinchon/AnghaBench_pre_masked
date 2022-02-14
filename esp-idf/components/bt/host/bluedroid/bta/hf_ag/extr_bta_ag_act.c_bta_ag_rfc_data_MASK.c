
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int peer_addr; int app_id; int at_cb; int conn_handle; } ;
typedef TYPE_1__ tBTA_AG_SCB ;
typedef int tBTA_AG_DATA ;
typedef scalar_t__ UINT16 ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ,char*,int,scalar_t__*) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char*,scalar_t__) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (char*,int ,int) ;

void FUNC_7(tBTA_AG_SCB *VAR_3, tBTA_AG_DATA *VAR_4)
{
    UINT16 VAR_5;
    char VAR_6[VAR_0];
    FUNC_2(VAR_4);
    FUNC_6(VAR_6, 0, VAR_0);

    FUNC_0("bta_ag_rfc_data");

    for (;;) {

        if (FUNC_1(VAR_3->conn_handle, VAR_6, VAR_0, &VAR_5) != VAR_2) {
            break;
        }

        if (VAR_5 == 0) {
            break;
        }

        FUNC_4(VAR_1, VAR_3->app_id, VAR_3->peer_addr);
        FUNC_3(&VAR_3->at_cb, VAR_6, VAR_5);
        FUNC_5(VAR_1, VAR_3->app_id, VAR_3->peer_addr);

        if (VAR_5 < VAR_0) {
            break;
        }
    }
}
