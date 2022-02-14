
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int scanning; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;

bool FUNC_3(void)
{
    bool VAR_3 = 1;
    if (!VAR_2) {
        FUNC_1(VAR_0, "Provisioning manager not initialized");
        return VAR_3;
    }

    FUNC_0(VAR_2);
    if (!VAR_1) {
        FUNC_1(VAR_0, "Provisioning manager not initialized");
        FUNC_2(VAR_2);
        return VAR_3;
    }

    VAR_3 = !VAR_1->scanning;
    FUNC_2(VAR_2);
    return VAR_3;
}
