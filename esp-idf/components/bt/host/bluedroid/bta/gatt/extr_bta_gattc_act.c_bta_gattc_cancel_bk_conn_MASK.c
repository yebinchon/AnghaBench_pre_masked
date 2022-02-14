
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int (* p_cback ) (int ,TYPE_3__*) ;} ;
typedef TYPE_1__ tBTA_GATTC_RCB ;
struct TYPE_8__ {int client_if; int remote_bda; } ;
typedef TYPE_2__ tBTA_GATTC_API_CANCEL_OPEN ;
struct TYPE_9__ {int status; } ;
typedef TYPE_3__ tBTA_GATTC ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ,int ,int ) ;
 TYPE_1__* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (int ,TYPE_3__*) ;

void FUNC_5(tBTA_GATTC_API_CANCEL_OPEN *VAR_4)
{
    tBTA_GATTC_RCB *VAR_5;
    tBTA_GATTC VAR_6;
    VAR_6.status = VAR_1;


    if (FUNC_3(VAR_4->client_if, VAR_4->remote_bda, VAR_3, VAR_3)) {
        if (FUNC_1(VAR_4->client_if, VAR_4->remote_bda, VAR_3)) {
            VAR_6.status = VAR_2;
        } else {
            FUNC_0("bta_gattc_cancel_bk_conn failed");
        }
    }
    VAR_5 = FUNC_2(VAR_4->client_if);

    if (VAR_5 && VAR_5->p_cback) {
        (*VAR_5->p_cback)(VAR_0, &VAR_6);
    }

}
