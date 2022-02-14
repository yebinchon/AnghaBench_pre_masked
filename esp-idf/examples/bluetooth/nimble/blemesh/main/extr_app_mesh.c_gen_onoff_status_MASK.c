
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct os_mbuf {int dummy; } ;
struct bt_mesh_msg_ctx {int dummy; } ;
struct bt_mesh_model {int dummy; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int ,char*) ;
 struct os_mbuf* FUNC_2 (int) ;
 int FUNC_3 (struct os_mbuf*,int ) ;
 scalar_t__ FUNC_4 (struct bt_mesh_model*,struct bt_mesh_msg_ctx*,struct os_mbuf*,int *,int *) ;
 int VAR_0 ;
 int * FUNC_5 (struct os_mbuf*,int) ;
 int FUNC_6 (struct os_mbuf*) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_7(struct bt_mesh_model *VAR_2,
                             struct bt_mesh_msg_ctx *VAR_3)
{
    struct os_mbuf *VAR_4 = FUNC_2(3);
    uint8_t *VAR_5;

    FUNC_1(VAR_1, "#mesh-onoff STATUS\n");

    FUNC_3(VAR_4, FUNC_0(0x82, 0x04));
    VAR_5 = FUNC_5(VAR_4, 1);
    *VAR_5 = VAR_0;

    if (FUNC_4(VAR_2, VAR_3, VAR_4, ((void*)0), ((void*)0))) {
        FUNC_1(VAR_1, "#mesh-onoff STATUS: send status failed\n");
    }

    FUNC_6(VAR_4);
}
