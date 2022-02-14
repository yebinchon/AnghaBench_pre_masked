
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_9__ ;
typedef struct TYPE_13__ TYPE_8__ ;
typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
struct TYPE_10__ {int states; int features; } ;
struct TYPE_14__ {TYPE_1__ le; int manufacturer; int lmp_subversion; int hci_revision; int lmp_version; int hci_version; int * features; } ;
struct TYPE_13__ {int * (* get_ble_supported_states ) () ;TYPE_2__* (* get_bt_version ) () ;TYPE_7__* (* get_features_ble ) () ;} ;
struct TYPE_12__ {int * as_array; } ;
struct TYPE_11__ {int manufacturer; int lmp_subversion; int hci_revision; int lmp_version; int hci_version; } ;


 int VAR_0 ;
 int FUNC_0 (int,int const*) ;
 TYPE_9__ VAR_1 ;
 TYPE_8__* FUNC_1 () ;
 int FUNC_2 (int ,int const*,int) ;
 TYPE_7__* FUNC_3 () ;
 TYPE_2__* FUNC_4 () ;
 TYPE_2__* FUNC_5 () ;
 TYPE_2__* FUNC_6 () ;
 TYPE_2__* FUNC_7 () ;
 TYPE_2__* FUNC_8 () ;
 int * FUNC_9 () ;

void FUNC_10(void)
{
    const uint8_t *VAR_2 = FUNC_1()->get_features_ble()->as_array;
    if (VAR_2 != ((void*)0)) {
        FUNC_2(VAR_1.features[0], VAR_2, 8);
        FUNC_2(VAR_1.le.features, VAR_2, 8);
    }
    VAR_1.hci_version = FUNC_1()->get_bt_version()->hci_version;

    VAR_1.lmp_version = FUNC_1()->get_bt_version()->lmp_version;
    VAR_1.hci_revision = FUNC_1()->get_bt_version()->hci_revision;
    VAR_1.lmp_subversion = FUNC_1()->get_bt_version()->lmp_subversion;
    VAR_1.manufacturer = FUNC_1()->get_bt_version()->manufacturer;

    const uint8_t *VAR_3 = FUNC_1()->get_ble_supported_states();
    uint64_t VAR_4 = 0, VAR_5 = 0;
    FUNC_0(VAR_4, VAR_3);
    FUNC_0(VAR_5, VAR_3);
    VAR_1.le.states = (VAR_5 << 32) | VAR_4;
}
