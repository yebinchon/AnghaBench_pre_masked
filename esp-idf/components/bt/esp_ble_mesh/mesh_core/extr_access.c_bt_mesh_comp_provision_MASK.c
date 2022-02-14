
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16_t ;
struct bt_mesh_elem {int vnd_model_count; int model_count; scalar_t__ addr; } ;
struct TYPE_2__ {int elem_count; struct bt_mesh_elem* elem; } ;


 int FUNC_0 (char*,scalar_t__,int,...) ;
 TYPE_1__* VAR_0 ;
 int VAR_1 ;

void FUNC_1(u16_t VAR_2)
{
    int VAR_3;

    VAR_1 = VAR_2;

    FUNC_0("addr 0x%04x elem_count %u", VAR_2, VAR_0->elem_count);

    for (VAR_3 = 0; VAR_3 < VAR_0->elem_count; VAR_3++) {
        struct bt_mesh_elem *VAR_4 = &VAR_0->elem[VAR_3];

        VAR_4->addr = VAR_2++;

        FUNC_0("addr 0x%04x mod_count %u vnd_mod_count %u",
               VAR_4->addr, VAR_4->model_count, VAR_4->vnd_model_count);
    }
}
