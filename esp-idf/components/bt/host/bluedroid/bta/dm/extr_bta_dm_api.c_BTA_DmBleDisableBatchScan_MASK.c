
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int tBTA_DM_BLE_REF_VALUE ;
struct TYPE_4__ {int event; } ;
struct TYPE_5__ {int ref_value; TYPE_1__ hdr; } ;
typedef TYPE_2__ tBTA_DM_API_DISABLE_SCAN ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (int) ;

extern void FUNC_2(tBTA_DM_BLE_REF_VALUE VAR_1)
{
    tBTA_DM_API_DISABLE_SCAN *VAR_2;

    if ((VAR_2 = (tBTA_DM_API_DISABLE_SCAN *)
                 FUNC_1(sizeof(tBTA_DM_API_DISABLE_SCAN))) != ((void*)0)) {
        VAR_2->hdr.event = VAR_0;
        VAR_2->ref_value = VAR_1;
        FUNC_0(VAR_2);
    }
}
