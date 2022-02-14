
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int port_handle; } ;
struct TYPE_9__ {TYPE_2__ rfc; } ;
typedef TYPE_3__ tBTA_HF_CLIENT_DATA ;
typedef int UINT16 ;
struct TYPE_7__ {int conn_handle; int peer_addr; int colli_timer; scalar_t__ colli_tmr_on; int serv_handle; int role; } ;
struct TYPE_10__ {TYPE_1__ scb; } ;
typedef int BD_ADDR ;


 int FUNC_0 (char*,int,...) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ,int ,int *) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 TYPE_6__ VAR_3 ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (int *) ;

void FUNC_8(tBTA_HF_CLIENT_DATA *VAR_4)
{
    UINT16 VAR_5;
    BD_ADDR VAR_6;
    int VAR_7;


    VAR_3.scb.role = VAR_0;

    FUNC_0 ("bta_hf_client_rfc_acp_open: serv_handle = %d rfc.port_handle = %d",
                      VAR_3.scb.serv_handle, VAR_4->rfc.port_handle);


    if (VAR_2 != (VAR_7 = FUNC_1(VAR_4->rfc.port_handle, VAR_6, &VAR_5))) {
        FUNC_0 ("bta_hf_client_rfc_acp_open error PORT_CheckConnection returned status %d", VAR_7);
    }


    if (VAR_3.scb.colli_tmr_on) {

        VAR_3.scb.colli_tmr_on = VAR_1;
        FUNC_7 (&VAR_3.scb.colli_timer);

        if (FUNC_2 (VAR_6, VAR_3.scb.peer_addr) == 0) {


        } else {

            FUNC_5 ();
        }
    }

    FUNC_3 (VAR_3.scb.peer_addr, VAR_6);
    VAR_3.scb.conn_handle = VAR_4->rfc.port_handle;


    FUNC_4();


    FUNC_6(VAR_4);
}
