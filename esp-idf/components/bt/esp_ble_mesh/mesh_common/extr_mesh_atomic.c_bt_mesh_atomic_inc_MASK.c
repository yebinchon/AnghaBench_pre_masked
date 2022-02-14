
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bt_mesh_atomic_val_t ;
typedef int bt_mesh_atomic_t ;


 unsigned int FUNC_0 () ;
 int FUNC_1 (unsigned int) ;

bt_mesh_atomic_val_t FUNC_2(bt_mesh_atomic_t *VAR_0)
{
    unsigned int VAR_1;
    bt_mesh_atomic_val_t VAR_2;

    VAR_1 = FUNC_0();

    VAR_2 = *VAR_0;
    (*VAR_0)++;

    FUNC_1(VAR_1);

    return VAR_2;
}
