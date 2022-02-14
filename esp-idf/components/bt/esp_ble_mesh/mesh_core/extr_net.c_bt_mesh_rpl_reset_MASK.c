
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bt_mesh_rpl {int old_iv; scalar_t__ src; } ;
struct TYPE_2__ {struct bt_mesh_rpl* rpl; } ;


 int FUNC_0 (struct bt_mesh_rpl*) ;
 TYPE_1__ VAR_0 ;
 int FUNC_1 (struct bt_mesh_rpl*,int ,int) ;

void FUNC_2(void)
{
    int VAR_1;




    for (VAR_1 = 0; VAR_1 < FUNC_0(VAR_0.rpl); VAR_1++) {
        struct bt_mesh_rpl *VAR_2 = &VAR_0.rpl[VAR_1];

        if (VAR_2->src) {
            if (VAR_2->old_iv) {
                (void)FUNC_1(VAR_2, 0, sizeof(*VAR_2));
            } else {
                VAR_2->old_iv = 1;
            }
        }
    }
}
