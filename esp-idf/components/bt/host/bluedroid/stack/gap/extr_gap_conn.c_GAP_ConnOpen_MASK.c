
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_9__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_15__ {void* allowed_modes; void* fcr_tx_buf_size; void* fcr_rx_buf_size; void* user_tx_buf_size; void* user_rx_buf_size; int preferred_mode; } ;
typedef TYPE_3__ tL2CAP_ERTM_INFO ;
struct TYPE_14__ {int mode; } ;
struct TYPE_16__ {TYPE_2__ fcr; scalar_t__ fcr_present; } ;
typedef TYPE_4__ tL2CAP_CFG_INFO ;
typedef int tGAP_CONN_CALLBACK ;
struct TYPE_17__ {int gap_handle; int connection_id; TYPE_3__ ertm_info; int psm; int con_flags; int con_state; TYPE_4__ cfg; void* service_id; int * p_callback; int rem_addr_specified; int * rem_dev_address; } ;
typedef TYPE_5__ tGAP_CCB ;
typedef void* UINT8 ;
typedef int UINT16 ;
struct TYPE_19__ {int * pL2CA_ConnectInd_Cb; int * pAMP_ConnectInd_Cb; } ;
struct TYPE_13__ {TYPE_9__ reg_info; } ;
struct TYPE_18__ {TYPE_1__ conn; } ;
typedef scalar_t__ BOOLEAN ;
typedef int BD_ADDR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (void*,char const*,void*,int,int ,int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 void* VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*) ;
 scalar_t__ VAR_13 ;
 void* VAR_14 ;
 int FUNC_3 (int ,int ,TYPE_3__*,int *) ;
 int FUNC_4 (int,TYPE_9__*,int) ;
 int VAR_15 ;
 int VAR_16 ;
 TYPE_5__* FUNC_5 () ;
 TYPE_7__ VAR_17 ;
 void* VAR_18 ;
 int FUNC_6 (TYPE_5__*) ;
 scalar_t__ FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (int *,int ,int ) ;

UINT16 FUNC_9 (const char *VAR_19, UINT8 VAR_20, BOOLEAN VAR_21,
                     BD_ADDR VAR_22, UINT16 VAR_23, tL2CAP_CFG_INFO *VAR_24,
                     tL2CAP_ERTM_INFO *VAR_25, UINT16 VAR_26, UINT8 VAR_27,
                     tGAP_CONN_CALLBACK *VAR_28)
{
    tGAP_CCB *VAR_29;
    UINT16 VAR_30;


    FUNC_2 ("GAP_CONN - Open Request");


    if ((VAR_29 = FUNC_5()) == ((void*)0)) {
        return (VAR_12);
    }


    if (VAR_22) {

        if (FUNC_7 (VAR_22, VAR_6, VAR_2)) {
            VAR_29->rem_addr_specified = VAR_15;
        }

        FUNC_8 (&VAR_29->rem_dev_address[0], VAR_22, VAR_2);
    } else if (!VAR_21) {

        return (VAR_12);
    }


    if (!VAR_29->rem_addr_specified && !VAR_21) {
        FUNC_6 (VAR_29);
        FUNC_1 ("GAP ERROR: Client must specify a remote BD ADDR to connect to!");
        return (VAR_12);
    }


    if (VAR_24) {
        VAR_29->cfg = *VAR_24;
    }

    VAR_29->p_callback = VAR_28;
    if (!VAR_21) {
        VAR_17.conn.reg_info.pL2CA_ConnectInd_Cb = ((void*)0);
    } else {
        VAR_17.conn.reg_info.pL2CA_ConnectInd_Cb = VAR_18;
    }



    if ((VAR_29->psm = FUNC_4 (VAR_23, &VAR_17.conn.reg_info,
                                     VAR_0 | VAR_1)) == 0) {
        FUNC_1 ("GAP_ConnOpen: Failure registering PSM 0x%04x", VAR_23);
        FUNC_6 (VAR_29);
        return (VAR_12);
    }


    VAR_29->service_id = VAR_20;
    if (!FUNC_0 ((UINT8)!VAR_21, VAR_19,
                               VAR_29->service_id, VAR_26, VAR_29->psm, 0, 0)) {
        FUNC_1 ("GAP_CONN - Security Error");
        FUNC_6 (VAR_29);
        return (VAR_12);
    }


    if ( VAR_29->cfg.fcr_present ) {
        if (VAR_25 == ((void*)0)) {
            VAR_29->ertm_info.preferred_mode = VAR_29->cfg.fcr.mode;
            VAR_29->ertm_info.user_rx_buf_size = VAR_11;
            VAR_29->ertm_info.user_tx_buf_size = VAR_11;
            VAR_29->ertm_info.fcr_rx_buf_size = VAR_14;
            VAR_29->ertm_info.fcr_tx_buf_size = VAR_14;
        } else {
            VAR_29->ertm_info = *VAR_25;
        }
    }


    if (VAR_25 != ((void*)0)) {
        VAR_29->ertm_info.allowed_modes =
            (VAR_27) ? VAR_27 : (UINT8)VAR_13;
    }

    if (VAR_21) {
        VAR_29->con_flags |= VAR_8;
        VAR_29->con_state = VAR_10;
        return (VAR_29->gap_handle);
    } else {

        VAR_29->con_flags = VAR_7;


        VAR_29->con_state = VAR_9;


        if ((VAR_26 & (VAR_4 | VAR_3 | VAR_5) ) == 0) {
            VAR_29->con_flags |= VAR_8;
        }


        if (VAR_22 && ((VAR_30 = FUNC_3 (VAR_29->psm, VAR_22, &VAR_29->ertm_info, &VAR_16)) != 0)) {
            VAR_29->connection_id = VAR_30;
            return (VAR_29->gap_handle);
        } else {
            FUNC_6 (VAR_29);
            return (VAR_12);
        }
    }
}
