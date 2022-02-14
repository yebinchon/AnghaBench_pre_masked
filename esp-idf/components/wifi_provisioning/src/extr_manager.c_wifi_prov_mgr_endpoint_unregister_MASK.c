
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ prov_state; int pc; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (int ,char const*) ;
 TYPE_1__* VAR_3 ;
 int VAR_4 ;

void FUNC_4(const char *VAR_5)
{
    if (!VAR_4) {
        FUNC_1(VAR_0, "Provisioning manager not initialized");
        return;
    }

    FUNC_0(VAR_4);
    if (VAR_3 &&
        VAR_3->prov_state > VAR_1 &&
        VAR_3->prov_state < VAR_2) {
        FUNC_3(VAR_3->pc, VAR_5);
    }
    FUNC_2(VAR_4);
}
