
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ state; } ;
typedef TYPE_1__ tBTA_GATTC_CB ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int ,int) ;

__attribute__((used)) static void FUNC_2(tBTA_GATTC_CB *VAR_3)
{
    FUNC_0("bta_gattc_enable");

    if (VAR_3->state == VAR_0) {

        FUNC_1(&VAR_2, 0, sizeof(tBTA_GATTC_CB));
        VAR_3->state = VAR_1;
    } else {
        FUNC_0("GATTC is already enabled");
    }
}
