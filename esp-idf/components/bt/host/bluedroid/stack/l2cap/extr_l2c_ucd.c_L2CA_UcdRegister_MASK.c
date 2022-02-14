
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {int pL2CA_ConfigCfm_Cb; int pL2CA_ConfigInd_Cb; int * pL2CA_CongestionStatus_Cb; int pL2CA_DisconnectInd_Cb; } ;
struct TYPE_10__ {int pL2CA_UCD_Congestion_Status_Cb; int pL2CA_UCD_Data_Cb; int pL2CA_UCD_Discover_Cb; } ;
struct TYPE_8__ {TYPE_3__ cb_info; int state; } ;
struct TYPE_9__ {TYPE_4__ api; TYPE_1__ ucd; } ;
typedef TYPE_2__ tL2C_RCB ;
typedef TYPE_3__ tL2CAP_UCD_CB_INFO ;
typedef int tL2CAP_APPL_INFO ;
typedef int UINT16 ;
typedef int BOOLEAN ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 TYPE_2__* FUNC_2 (int ) ;
 TYPE_2__* FUNC_3 (int ) ;
 int FUNC_4 (TYPE_4__*,int ,int) ;

BOOLEAN FUNC_5 ( UINT16 VAR_10, tL2CAP_UCD_CB_INFO *VAR_11 )
{
    tL2C_RCB *VAR_12;

    FUNC_0 ("L2CA_UcdRegister()  PSM: 0x%04x", VAR_10);

    if ((!VAR_11->pL2CA_UCD_Discover_Cb)
            || (!VAR_11->pL2CA_UCD_Data_Cb)) {
        FUNC_1 ("L2CAP - no callback registering PSM(0x%04x) on UCD", VAR_10);
        return (VAR_0);
    }

    if ((VAR_12 = FUNC_3 (VAR_10)) == ((void*)0)) {
        FUNC_1 ("L2CAP - no RCB for L2CA_UcdRegister, PSM: 0x%04x", VAR_10);
        return (VAR_0);
    }

    VAR_12->ucd.state = VAR_2;
    VAR_12->ucd.cb_info = *VAR_11;


    if ((VAR_12 = FUNC_3 (VAR_1)) == ((void*)0)) {
        if ((VAR_12 = FUNC_2 (VAR_1)) == ((void*)0)) {
            FUNC_1 ("L2CAP - no RCB available for L2CA_UcdRegister");
            return (VAR_0);
        } else {

            VAR_12->ucd.cb_info.pL2CA_UCD_Discover_Cb = VAR_9;
            VAR_12->ucd.cb_info.pL2CA_UCD_Data_Cb = VAR_7;
            VAR_12->ucd.cb_info.pL2CA_UCD_Congestion_Status_Cb = VAR_6;

            FUNC_4 (&VAR_12->api, 0, sizeof(tL2CAP_APPL_INFO));
            VAR_12->api.pL2CA_DisconnectInd_Cb = VAR_8;


            VAR_12->api.pL2CA_CongestionStatus_Cb = ((void*)0);


            VAR_12->api.pL2CA_ConfigInd_Cb = VAR_5;
            VAR_12->api.pL2CA_ConfigCfm_Cb = VAR_4;
        }
    }

    return (VAR_3);
}
