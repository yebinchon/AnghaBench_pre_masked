
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ event; } ;
struct TYPE_8__ {scalar_t__ port_handle; TYPE_2__ hdr; } ;
typedef TYPE_3__ tBTA_HF_CLIENT_RFC ;
typedef scalar_t__ UINT32 ;
typedef scalar_t__ UINT16 ;
struct TYPE_6__ {scalar_t__ conn_handle; scalar_t__ serv_handle; } ;
struct TYPE_9__ {TYPE_1__ scb; } ;


 int FUNC_0 (char*,scalar_t__,...) ;
 int FUNC_1 (char*,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_5__ VAR_4 ;
 int FUNC_2 (TYPE_3__*) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(UINT32 VAR_5, UINT16 VAR_6)
{
    tBTA_HF_CLIENT_RFC *VAR_7;
    UINT16 VAR_8;

    FUNC_0("bta_hf_client_mgmt_cback : code = %d, port_handle = %d, conn_handle = %d, serv_handle = %d",
                     VAR_5, VAR_6, VAR_4.scb.conn_handle, VAR_4.scb.serv_handle);


    if ((VAR_5 != VAR_3) && (VAR_6 != VAR_4.scb.conn_handle)) {
        FUNC_0("bta_hf_client_mgmt_cback ignoring handle:%d", VAR_6);
        return;
    }

    if (VAR_5 == VAR_3) {
        if ((VAR_4.scb.conn_handle && (VAR_6 == VAR_4.scb.conn_handle)) ||
                (VAR_6 == VAR_4.scb.serv_handle)) {
            VAR_8 = VAR_1;
        } else {
            FUNC_1 ("bta_hf_client_mgmt_cback: PORT_SUCCESS, ignoring handle = %d", VAR_6);
            return;
        }
    }

    else if (VAR_6 == VAR_4.scb.conn_handle) {
        VAR_8 = VAR_0;
    } else {
        VAR_8 = VAR_2;
    }

    if ((VAR_7 = (tBTA_HF_CLIENT_RFC *) FUNC_3(sizeof(tBTA_HF_CLIENT_RFC))) != ((void*)0)) {
        VAR_7->hdr.event = VAR_8;
        VAR_7->port_handle = VAR_6;
        FUNC_2(VAR_7);
    }
}
