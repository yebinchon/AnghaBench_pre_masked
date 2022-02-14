
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int tBTA_HF_CLIENT_DATA ;
struct TYPE_3__ {int conn_handle; int peer_addr; int peer_scn; int cli_sec_mask; } ;
struct TYPE_4__ {TYPE_1__ scb; } ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,char*,int ,int ,int ,int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_2 (int ,int ,int ,int ,int ,int *,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_2__ VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int *) ;

void FUNC_5(tBTA_HF_CLIENT_DATA *VAR_11)
{
    FUNC_1(VAR_7, "", VAR_3,
                         VAR_9.scb.cli_sec_mask, VAR_4,
                         VAR_2, VAR_9.scb.peer_scn);

    if (FUNC_2(VAR_8, VAR_9.scb.peer_scn,
                                VAR_5, VAR_0, VAR_9.scb.peer_addr, &(VAR_9.scb.conn_handle),
                                VAR_10) == VAR_6) {
        FUNC_3(VAR_9.scb.conn_handle);
        FUNC_0("bta_hf_client_rfc_do_open : conn_handle = %d", VAR_9.scb.conn_handle);
    }

    else {
        FUNC_4(VAR_1, VAR_11);
    }
}
