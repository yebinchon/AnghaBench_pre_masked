
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_16__ {int (* p_cback ) (int ,TYPE_6__*) ;} ;
typedef TYPE_3__ tBTA_GATTC_RCB ;
struct TYPE_14__ {int assoc_addr; int src_addr; scalar_t__ is_assoc; int client_if; } ;
struct TYPE_17__ {TYPE_1__ api_assoc; } ;
typedef TYPE_4__ tBTA_GATTC_DATA ;
struct TYPE_18__ {scalar_t__ state; } ;
typedef TYPE_5__ tBTA_GATTC_CLCB ;
typedef int tBTA_GATTC_CB ;
struct TYPE_15__ {void* status; int client_if; } ;
struct TYPE_19__ {TYPE_2__ set_assoc; int member_0; } ;
typedef TYPE_6__ tBTA_GATTC ;
typedef int BOOLEAN ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_3__* FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 TYPE_5__* FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,TYPE_6__*) ;
 int FUNC_5 (int ,TYPE_6__*) ;
 int FUNC_6 (int ,TYPE_6__*) ;
 int FUNC_7 (int ,TYPE_6__*) ;

void FUNC_8(tBTA_GATTC_CB *VAR_9, tBTA_GATTC_DATA *VAR_10)
{
    tBTA_GATTC VAR_11 = {0};
    VAR_11.set_assoc.client_if = VAR_10->api_assoc.client_if;
    BOOLEAN VAR_12 = VAR_7;
    tBTA_GATTC_CLCB *VAR_13 = FUNC_3(VAR_10->api_assoc.client_if,
                                                             VAR_10->api_assoc.assoc_addr, VAR_6);
    tBTA_GATTC_RCB *VAR_14 = FUNC_0(VAR_10->api_assoc.client_if);
    if (VAR_13 != ((void*)0)) {
        if (VAR_13->state == VAR_1 || VAR_13->state == VAR_2) {
            VAR_11.set_assoc.status = VAR_3;
            if (VAR_14 != ((void*)0)) {
                (*VAR_14->p_cback)(VAR_0, &VAR_11);
                return;
            }
        }
    }

    if (VAR_10->api_assoc.is_assoc) {
        if ((VAR_12 = FUNC_1(VAR_10->api_assoc.src_addr, VAR_10->api_assoc.assoc_addr)) == VAR_8) {
            VAR_11.set_assoc.status = VAR_5;

        } else {
            VAR_11.set_assoc.status = VAR_4;
            if (VAR_14 != ((void*)0)) {
                (*VAR_14->p_cback)(VAR_0, &VAR_11);
                return;
            }
        }
    } else {
        if (( VAR_12 = FUNC_2(VAR_10->api_assoc.src_addr, VAR_10->api_assoc.assoc_addr)) == VAR_8) {
            VAR_11.set_assoc.status = VAR_5;
        } else {
            VAR_11.set_assoc.status = VAR_4;
            if (VAR_14 != ((void*)0)) {
                (*VAR_14->p_cback)(VAR_0, &VAR_11);
                return;
            }
        }
    }

    if (VAR_14 != ((void*)0)) {
        (*VAR_14->p_cback)(VAR_0, &VAR_11);
    }

    return;

}
