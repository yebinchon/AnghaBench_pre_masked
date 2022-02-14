
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bt_mesh_adv_param {int options; int interval_min; int interval_max; } ;
struct TYPE_2__ {scalar_t__ hci_version; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__ VAR_2 ;

__attribute__((used)) static bool FUNC_0(const struct bt_mesh_adv_param *VAR_3)
{
    if (!(VAR_3->options & VAR_0)) {






    }

    if (VAR_3->interval_min > VAR_3->interval_max ||
            VAR_3->interval_min < 0x0020 || VAR_3->interval_max > 0x4000) {
        return 0;
    }

    return 1;
}
