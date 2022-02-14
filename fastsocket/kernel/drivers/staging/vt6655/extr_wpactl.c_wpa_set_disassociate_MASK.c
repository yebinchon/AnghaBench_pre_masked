
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct viawget_wpa_param {int addr; } ;
struct TYPE_5__ {int lock; scalar_t__ bLinkPass; TYPE_1__* pMgmt; } ;
struct TYPE_4__ {int abyCurrBSSID; } ;
typedef TYPE_1__* PSMgmtObject ;
typedef TYPE_2__* PSDevice ;
typedef int HANDLE ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int *) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(PSDevice VAR_1,
         struct viawget_wpa_param *VAR_2)
{
    PSMgmtObject VAR_3 = VAR_1->pMgmt;
 int VAR_4 = 0;

    FUNC_2(&VAR_1->lock);
    if (VAR_1->bLinkPass) {
        if (!FUNC_1(VAR_2->addr, VAR_3->abyCurrBSSID, 6))
            FUNC_0((HANDLE)VAR_1, VAR_0, ((void*)0));
    }
    FUNC_3(&VAR_1->lock);

    return VAR_4;
}
