
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16_t ;
struct bt_mesh_app_key {scalar_t__ net_idx; scalar_t__ app_idx; } ;
struct TYPE_2__ {struct bt_mesh_app_key* app_keys; } ;


 int FUNC_0 (struct bt_mesh_app_key*) ;
 scalar_t__ VAR_0 ;
 TYPE_1__ VAR_1 ;

struct bt_mesh_app_key *FUNC_1(u16_t VAR_2)
{
    int VAR_3;

    for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_1.app_keys); VAR_3++) {
        struct bt_mesh_app_key *VAR_4 = &VAR_1.app_keys[VAR_3];

        if (VAR_4->net_idx != VAR_0 &&
                VAR_4->app_idx == VAR_2) {
            return VAR_4;
        }
    }

    return ((void*)0);
}
