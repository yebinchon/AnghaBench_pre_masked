
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int (* p_cback ) (int ,TYPE_5__*) ;} ;
typedef TYPE_3__ tBTA_GATTC_RCB ;
struct TYPE_10__ {int start; int client_if; } ;
struct TYPE_12__ {TYPE_2__ api_listen; } ;
typedef TYPE_4__ tBTA_GATTC_DATA ;
typedef int tBTA_GATTC_CB ;
struct TYPE_9__ {int status; int client_if; } ;
struct TYPE_13__ {TYPE_1__ reg_oper; } ;
typedef TYPE_5__ tBTA_GATTC ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;
 TYPE_3__* FUNC_2 (int ) ;
 int FUNC_3 (int ,TYPE_5__*) ;

void FUNC_4(tBTA_GATTC_CB *VAR_1, tBTA_GATTC_DATA *VAR_2)
{
    tBTA_GATTC_RCB *VAR_3 = FUNC_2(VAR_2->api_listen.client_if);
    tBTA_GATTC VAR_4;
    FUNC_1(VAR_1);

    VAR_4.reg_oper.client_if = VAR_2->api_listen.client_if;
    VAR_4.reg_oper.status = FUNC_0(VAR_2->api_listen.start, ((void*)0));

    if (VAR_3 && VAR_3->p_cback) {
        (*VAR_3->p_cback)(VAR_0, &VAR_4);
    }
}
