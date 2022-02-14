
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int status; int client_if; } ;
struct TYPE_11__ {TYPE_1__ reg_oper; int client_if; int (* p_cback ) (int ,TYPE_2__*) ;} ;
typedef TYPE_2__ tBTA_GATTC_RCB ;
typedef int tBTA_GATTC_IF ;
typedef int (* tBTA_GATTC_CBACK ) (int ,TYPE_2__*) ;
struct TYPE_12__ {scalar_t__ state; } ;
typedef TYPE_4__ tBTA_GATTC_CB ;
typedef TYPE_2__ tBTA_GATTC ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 TYPE_4__ VAR_4 ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (TYPE_2__*,int ,int) ;
 int FUNC_3 (int ,TYPE_2__*) ;

__attribute__((used)) static void FUNC_4(tBTA_GATTC_RCB *VAR_5)
{
    tBTA_GATTC_CB *VAR_6 = &VAR_4;
    tBTA_GATTC_IF VAR_7 = VAR_5->client_if;
    tBTA_GATTC VAR_8;
    tBTA_GATTC_CBACK *VAR_9 = &VAR_5->p_cback;

    FUNC_2(&VAR_8, 0, sizeof(tBTA_GATTC));

    FUNC_0(VAR_5->client_if);
    FUNC_2(VAR_5, 0, sizeof(tBTA_GATTC_RCB));

    VAR_8.reg_oper.client_if = VAR_7;
    VAR_8.reg_oper.status = VAR_3;

    if (VAR_9)

    {
        (*VAR_9)(VAR_0, (tBTA_GATTC *)&VAR_8);
    }

    if (FUNC_1() == 0 && VAR_6->state == VAR_2) {
        VAR_6->state = VAR_1;
    }
}
