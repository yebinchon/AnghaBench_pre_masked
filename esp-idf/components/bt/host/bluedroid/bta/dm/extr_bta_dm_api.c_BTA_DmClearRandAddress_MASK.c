
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int event; } ;
struct TYPE_6__ {TYPE_1__ hdr; } ;
typedef TYPE_2__ tBTA_DM_APT_CLEAR_ADDR ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int ,int) ;
 scalar_t__ FUNC_2 (int) ;

void FUNC_3(void)
{
    tBTA_DM_APT_CLEAR_ADDR *VAR_1;
    if ((VAR_1 = (tBTA_DM_APT_CLEAR_ADDR *) FUNC_2(sizeof(tBTA_DM_APT_CLEAR_ADDR))) != ((void*)0)) {
        FUNC_1(VAR_1, 0, sizeof(tBTA_DM_APT_CLEAR_ADDR));
        VAR_1->hdr.event = VAR_0;
        FUNC_0(VAR_1);
    }
}
