
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct unbind_data {int store; int app_idx; } ;
struct bt_mesh_model {int dummy; } ;
struct bt_mesh_elem {int dummy; } ;


 int FUNC_0 (struct bt_mesh_model*,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct bt_mesh_model *VAR_0, struct bt_mesh_elem *VAR_1,
                        bool VAR_2, bool VAR_3, void *VAR_4)
{
    struct unbind_data *VAR_5 = VAR_4;

    FUNC_0(VAR_0, VAR_5->app_idx, VAR_5->store);
}
