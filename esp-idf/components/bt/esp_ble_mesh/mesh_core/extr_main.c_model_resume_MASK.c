
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bt_mesh_model {TYPE_1__* pub; } ;
struct bt_mesh_elem {int dummy; } ;
typedef scalar_t__ s32_t ;
struct TYPE_2__ {int timer; scalar_t__ update; } ;


 scalar_t__ FUNC_0 (struct bt_mesh_model*) ;
 int FUNC_1 (int *,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct bt_mesh_model *VAR_0, struct bt_mesh_elem *VAR_1,
                         bool VAR_2, bool VAR_3, void *VAR_4)
{
    if (VAR_0->pub && VAR_0->pub->update) {
        s32_t VAR_5 = FUNC_0(VAR_0);

        if (VAR_5) {
            FUNC_1(&VAR_0->pub->timer, VAR_5);
        }
    }
}
