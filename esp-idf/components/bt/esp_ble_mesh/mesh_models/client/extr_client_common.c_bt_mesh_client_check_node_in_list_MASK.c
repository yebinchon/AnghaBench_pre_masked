
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u16_t ;
typedef int sys_snode_t ;
typedef int sys_slist_t ;
struct TYPE_3__ {scalar_t__ addr; } ;
struct TYPE_4__ {TYPE_1__ ctx; } ;
typedef TYPE_2__ bt_mesh_client_node_t ;


 scalar_t__ FUNC_0 (int *) ;
 int * FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;

__attribute__((used)) static bool FUNC_3(sys_slist_t *VAR_0, u16_t VAR_1)
{
    if (FUNC_0(VAR_0)) {
        return 0;
    }

    sys_snode_t *VAR_2 = ((void*)0); bt_mesh_client_node_t *VAR_3 = ((void*)0);
    for (VAR_2 = FUNC_1(VAR_0);
            VAR_2 != ((void*)0); VAR_2 = FUNC_2(VAR_2)) {
        VAR_3 = (bt_mesh_client_node_t *)VAR_2;
        if (VAR_3->ctx.addr == VAR_1) {
            return 1;
        }
    }

    return 0;
}
