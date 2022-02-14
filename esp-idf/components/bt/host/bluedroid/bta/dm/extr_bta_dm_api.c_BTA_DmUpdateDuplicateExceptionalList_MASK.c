
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int tBTA_UPDATE_DUPLICATE_EXCEPTIONAL_LIST_CMPL_CBACK ;
struct TYPE_4__ {int event; } ;
struct TYPE_5__ {int device_info; int exceptional_list_cb; int type; int subcode; TYPE_1__ hdr; } ;
typedef TYPE_2__ tBTA_DM_API_UPDATE_DUPLICATE_EXCEPTIONAL_LIST ;
typedef int UINT8 ;
typedef int UINT32 ;
typedef int BD_ADDR ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ,int ,int) ;
 scalar_t__ FUNC_2 (int) ;

void FUNC_3(UINT8 VAR_1, UINT32 VAR_2, BD_ADDR VAR_3, tBTA_UPDATE_DUPLICATE_EXCEPTIONAL_LIST_CMPL_CBACK VAR_4)
{
    tBTA_DM_API_UPDATE_DUPLICATE_EXCEPTIONAL_LIST *VAR_5;
    if ((VAR_5 = (tBTA_DM_API_UPDATE_DUPLICATE_EXCEPTIONAL_LIST *)FUNC_2(sizeof(tBTA_DM_API_UPDATE_DUPLICATE_EXCEPTIONAL_LIST))) != ((void*)0)) {
        VAR_5->hdr.event = VAR_0;
        VAR_5->subcode = VAR_1;
        VAR_5->type = VAR_2;
        VAR_5->exceptional_list_cb = VAR_4;
        FUNC_1(VAR_5->device_info, VAR_3, sizeof(BD_ADDR));

        FUNC_0(VAR_5);
    }
}
