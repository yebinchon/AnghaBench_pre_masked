
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16_t ;
struct bt_mesh_subnet {scalar_t__ net_idx; } ;
struct TYPE_2__ {struct bt_mesh_subnet* sub; } ;


 int FUNC_0 (struct bt_mesh_subnet*) ;
 scalar_t__ VAR_0 ;
 TYPE_1__ VAR_1 ;

struct bt_mesh_subnet *FUNC_1(u16_t VAR_2)
{
    int VAR_3;

    if (VAR_2 == VAR_0) {
        return &VAR_1.sub[0];
    }

    for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_1.sub); VAR_3++) {
        if (VAR_1.sub[VAR_3].net_idx == VAR_2) {
            return &VAR_1.sub[VAR_3];
        }
    }

    return ((void*)0);
}
