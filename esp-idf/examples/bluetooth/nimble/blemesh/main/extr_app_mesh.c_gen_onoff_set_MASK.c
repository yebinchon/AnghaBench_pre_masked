
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct os_mbuf {int * om_data; } ;
struct bt_mesh_msg_ctx {int dummy; } ;
struct bt_mesh_model {int dummy; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int FUNC_1 (struct bt_mesh_model*,struct bt_mesh_msg_ctx*) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_2(struct bt_mesh_model *VAR_2,
                          struct bt_mesh_msg_ctx *VAR_3,
                          struct os_mbuf *VAR_4)
{
    FUNC_0(VAR_1, "#mesh-onoff SET\n");

    VAR_0 = VAR_4->om_data[0];

    FUNC_1(VAR_2, VAR_3);
}
