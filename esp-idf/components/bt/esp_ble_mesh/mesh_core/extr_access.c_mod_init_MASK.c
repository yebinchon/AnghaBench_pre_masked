
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct bt_mesh_model {scalar_t__ id; struct bt_mesh_model* model_idx; struct bt_mesh_elem* elem_idx; scalar_t__ flags; TYPE_2__* keys; TYPE_1__* pub; struct bt_mesh_elem* elem; } ;
struct bt_mesh_elem {int vnd_models; int models; } ;
struct TYPE_8__ {int elem; } ;
struct TYPE_7__ {scalar_t__ id; int (* init ) (struct bt_mesh_model*,int) ;} ;
struct TYPE_6__ {int timer; struct bt_mesh_model* mod; } ;


 int FUNC_0 (TYPE_2__*) ;
 TYPE_2__ VAR_0 ;
 TYPE_3__* VAR_1 ;
 int FUNC_1 (int *,int ) ;
 int VAR_2 ;
 TYPE_2__* VAR_3 ;
 int FUNC_2 (struct bt_mesh_model*,int) ;

__attribute__((used)) static void FUNC_3(struct bt_mesh_model *VAR_4, struct bt_mesh_elem *VAR_5,
                     bool VAR_6, bool VAR_7, void *VAR_8)
{
    int VAR_9;

    VAR_4->elem = VAR_5;

    if (VAR_4->pub) {
        VAR_4->pub->mod = VAR_4;
        FUNC_1(&VAR_4->pub->timer, VAR_2);
    }

    for (VAR_9 = 0; VAR_9 < FUNC_0(VAR_4->keys); VAR_9++) {
        VAR_4->keys[VAR_9] = VAR_0;
    }

    VAR_4->flags = 0;
    VAR_4->elem_idx = VAR_5 - VAR_1->elem;
    if (VAR_6) {
        VAR_4->model_idx = VAR_4 - VAR_5->vnd_models;
    } else {
        VAR_4->model_idx = VAR_4 - VAR_5->models;
    }

    if (VAR_6) {
        return;
    }

    for (VAR_9 = 0; VAR_9 < FUNC_0(VAR_3); VAR_9++) {
        if (VAR_3[VAR_9].id == VAR_4->id) {
            VAR_3[VAR_9].init(VAR_4, VAR_7);
        }
    }
}
