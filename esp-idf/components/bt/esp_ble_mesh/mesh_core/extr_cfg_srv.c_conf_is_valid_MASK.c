
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bt_mesh_cfg_srv {int relay; int beacon; scalar_t__ default_ttl; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static bool FUNC_0(struct bt_mesh_cfg_srv *VAR_1)
{
    if (VAR_1->relay > 0x02) {
        return 0;
    }

    if (VAR_1->beacon > 0x01) {
        return 0;
    }

    if (VAR_1->default_ttl > VAR_0) {
        return 0;
    }

    return 1;
}
