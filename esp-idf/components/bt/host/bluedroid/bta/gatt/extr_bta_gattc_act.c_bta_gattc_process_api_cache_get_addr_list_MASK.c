
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
struct TYPE_9__ {int client_if; } ;
struct TYPE_12__ {TYPE_1__ api_get_addr; } ;
typedef TYPE_4__ tBTA_GATTC_DATA ;
typedef int tBTA_GATTC_CB ;
struct TYPE_10__ {int num_addr; int * bda_list; int status; int client_if; } ;
struct TYPE_13__ {TYPE_2__ get_addr_list; int member_0; } ;
typedef TYPE_5__ tBTA_GATTC ;
typedef int UINT8 ;
typedef int BD_ADDR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_3__* FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;
 int FUNC_3 (void*) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int ,TYPE_5__*) ;

void FUNC_6(tBTA_GATTC_CB *VAR_4, tBTA_GATTC_DATA *VAR_5)
{
    tBTA_GATTC VAR_6 = {0};
    tBTA_GATTC_RCB *VAR_7 = FUNC_0(VAR_5->api_get_addr.client_if);
    UINT8 VAR_8 = FUNC_2();
    VAR_6.get_addr_list.client_if = VAR_5->api_get_addr.client_if;

    if (VAR_8 != 0) {
        VAR_6.get_addr_list.num_addr = VAR_8;
        VAR_6.get_addr_list.bda_list = (BD_ADDR *)FUNC_4(sizeof(BD_ADDR)*VAR_8);
        if (VAR_6.get_addr_list.bda_list != ((void*)0)) {
            FUNC_1(VAR_6.get_addr_list.bda_list);
            VAR_6.get_addr_list.status = VAR_3;
        } else {
            VAR_6.get_addr_list.status = VAR_1;
        }
    } else {
        VAR_6.get_addr_list.status = VAR_2;
    }

    if (VAR_7 != ((void*)0)) {
        (* VAR_7->p_cback)(VAR_0, &VAR_6);
    }


    if (VAR_6.get_addr_list.bda_list != ((void*)0)) {
        FUNC_3((void *)VAR_6.get_addr_list.bda_list);
    }

}
