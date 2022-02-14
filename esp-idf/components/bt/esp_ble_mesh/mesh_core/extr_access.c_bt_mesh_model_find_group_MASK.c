
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16_t ;
struct bt_mesh_model {scalar_t__* groups; } ;


 int FUNC_0 (scalar_t__*) ;

u16_t *FUNC_1(struct bt_mesh_model *VAR_0, u16_t VAR_1)
{
    int VAR_2;

    for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0->groups); VAR_2++) {
        if (VAR_0->groups[VAR_2] == VAR_1) {
            return &VAR_0->groups[VAR_2];
        }
    }

    return ((void*)0);
}
