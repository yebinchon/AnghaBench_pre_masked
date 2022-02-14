
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct ble_gatt_chr_def {int flags; int * uuid; int access_cb; } ;
typedef int ble_uuid_t ;
struct TYPE_7__ {int type; } ;
struct TYPE_9__ {void* value; TYPE_1__ u; int member_0; } ;
typedef TYPE_3__ ble_uuid128_t ;
struct TYPE_10__ {TYPE_2__* g_nu_lookup; } ;
struct TYPE_8__ {TYPE_3__ uuid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*) ;
 int VAR_5 ;
 TYPE_3__* VAR_6 ;
 scalar_t__ FUNC_1 (int,int) ;
 int VAR_7 ;
 int FUNC_2 (void*,TYPE_3__*,int) ;
 TYPE_4__* VAR_8 ;

__attribute__((used)) static int
FUNC_3(struct ble_gatt_chr_def *VAR_9, int VAR_10)
{



    ble_uuid128_t VAR_11 = {0};
    VAR_11.u.type = VAR_3;
    FUNC_2(VAR_11.value, VAR_6, VAR_2);
    FUNC_2(&VAR_11.value[12], &VAR_8->g_nu_lookup[VAR_10].uuid, 2);

    (VAR_9 + VAR_10)->flags = VAR_0 | VAR_1;
    (VAR_9 + VAR_10)->access_cb = VAR_7;





    (VAR_9 + VAR_10)->uuid = (ble_uuid_t *)FUNC_1(1,
                                    sizeof(ble_uuid128_t));
    if ((VAR_9 + VAR_10)->uuid == ((void*)0)) {
        FUNC_0(VAR_5, "Error allocating memory for characteristic UUID");
        return VAR_4;
    }
    FUNC_2((void *)(VAR_9 + VAR_10)->uuid, &VAR_11,
           sizeof(ble_uuid128_t));

    return 0;
}
