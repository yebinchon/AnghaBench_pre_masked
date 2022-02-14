
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int tBTA_DM_MSG ;
struct TYPE_2__ {int peer_bdaddr; scalar_t__ gatt_disc_active; int name_discover_done; int (* p_search_cback ) (int ,int *) ;} ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 TYPE_1__ VAR_1 ;
 int FUNC_3 (int ,int *) ;

void FUNC_4 (tBTA_DM_MSG *VAR_2)
{
    FUNC_1(VAR_2);
    if (VAR_1.p_search_cback) {
        VAR_1.p_search_cback(VAR_0, ((void*)0));
    }
    if (!VAR_1.name_discover_done) {
        FUNC_0();
    }

    if (VAR_1.gatt_disc_active) {
        FUNC_2(VAR_1.peer_bdaddr);
    }


}
