
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
struct TYPE_10__ {int remote_bda; int client_if; } ;
struct TYPE_13__ {TYPE_1__ enc_cmpl; } ;
typedef TYPE_4__ tBTA_GATTC_DATA ;
typedef int tBTA_GATTC_CB ;
struct TYPE_11__ {int remote_bda; int client_if; } ;
struct TYPE_14__ {TYPE_2__ enc_cmpl; } ;
typedef TYPE_5__ tBTA_GATTC ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ) ;
 TYPE_3__* FUNC_2 (int ) ;
 int FUNC_3 (TYPE_5__*,int ,int) ;
 int FUNC_4 (int ,TYPE_5__*) ;

void FUNC_5(tBTA_GATTC_CB *VAR_1, tBTA_GATTC_DATA *VAR_2)
{
    tBTA_GATTC_RCB *VAR_3;
    tBTA_GATTC VAR_4;
    FUNC_0(VAR_1);

    VAR_3 = FUNC_2(VAR_2->enc_cmpl.client_if);

    if (VAR_3 && VAR_3->p_cback) {
        FUNC_3(&VAR_4, 0, sizeof(tBTA_GATTC));

        VAR_4.enc_cmpl.client_if = VAR_2->enc_cmpl.client_if;
        FUNC_1(VAR_4.enc_cmpl.remote_bda, VAR_2->enc_cmpl.remote_bda);

        (*VAR_3->p_cback)(VAR_0, &VAR_4);
    }
}
