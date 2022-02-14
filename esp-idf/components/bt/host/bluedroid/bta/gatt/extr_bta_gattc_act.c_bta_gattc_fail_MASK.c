
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int tBTA_GATTC_DATA ;
struct TYPE_3__ {scalar_t__ status; int state; } ;
typedef TYPE_1__ tBTA_GATTC_CLCB ;


 int FUNC_0 (char*,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *) ;

void FUNC_2(tBTA_GATTC_CLCB *VAR_1, tBTA_GATTC_DATA *VAR_2)
{
    FUNC_1(VAR_2);

    if (VAR_1->status == VAR_0) {
        FUNC_0("operation not supported at current state [%d]", VAR_1->state);
    }
}
