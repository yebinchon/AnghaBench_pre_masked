
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int value; } ;
struct ble_gap_event {TYPE_1__ mtu; } ;
struct TYPE_4__ {int gatt_mtu; } ;


 TYPE_2__* VAR_0 ;

__attribute__((used)) static void FUNC_0(struct ble_gap_event *VAR_1, void *VAR_2)
{
    VAR_0->gatt_mtu = VAR_1->mtu.value;
    return;
}
