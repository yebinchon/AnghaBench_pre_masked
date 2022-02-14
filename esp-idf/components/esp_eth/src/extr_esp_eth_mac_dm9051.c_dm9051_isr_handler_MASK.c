
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int rx_task_hdl; } ;
typedef TYPE_1__ emac_dm9051_t ;
typedef scalar_t__ BaseType_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,scalar_t__*) ;

__attribute__((used)) static void FUNC_2(void *VAR_1)
{
    emac_dm9051_t *VAR_2 = (emac_dm9051_t *)VAR_1;
    BaseType_t VAR_3 = VAR_0;

    FUNC_1(VAR_2->rx_task_hdl, &VAR_3);
    if (VAR_3 != VAR_0) {
        FUNC_0();
    }
}
