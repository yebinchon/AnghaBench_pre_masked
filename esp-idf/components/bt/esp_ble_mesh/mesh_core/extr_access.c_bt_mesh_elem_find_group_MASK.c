
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16_t ;
struct bt_mesh_model {int dummy; } ;
struct bt_mesh_elem {int model_count; int vnd_model_count; struct bt_mesh_model* vnd_models; struct bt_mesh_model* models; } ;


 int * FUNC_0 (struct bt_mesh_model*,int ) ;

__attribute__((used)) static struct bt_mesh_model *FUNC_1(struct bt_mesh_elem *VAR_0,
        u16_t VAR_1)
{
    struct bt_mesh_model *VAR_2;
    u16_t *VAR_3;
    int VAR_4;

    for (VAR_4 = 0; VAR_4 < VAR_0->model_count; VAR_4++) {
        VAR_2 = &VAR_0->models[VAR_4];

        VAR_3 = FUNC_0(VAR_2, VAR_1);
        if (VAR_3) {
            return VAR_2;
        }
    }

    for (VAR_4 = 0; VAR_4 < VAR_0->vnd_model_count; VAR_4++) {
        VAR_2 = &VAR_0->vnd_models[VAR_4];

        VAR_3 = FUNC_0(VAR_2, VAR_1);
        if (VAR_3) {
            return VAR_2;
        }
    }

    return ((void*)0);
}
