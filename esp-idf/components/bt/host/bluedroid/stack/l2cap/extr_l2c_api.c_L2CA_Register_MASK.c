
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int * pL2CA_ConnectInd_Cb; int pL2CA_DisconnectInd_Cb; int pL2CA_DataInd_Cb; int pL2CA_ConfigInd_Cb; int pL2CA_ConfigCfm_Cb; } ;
struct TYPE_6__ {int real_psm; TYPE_2__ api; } ;
typedef TYPE_1__ tL2C_RCB ;
typedef TYPE_2__ tL2CAP_APPL_INFO ;
typedef int UINT16 ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*,int,int) ;
 scalar_t__ FUNC_2 (int) ;
 TYPE_1__* FUNC_3 (int) ;
 TYPE_1__* FUNC_4 (int) ;

UINT16 FUNC_5 (UINT16 VAR_0, tL2CAP_APPL_INFO *VAR_1)
{
    tL2C_RCB *VAR_2;
    UINT16 VAR_3 = VAR_0;







    if ((!VAR_1->pL2CA_ConfigCfm_Cb)
            || (!VAR_1->pL2CA_ConfigInd_Cb)
            || (!VAR_1->pL2CA_DataInd_Cb)
            || (!VAR_1->pL2CA_DisconnectInd_Cb)) {
        FUNC_0 ("L2CAP - no cb registering PSM: 0x%04x", VAR_0);
        return (0);
    }


    if (FUNC_2(VAR_0)) {
        FUNC_0 ("L2CAP - invalid PSM value, PSM: 0x%04x", VAR_0);
        return (0);
    }



    if ( (VAR_0 >= 0x1001) && (VAR_1->pL2CA_ConnectInd_Cb == ((void*)0)) ) {
        for (VAR_3 = 0x1002; VAR_3 < 0x8000; VAR_3 += 2) {
            if ((VAR_2 = FUNC_4 (VAR_3)) == ((void*)0)) {
                break;
            }
        }


    }


    if ((VAR_2 = FUNC_4 (VAR_3)) == ((void*)0)) {
        if ((VAR_2 = FUNC_3 (VAR_3)) == ((void*)0)) {
            FUNC_1 ("L2CAP - no RCB available, PSM: 0x%04x  vPSM: 0x%04x", VAR_0, VAR_3);
            return (0);
        }
    }

    VAR_2->api = *VAR_1;
    VAR_2->real_psm = VAR_0;

    return (VAR_3);
}
