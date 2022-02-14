
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {size_t conn_service; int conn_handle; int peer_addr; int peer_scn; int cli_sec_mask; } ;
typedef TYPE_1__ tBTA_AG_SCB ;
typedef int tBTA_AG_DATA ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,char*,int ,int ,int ,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_2 (int ,int ,int ,int ,int ,int *,int ) ;
 int VAR_6 ;
 int * VAR_7 ;
 int FUNC_3 (TYPE_1__*) ;
 int * VAR_8 ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (TYPE_1__*,int ,int *) ;
 int * VAR_9 ;

void FUNC_6(tBTA_AG_SCB *VAR_10, tBTA_AG_DATA *VAR_11)
{
    FUNC_1(VAR_6, "", VAR_8[VAR_10->conn_service],
        VAR_10->cli_sec_mask, VAR_3, VAR_2, VAR_10->peer_scn);

    if (FUNC_2(VAR_9[VAR_10->conn_service], VAR_10->peer_scn,
            VAR_4, VAR_0, VAR_10->peer_addr, &(VAR_10->conn_handle),
            VAR_7[FUNC_3(VAR_10) - 1]) == VAR_5) {
        FUNC_4(VAR_10, VAR_10->conn_handle);
        FUNC_0("bta_ag_rfc_do_open : conn_handle = %d", VAR_10->conn_handle);
    } else {

        FUNC_5(VAR_10, VAR_1, VAR_11);
    }
}
