
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bt_mesh_model {TYPE_1__* pub; } ;
struct bt_mesh_elem {int dummy; } ;
struct TYPE_2__ {unsigned int count; int timer; scalar_t__ update; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct bt_mesh_model *VAR_0, struct bt_mesh_elem *VAR_1,
                          bool VAR_2, bool VAR_3, void *VAR_4)
{
    if (VAR_0->pub && VAR_0->pub->update) {
        VAR_0->pub->count = 0U;
        FUNC_0(&VAR_0->pub->timer);
    }
}
