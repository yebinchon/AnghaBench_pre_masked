
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {int (* p_cback ) (int ,TYPE_5__*) ;} ;
typedef TYPE_3__ tBTA_GATTC_RCB ;
struct TYPE_11__ {int client_if; int * remote_bda; scalar_t__ start; } ;
struct TYPE_13__ {TYPE_2__ api_listen; } ;
typedef TYPE_4__ tBTA_GATTC_DATA ;
typedef int tBTA_GATTC_CB ;
struct TYPE_10__ {int client_if; int status; } ;
struct TYPE_14__ {int status; TYPE_1__ reg_oper; } ;
typedef TYPE_5__ tBTA_GATTC ;
typedef int BD_ADDR_PTR ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,scalar_t__,int *) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_3 (int *) ;
 int VAR_5 ;
 int FUNC_4 (int *) ;
 TYPE_3__* FUNC_5 (int ) ;
 int * FUNC_6 (int ,int *,int ) ;
 int FUNC_7 (int ,int *) ;
 scalar_t__ FUNC_8 (int ,int ,scalar_t__,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,TYPE_5__*) ;
 int FUNC_11 (int ,TYPE_5__*) ;

void FUNC_12(tBTA_GATTC_CB *VAR_6, tBTA_GATTC_DATA *VAR_7)
{
    tBTA_GATTC_RCB *VAR_8 = FUNC_5(VAR_7->api_listen.client_if);
    tBTA_GATTC VAR_9;
    FUNC_4(VAR_6);

    VAR_9.reg_oper.status = VAR_1;
    VAR_9.reg_oper.client_if = VAR_7->api_listen.client_if;

    if (VAR_8 == ((void*)0)) {
        FUNC_1("bta_gattc_listen failed, unknown client_if: %d",
                         VAR_7->api_listen.client_if);
        return;
    }

    if (FUNC_8(VAR_7->api_listen.client_if,
                               (BD_ADDR_PTR) VAR_7->api_listen.remote_bda,
                               VAR_7->api_listen.start,
                               VAR_5)) {
        if (!FUNC_2(VAR_7->api_listen.client_if,
                         VAR_7->api_listen.start,
                         VAR_7->api_listen.remote_bda)) {
            FUNC_1("Listen failure");
            (*VAR_8->p_cback)(VAR_0, &VAR_9);
        } else {
            VAR_9.status = VAR_2;

            (*VAR_8->p_cback)(VAR_0, &VAR_9);

            if (VAR_7->api_listen.start) {

                if (VAR_7->api_listen.remote_bda != ((void*)0)) {


                    if (FUNC_3(VAR_7->api_listen.remote_bda) == VAR_4 &&
                            FUNC_6(VAR_7->api_listen.client_if,
                                                       VAR_7->api_listen.remote_bda,
                                                       VAR_3) == ((void*)0)) {

                        FUNC_7(VAR_7->api_listen.client_if,
                                                 VAR_7->api_listen.remote_bda);
                    }
                }

                else {
                    FUNC_0("Listen For All now");


                    FUNC_9(VAR_7->api_listen.client_if);
                }
            }
        }
    }
}
