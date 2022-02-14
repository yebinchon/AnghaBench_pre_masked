
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bt_mesh_model {size_t elem_idx; } ;
struct bt_mesh_elem {int dummy; } ;
struct TYPE_2__ {struct bt_mesh_elem* elem; } ;


 TYPE_1__* VAR_0 ;

struct bt_mesh_elem *FUNC_0(struct bt_mesh_model *VAR_1)
{
    return &VAR_0->elem[VAR_1->elem_idx];
}
