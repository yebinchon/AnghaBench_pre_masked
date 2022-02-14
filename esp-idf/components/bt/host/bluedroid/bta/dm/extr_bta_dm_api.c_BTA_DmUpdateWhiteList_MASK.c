
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int event; } ;
struct TYPE_5__ {int remote_addr; int * add_wl_cb; int addr_type; int add_remove; TYPE_1__ hdr; } ;
typedef TYPE_2__ tBTA_DM_API_UPDATE_WHITE_LIST ;
typedef int tBTA_ADD_WHITELIST_CBACK ;
typedef int tBLE_ADDR_TYPE ;
typedef int BOOLEAN ;
typedef int BD_ADDR ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ,int ,int) ;
 scalar_t__ FUNC_2 (int) ;

void FUNC_3(BOOLEAN VAR_1, BD_ADDR VAR_2, tBLE_ADDR_TYPE VAR_3, tBTA_ADD_WHITELIST_CBACK *VAR_4)
{
    tBTA_DM_API_UPDATE_WHITE_LIST *VAR_5;
    if ((VAR_5 = (tBTA_DM_API_UPDATE_WHITE_LIST *)FUNC_2(sizeof(tBTA_DM_API_UPDATE_WHITE_LIST))) != ((void*)0)) {
        VAR_5->hdr.event = VAR_0;
        VAR_5->add_remove = VAR_1;
        VAR_5->addr_type = VAR_3;
        VAR_5->add_wl_cb = VAR_4;
        FUNC_1(VAR_5->remote_addr, VAR_2, sizeof(BD_ADDR));

        FUNC_0(VAR_5);
    }
}
