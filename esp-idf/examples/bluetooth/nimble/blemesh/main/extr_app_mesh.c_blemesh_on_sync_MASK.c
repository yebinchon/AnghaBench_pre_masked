
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int type; int val; } ;
typedef TYPE_1__ ble_addr_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,...) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,TYPE_1__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int *,int *) ;
 scalar_t__ FUNC_6 () ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_7 () ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_8(void)
{
    int VAR_4;
    ble_addr_t VAR_5;

    FUNC_0(VAR_3, "Bluetooth initialized\n");


    VAR_4 = FUNC_3(1, &VAR_5);
    FUNC_2(VAR_4 == 0);
    VAR_4 = FUNC_4(VAR_5.val);
    FUNC_2(VAR_4 == 0);

    VAR_4 = FUNC_5(VAR_5.type, &VAR_2, &VAR_1);
    if (VAR_4) {
        FUNC_0(VAR_3, "Initializing mesh failed (err %d)\n", VAR_4);
        return;
    }

    FUNC_0(VAR_3, "Mesh initialized\n");

    if (FUNC_1(VAR_0)) {
        FUNC_7();
    }

    if (FUNC_6()) {
        FUNC_0(VAR_3, "Mesh network restored from flash\n");
    }
}
