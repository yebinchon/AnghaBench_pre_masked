
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bt_mesh_subnet {scalar_t__ net_idx; int * keys; } ;
struct bt_mesh_app_key {scalar_t__ net_idx; int updated; int * keys; } ;
struct TYPE_2__ {struct bt_mesh_app_key* app_keys; } ;


 int FUNC_0 (struct bt_mesh_app_key*) ;
 int FUNC_1 (char*,scalar_t__) ;
 TYPE_1__ VAR_0 ;
 int FUNC_2 (int *,int *,int) ;

void FUNC_3(struct bt_mesh_subnet *VAR_1)
{
    int VAR_2;

    FUNC_1("idx 0x%04x", VAR_1->net_idx);

    FUNC_2(&VAR_1->keys[0], &VAR_1->keys[1], sizeof(VAR_1->keys[0]));

    for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0.app_keys); VAR_2++) {
        struct bt_mesh_app_key *VAR_3 = &VAR_0.app_keys[VAR_2];

        if (VAR_3->net_idx != VAR_1->net_idx || !VAR_3->updated) {
            continue;
        }

        FUNC_2(&VAR_3->keys[0], &VAR_3->keys[1], sizeof(VAR_3->keys[0]));
        VAR_3->updated = 0;
    }
}
