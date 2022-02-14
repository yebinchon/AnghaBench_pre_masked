
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int device_name; } ;
typedef TYPE_1__ simple_ble_cfg_t ;
struct TYPE_8__ {int gatts_register_cb; int sync_cb; int reset_cb; } ;
struct TYPE_7__ {int name_is_complete; int name_len; int * name; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (int ,char*) ;
 int VAR_0 ;
 void* VAR_1 ;
 TYPE_5__ VAR_2 ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (int ) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (TYPE_1__ const*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_9 (int ) ;
 int FUNC_10 () ;
 TYPE_3__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_11 (scalar_t__) ;

__attribute__((used)) static int FUNC_12(const simple_ble_cfg_t *VAR_8)
{
    VAR_1 = (void *)VAR_8;
    int VAR_9;
    FUNC_1(VAR_0, "Free mem at start of simple_ble_init %d", FUNC_6());

    FUNC_0(FUNC_7());
    FUNC_10();


    VAR_2.reset_cb = VAR_6;
    VAR_2.sync_cb = VAR_7;
    VAR_2.gatts_register_cb = VAR_3;

    VAR_9 = FUNC_8(VAR_8);
    if (VAR_9 != 0) {
        FUNC_2(VAR_0, "Error initializing GATT server");
        return VAR_9;
    }


    VAR_9 = FUNC_5(VAR_8->device_name);
    if (VAR_9 != 0) {
        FUNC_2(VAR_0, "Error setting device name");
        return VAR_9;
    }

    VAR_5.name = (void *) FUNC_4();
    if (VAR_5.name != ((void*)0)) {
        VAR_5.name_len = FUNC_11(FUNC_4());
        VAR_5.name_is_complete = 1;
    }


    FUNC_3();
    FUNC_9(VAR_4);

    return 0;
}
