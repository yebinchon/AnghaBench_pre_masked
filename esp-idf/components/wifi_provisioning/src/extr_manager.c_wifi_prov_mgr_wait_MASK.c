
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ prov_state; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int) ;

void FUNC_4(void)
{
    if (!VAR_4) {
        FUNC_1(VAR_0, "Provisioning manager not initialized");
        return;
    }

    while (1) {
        FUNC_0(VAR_4);
        if (VAR_3 &&
            VAR_3->prov_state != VAR_1) {
            FUNC_2(VAR_4);
            FUNC_3(1000 / VAR_2);
            continue;
        }
        break;
    }
    FUNC_2(VAR_4);
}
