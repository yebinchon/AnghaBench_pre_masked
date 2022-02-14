
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int event; } ;
struct TYPE_5__ {TYPE_1__ hdr; } ;
typedef TYPE_2__ tBTA_DM_API_LOC_OOB ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (int) ;

void FUNC_2(void)
{
    tBTA_DM_API_LOC_OOB *VAR_1;

    if ((VAR_1 = (tBTA_DM_API_LOC_OOB *) FUNC_1(sizeof(tBTA_DM_API_LOC_OOB))) != ((void*)0)) {
        VAR_1->hdr.event = VAR_0;
        FUNC_0(VAR_1);
    }
}
