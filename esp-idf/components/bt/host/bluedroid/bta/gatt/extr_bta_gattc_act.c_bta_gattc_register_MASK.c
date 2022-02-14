
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int tBT_UUID ;
typedef void* tBTA_GATT_STATUS ;
typedef int tBTA_GATTC_RCB ;
struct TYPE_14__ {int event; } ;
struct TYPE_17__ {int client_if; TYPE_1__ hdr; } ;
typedef TYPE_4__ tBTA_GATTC_INT_START_IF ;
struct TYPE_16__ {int (* p_cback ) (int ,TYPE_7__*) ;int app_uuid; } ;
struct TYPE_18__ {TYPE_3__ api_reg; } ;
typedef TYPE_5__ tBTA_GATTC_DATA ;
struct TYPE_19__ {scalar_t__ state; TYPE_7__* cl_rcb; } ;
typedef TYPE_6__ tBTA_GATTC_CB ;
struct TYPE_15__ {void* status; int app_uuid; int client_if; } ;
struct TYPE_20__ {TYPE_2__ reg_oper; int client_if; int app_uuid; int (* p_cback ) (int ,TYPE_7__*) ;scalar_t__ in_use; } ;
typedef TYPE_7__ tBTA_GATTC ;
typedef int cb_data ;
typedef size_t UINT8 ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int *) ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (TYPE_6__*) ;
 int FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (int *,int *,int) ;
 int FUNC_7 (TYPE_7__*,int ,int) ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 (int ,TYPE_7__*) ;

void FUNC_10(tBTA_GATTC_CB *VAR_9, tBTA_GATTC_DATA *VAR_10)
{
    tBTA_GATTC VAR_11;
    UINT8 VAR_12;
    tBT_UUID *VAR_13 = &VAR_10->api_reg.app_uuid;
    tBTA_GATTC_INT_START_IF *VAR_14;
    tBTA_GATT_STATUS VAR_15 = VAR_5;


    FUNC_0("bta_gattc_register state %d\n", VAR_9->state);
    FUNC_7(&VAR_11, 0, sizeof(VAR_11));
    VAR_11.reg_oper.status = VAR_5;


    if (VAR_9->state == VAR_3) {
        FUNC_4 (VAR_9);
    }

    for (VAR_12 = 0; VAR_12 < VAR_0; VAR_12 ++) {
        if (!VAR_9->cl_rcb[VAR_12].in_use) {
            if ((VAR_13 == ((void*)0)) || (VAR_9->cl_rcb[VAR_12].client_if = FUNC_3(VAR_13, &VAR_8)) == 0) {
                FUNC_1("Register with GATT stack failed.\n");
                VAR_15 = VAR_4;
            } else {
                VAR_9->cl_rcb[VAR_12].in_use = VAR_7;
                VAR_9->cl_rcb[VAR_12].p_cback = VAR_10->api_reg.p_cback;
                FUNC_6(&VAR_9->cl_rcb[VAR_12].app_uuid, VAR_13, sizeof(tBT_UUID));


                VAR_11.reg_oper.client_if = VAR_9->cl_rcb[VAR_12].client_if;

                if ((VAR_14 = (tBTA_GATTC_INT_START_IF *) FUNC_8(sizeof(tBTA_GATTC_INT_START_IF))) != ((void*)0)) {
                    VAR_14->hdr.event = VAR_1;
                    VAR_14->client_if = VAR_9->cl_rcb[VAR_12].client_if;
                    FUNC_0("GATTC getbuf sucess.\n");
                    FUNC_5(VAR_14);
                    VAR_15 = VAR_6;
                } else {
                    FUNC_2(VAR_9->cl_rcb[VAR_12].client_if);

                    VAR_15 = VAR_5;
                    FUNC_7( &VAR_9->cl_rcb[VAR_12], 0 , sizeof(tBTA_GATTC_RCB));
                }
                break;
            }
        }
    }


    if (VAR_10->api_reg.p_cback) {
        if (VAR_13 != ((void*)0)) {
            FUNC_6(&(VAR_11.reg_oper.app_uuid), VAR_13, sizeof(tBT_UUID));
        }
        VAR_11.reg_oper.status = VAR_15;
        (*VAR_10->api_reg.p_cback)(VAR_2, (tBTA_GATTC *)&VAR_11);
    }
}
