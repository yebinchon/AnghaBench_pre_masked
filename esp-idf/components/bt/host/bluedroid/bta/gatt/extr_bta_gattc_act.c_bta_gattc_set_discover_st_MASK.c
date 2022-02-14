
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int tBTA_GATTC_SERV ;
struct TYPE_5__ {TYPE_1__* clcb; } ;
typedef TYPE_2__ tBTA_GATTC_CB ;
typedef size_t UINT8 ;
struct TYPE_4__ {int state; int status; int * p_srcb; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__ VAR_3 ;

void FUNC_0(tBTA_GATTC_SERV *VAR_4)
{
    tBTA_GATTC_CB *VAR_5 = &VAR_3;
    UINT8 VAR_6;

    for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6 ++) {
        if (VAR_5->clcb[VAR_6].p_srcb == VAR_4) {
            VAR_5->clcb[VAR_6].status = VAR_2;
            VAR_5->clcb[VAR_6].state = VAR_1;
        }
    }
}
