
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int tBTA_GATT_STATUS ;
typedef int tBTA_GATTC_SERV ;
struct TYPE_4__ {TYPE_2__* clcb; } ;
typedef TYPE_1__ tBTA_GATTC_CB ;
typedef size_t UINT8 ;
struct TYPE_5__ {int status; int * p_srcb; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_0 (TYPE_2__*,int ,int *) ;

void FUNC_1(tBTA_GATTC_SERV *VAR_3, tBTA_GATT_STATUS VAR_4)
{
    tBTA_GATTC_CB *VAR_5 = &VAR_2;
    UINT8 VAR_6;

    for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6 ++) {
        if (VAR_5->clcb[VAR_6].p_srcb == VAR_3) {
            VAR_5->clcb[VAR_6].status = VAR_4;
            FUNC_0(&VAR_5->clcb[VAR_6], VAR_1, ((void*)0));
        }
    }
}
