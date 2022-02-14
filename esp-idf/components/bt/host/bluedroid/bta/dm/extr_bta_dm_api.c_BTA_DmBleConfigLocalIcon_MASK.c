
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_5__ {int event; } ;
struct TYPE_6__ {int icon; TYPE_1__ hdr; } ;
typedef TYPE_2__ tBTA_DM_API_LOCAL_ICON ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int ,int) ;
 scalar_t__ FUNC_2 (int) ;

void FUNC_3(uint16_t VAR_1)
{
    tBTA_DM_API_LOCAL_ICON *VAR_2;

    if ((VAR_2 = (tBTA_DM_API_LOCAL_ICON *) FUNC_2(sizeof(tBTA_DM_API_LOCAL_ICON))) != ((void*)0)) {
        FUNC_1 (VAR_2, 0, sizeof(tBTA_DM_API_LOCAL_ICON));

        VAR_2->hdr.event = VAR_0;
        VAR_2->icon = VAR_1;
        FUNC_0(VAR_2);
    }
}
