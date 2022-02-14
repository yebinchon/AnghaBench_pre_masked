
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bt_mesh_conn {int ref; int handle; } ;


 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

struct bt_mesh_conn *FUNC_3(struct bt_mesh_conn *VAR_0)
{
    FUNC_2(&VAR_0->ref);

    FUNC_0("handle %u ref %u", VAR_0->handle, FUNC_1(&VAR_0->ref));

    return VAR_0;
}
