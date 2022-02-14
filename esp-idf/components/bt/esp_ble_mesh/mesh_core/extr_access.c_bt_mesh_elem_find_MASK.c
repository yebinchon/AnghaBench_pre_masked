
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u16_t ;
struct bt_mesh_elem {size_t addr; } ;
struct TYPE_2__ {size_t elem_count; struct bt_mesh_elem* elem; } ;


 scalar_t__ FUNC_0 (size_t) ;
 scalar_t__ FUNC_1 (struct bt_mesh_elem*,size_t) ;
 TYPE_1__* VAR_0 ;

struct bt_mesh_elem *FUNC_2(u16_t VAR_1)
{
    u16_t VAR_2;

    if (FUNC_0(VAR_1)) {
        VAR_2 = (VAR_1 - VAR_0->elem[0].addr);
        if (VAR_2 < VAR_0->elem_count) {
            return &VAR_0->elem[VAR_2];
        } else {
            return ((void*)0);
        }
    }

    for (VAR_2 = 0; VAR_2 < VAR_0->elem_count; VAR_2++) {
        struct bt_mesh_elem *VAR_3 = &VAR_0->elem[VAR_2];

        if (FUNC_1(VAR_3, VAR_1)) {
            return VAR_3;
        }
    }

    return ((void*)0);
}
