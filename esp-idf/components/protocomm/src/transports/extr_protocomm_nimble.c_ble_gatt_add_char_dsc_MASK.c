
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
struct ble_gatt_dsc_def {void* arg; int access_cb; int att_flags; int * uuid; } ;
struct ble_gatt_chr_def {struct ble_gatt_dsc_def* descriptors; } ;
typedef int ble_uuid_t ;
typedef int ble_uuid16_t ;
struct TYPE_4__ {TYPE_1__* g_nu_lookup; } ;
struct TYPE_3__ {scalar_t__ name; } ;


 int VAR_0 ;
 int * FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,char*) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int,int) ;
 int VAR_3 ;
 int FUNC_3 (void*,int *,int) ;
 TYPE_2__* VAR_4 ;

__attribute__((used)) static int
FUNC_4(struct ble_gatt_chr_def *VAR_5, int VAR_6, uint16_t VAR_7)
{
    ble_uuid_t *VAR_8 = FUNC_0(VAR_7);



    (VAR_5 + VAR_6)->descriptors = (struct ble_gatt_dsc_def *) FUNC_2(2,
                                           sizeof(struct ble_gatt_dsc_def));
    if ((VAR_5 + VAR_6)->descriptors == ((void*)0)) {
        FUNC_1(VAR_2, "Error while allocating memory for characteristic descriptor");
        return VAR_1;
    }

    (VAR_5 + VAR_6)->descriptors[0].uuid = (ble_uuid_t *) FUNC_2(1,
            sizeof(ble_uuid16_t));
    if ((VAR_5 + VAR_6)->descriptors[0].uuid == ((void*)0)) {
        FUNC_1(VAR_2, "Error while allocating memory for characteristic descriptor");
        return VAR_1;
    }
    FUNC_3((void *)(VAR_5 + VAR_6)->descriptors[0].uuid, VAR_8,
           sizeof(ble_uuid16_t));
    (VAR_5 + VAR_6)->descriptors[0].att_flags = VAR_0;
    (VAR_5 + VAR_6)->descriptors[0].access_cb = VAR_3;
    (VAR_5 + VAR_6)->descriptors[0].arg = (void *)
            VAR_4->g_nu_lookup[VAR_6].name;

    return 0;
}
