
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct os_mbuf {int dummy; } ;
struct bt_mesh_msg_ctx {int dummy; } ;
struct bt_mesh_model {int dummy; } ;
typedef scalar_t__ int16_t ;


 int FUNC_0 (int ,char*,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (struct os_mbuf*) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_2(struct bt_mesh_model *VAR_2,
                                struct bt_mesh_msg_ctx *VAR_3,
                                struct os_mbuf *VAR_4)
{
    int16_t VAR_5;

    VAR_5 = (int16_t) FUNC_1(VAR_4);
    FUNC_0(VAR_1, "#mesh-level SET-UNACK: level=%d\n", VAR_5);

    VAR_0 = VAR_5;
    FUNC_0(VAR_1, "#mesh-level: level=%d\n", VAR_0);
}
