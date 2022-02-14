
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bt_mesh_comp {int elem_count; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 struct bt_mesh_comp const* VAR_1 ;
 int VAR_2 ;

int FUNC_1(const struct bt_mesh_comp *VAR_3)
{

    if (!VAR_3->elem_count) {
        return -VAR_0;
    }

    VAR_1 = VAR_3;

    FUNC_0(VAR_2, ((void*)0));

    return 0;
}
