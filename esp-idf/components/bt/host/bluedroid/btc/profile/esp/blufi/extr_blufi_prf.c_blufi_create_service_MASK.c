
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int srvc_inst; int gatt_if; int enabled; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int,int ,int) ;
 int FUNC_1 (char*) ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_2(void)
{
    if (!VAR_1.enabled) {
        FUNC_1("blufi service added error.");
        return;
    }

    VAR_1.srvc_inst = 0x00;
    FUNC_0(VAR_1.gatt_if, &VAR_2, VAR_1.srvc_inst, VAR_0, 1);
}
