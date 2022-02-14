
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;


typedef int tBTA_GATTC_RCB ;
struct TYPE_23__ {int client_if; } ;
struct TYPE_22__ {int client_if; } ;
struct TYPE_24__ {TYPE_2__ int_conn; TYPE_1__ api_dereg; } ;
typedef TYPE_3__ tBTA_GATTC_DATA ;
typedef int tBTA_GATTC_CLCB ;
typedef int tBTA_GATTC_CB ;
struct TYPE_25__ {int event; int layer_specific; } ;
typedef TYPE_4__ BT_HDR ;
typedef int BOOLEAN ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;
 int FUNC_1 (int *,TYPE_3__*) ;
 int VAR_3 ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (int *,TYPE_3__*) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,TYPE_3__*) ;
 int * FUNC_7 (int ) ;
 int * FUNC_8 (TYPE_3__*) ;
 int * FUNC_9 (TYPE_3__*) ;
 int FUNC_10 (int *,TYPE_3__*) ;
 int FUNC_11 (int *,TYPE_3__*) ;
 int FUNC_12 (int *,TYPE_3__*) ;
 int FUNC_13 (int *,TYPE_3__*) ;
 int FUNC_14 (int *,TYPE_3__*) ;
 int FUNC_15 (int *,TYPE_3__*) ;
 int FUNC_16 (int *,TYPE_3__*) ;
 int FUNC_17 (int *,TYPE_3__*) ;
 int FUNC_18 (int *,TYPE_3__*) ;
 int FUNC_19 (int *,int,TYPE_3__*) ;
 int FUNC_20 (int *,TYPE_3__*) ;
 int FUNC_21 (int) ;

BOOLEAN FUNC_22(BT_HDR *VAR_4)
{
    tBTA_GATTC_CB *VAR_5 = &VAR_3;
    tBTA_GATTC_CLCB *VAR_6 = ((void*)0);
    tBTA_GATTC_RCB *VAR_7;
    BOOLEAN VAR_8 = VAR_2;

    FUNC_0("bta_gattc_hdl_event: Event [%s]\n", FUNC_21(VAR_4->event));

    switch (VAR_4->event) {
    case 134:
        FUNC_5(VAR_5);
        break;

    case 130:
        FUNC_18(VAR_5, (tBTA_GATTC_DATA *) VAR_4);
        break;

    case 128:
        FUNC_20(VAR_5, (tBTA_GATTC_DATA *) VAR_4);
        break;

    case 135:
        VAR_7 = FUNC_2(((tBTA_GATTC_DATA *)VAR_4)->api_dereg.client_if);
        FUNC_4(VAR_5, VAR_7);
        break;

    case 132:
        FUNC_14(VAR_5, (tBTA_GATTC_DATA *) VAR_4);
        break;

    case 136:
        FUNC_15(VAR_5, (tBTA_GATTC_DATA *) VAR_4);
        break;

    case 131:
        FUNC_16(VAR_5, (tBTA_GATTC_DATA *) VAR_4);
        break;
    case 139:
        FUNC_11(VAR_5, (tBTA_GATTC_DATA *)VAR_4);
        break;
    case 137:
        FUNC_13(VAR_5, (tBTA_GATTC_DATA *)VAR_4);
        break;
    case 138:
        FUNC_12(VAR_5, (tBTA_GATTC_DATA *) VAR_4);
        break;

    case 133:
        FUNC_10(VAR_5, (tBTA_GATTC_DATA *) VAR_4);
        break;
    case 140:
        FUNC_1(VAR_5, (tBTA_GATTC_DATA *) VAR_4);
        break;


    case 129:
        FUNC_17(VAR_5, (tBTA_GATTC_DATA *) VAR_4);
        break;

    default:
        if (VAR_4->event == VAR_0) {
            VAR_6 = FUNC_8((tBTA_GATTC_DATA *) VAR_4);
            VAR_7 = FUNC_2(((tBTA_GATTC_DATA *)VAR_4)->int_conn.client_if);
            if (VAR_7 != ((void*)0)){
                FUNC_3(VAR_7, (tBTA_GATTC_DATA *) VAR_4);
            }

        } else if (VAR_4->event == VAR_1) {
            VAR_7 = FUNC_2(((tBTA_GATTC_DATA *)VAR_4)->int_conn.client_if);
            if (VAR_7 != ((void*)0)){
                FUNC_6(VAR_7, (tBTA_GATTC_DATA *) VAR_4);
            }
            VAR_6 = FUNC_9((tBTA_GATTC_DATA *) VAR_4);
        } else {
            VAR_6 = FUNC_7(VAR_4->layer_specific);
        }

        if (VAR_6 != ((void*)0)) {
            VAR_8 = FUNC_19(VAR_6, VAR_4->event, (tBTA_GATTC_DATA *) VAR_4);
        } else {
            FUNC_0("Ignore unknown conn ID: %d\n", VAR_4->layer_specific);
        }

        break;
    }


    return VAR_8;
}
