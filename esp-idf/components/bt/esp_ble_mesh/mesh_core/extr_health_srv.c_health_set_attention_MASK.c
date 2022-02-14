
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u8_t ;
struct net_buf_simple {int dummy; } ;
struct bt_mesh_msg_ctx {int dummy; } ;
struct bt_mesh_model {int dummy; } ;


 int FUNC_0 (char*,unsigned int,char*) ;
 int FUNC_1 (struct bt_mesh_model*,unsigned int) ;
 unsigned int FUNC_2 (struct net_buf_simple*) ;

__attribute__((used)) static void FUNC_3(struct bt_mesh_model *VAR_0,
                                 struct bt_mesh_msg_ctx *VAR_1,
                                 struct net_buf_simple *VAR_2)
{
    u8_t VAR_3;

    VAR_3 = FUNC_2(VAR_2);

    FUNC_0("%u second%s", VAR_3, (VAR_3 == 1U) ? "" : "s");

    FUNC_1(VAR_0, VAR_3);
}
