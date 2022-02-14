
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16_t ;
struct bt_mesh_model_pub {scalar_t__ count; int period_start; int retransmit; } ;
struct bt_mesh_model {struct bt_mesh_model_pub* pub; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 () ;

__attribute__((used)) static void FUNC_3(u16_t VAR_0, int VAR_1, void *VAR_2)
{
    struct bt_mesh_model *VAR_3 = VAR_2;
    struct bt_mesh_model_pub *VAR_4 = VAR_3->pub;

    if (VAR_1) {
        FUNC_1("Failed to publish: err %d", VAR_1);
        return;
    }


    if (VAR_4->count == FUNC_0(VAR_4->retransmit)) {
        VAR_4->period_start = FUNC_2();
    }
}
