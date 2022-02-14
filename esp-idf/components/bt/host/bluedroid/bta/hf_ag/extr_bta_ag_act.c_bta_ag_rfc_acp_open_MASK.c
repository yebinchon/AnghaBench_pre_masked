
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_13__ ;


struct TYPE_16__ {int* serv_handle; int conn_service; int conn_handle; int reg_services; int peer_addr; int cli_sec_mask; int open_services; int colli_timer; scalar_t__ colli_tmr_on; scalar_t__ in_use; int role; } ;
typedef TYPE_2__ tBTA_AG_SCB ;
struct TYPE_15__ {int port_handle; } ;
struct TYPE_17__ {TYPE_1__ rfc; } ;
typedef TYPE_3__ tBTA_AG_DATA ;
typedef int UINT16 ;
struct TYPE_14__ {TYPE_2__* scb; } ;
typedef int BD_ADDR ;


 int FUNC_0 (char*,int,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int,int ,int *) ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 TYPE_13__ VAR_5 ;
 int FUNC_4 (TYPE_2__*,int) ;
 int FUNC_5 (TYPE_2__*,int) ;
 TYPE_2__* FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*,TYPE_3__*) ;
 int* VAR_6 ;
 int FUNC_9 (int *) ;

void FUNC_10(tBTA_AG_SCB *VAR_7, tBTA_AG_DATA *VAR_8)
{
    UINT16 VAR_9;
    int VAR_10;
    tBTA_AG_SCB *VAR_11, *VAR_12;
    BD_ADDR VAR_13;
    int VAR_14;

    VAR_7->role = VAR_0;
    FUNC_0 ("bta_ag_rfc_acp_open: serv_handle0 = %d serv_handle1 = %d",
                       VAR_7->serv_handle[0], VAR_7->serv_handle[1]);

    if (VAR_4 != (VAR_14=FUNC_1(VAR_8->rfc.port_handle, VAR_13, &VAR_9))) {
        FUNC_0 ("bta_ag_rfc_acp_open error PORT_CheckConnection returned status %d", VAR_14);
    }

    for (VAR_10 = 0, VAR_11 = &VAR_5.scb[0]; VAR_10 < VAR_2; VAR_10++, VAR_11++) {
        if ((VAR_11->in_use) && (VAR_11->colli_tmr_on)) {

            VAR_11->colli_tmr_on = VAR_3;
            FUNC_9 (&VAR_11->colli_timer);

            if (FUNC_2 (VAR_13, VAR_11->peer_addr) == 0) {


            } else {

                VAR_12 = FUNC_6 (VAR_7);
                if (VAR_12) {
                    FUNC_3(VAR_12->peer_addr, VAR_11->peer_addr);
                    VAR_12->open_services = VAR_11->open_services;
                    VAR_12->cli_sec_mask = VAR_11->cli_sec_mask;
                    FUNC_7 (VAR_12);
                }
            }
            break;
        }
    }
    FUNC_3 (VAR_7->peer_addr, VAR_13);

    for (VAR_10 = 0; VAR_10 < VAR_1; VAR_10++) {
        FUNC_0 ("bta_ag_rfc_acp_open: i = %d serv_handle = %d port_handle = %d",
                           VAR_10, VAR_7->serv_handle[VAR_10], VAR_8->rfc.port_handle);
        if (VAR_7->serv_handle[VAR_10] == VAR_8->rfc.port_handle) {
            VAR_7->conn_service = VAR_10;
            VAR_7->conn_handle = VAR_8->rfc.port_handle;
            break;
        }
    }
    FUNC_0 ("bta_ag_rfc_acp_open: conn_service = %d conn_handle = %d",
                       VAR_7->conn_service, VAR_7->conn_handle);

    FUNC_4(VAR_7, (VAR_7->reg_services & ~VAR_6[VAR_7->conn_service]));

    FUNC_5(VAR_7, VAR_6[VAR_7->conn_service]);

    FUNC_8(VAR_7, VAR_8);
}
