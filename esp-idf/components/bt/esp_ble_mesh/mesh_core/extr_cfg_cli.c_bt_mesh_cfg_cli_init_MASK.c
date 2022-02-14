
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct bt_mesh_model {int * keys; scalar_t__ user_data; } ;
struct TYPE_5__ {int queue; } ;
typedef TYPE_1__ config_internal_data_t ;
struct TYPE_6__ {TYPE_1__* internal_data; int op_pair; int op_pair_size; struct bt_mesh_model* model; } ;
typedef TYPE_2__ bt_mesh_config_client_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 () ;
 int VAR_3 ;
 TYPE_2__* VAR_4 ;
 TYPE_1__* FUNC_4 (int) ;
 int FUNC_5 (int *) ;

int FUNC_6(struct bt_mesh_model *VAR_5, bool VAR_6)
{
    config_internal_data_t *VAR_7 = ((void*)0);
    bt_mesh_config_client_t *VAR_8 = ((void*)0);

    FUNC_1("primary %u", VAR_6);

    if (!VAR_6) {
        FUNC_2("Configuration Client only allowed in primary element");
        return -VAR_1;
    }

    if (!VAR_5) {
        FUNC_2("Configuration Client model is NULL");
        return -VAR_1;
    }

    VAR_8 = (bt_mesh_config_client_t *)VAR_5->user_data;
    if (!VAR_8) {
        FUNC_2("No Configuration Client context provided");
        return -VAR_1;
    }


    VAR_7 = FUNC_4(sizeof(config_internal_data_t));
    if (!VAR_7) {
        FUNC_2("Allocate memory for Configuration Client internal data fail");
        return -VAR_2;
    }

    FUNC_5(&VAR_7->queue);

    VAR_8->model = VAR_5;
    VAR_8->op_pair_size = FUNC_0(VAR_3);
    VAR_8->op_pair = VAR_3;
    VAR_8->internal_data = VAR_7;

    VAR_4 = VAR_8;


    VAR_5->keys[0] = VAR_0;

    FUNC_3();

    return 0;
}
