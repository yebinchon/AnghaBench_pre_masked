
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct unbind_data {int store; int app_idx; } ;
struct bt_mesh_app_key {int keys; int net_idx; int app_idx; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (struct bt_mesh_app_key*) ;
 int FUNC_3 (int ,struct unbind_data*) ;
 int FUNC_4 (int ,int ,int) ;

void FUNC_5(struct bt_mesh_app_key *VAR_3, bool VAR_4)
{
    struct unbind_data VAR_5 = { .app_idx = VAR_3->app_idx, .store = VAR_4 };

    FUNC_0("AppIdx 0x%03x store %u", VAR_3->app_idx, VAR_4);

    FUNC_3(VAR_2, &VAR_5);

    if (FUNC_1(VAR_1) && VAR_4) {
        FUNC_2(VAR_3);
    }

    VAR_3->net_idx = VAR_0;
    (void)FUNC_4(VAR_3->keys, 0, sizeof(VAR_3->keys));
}
