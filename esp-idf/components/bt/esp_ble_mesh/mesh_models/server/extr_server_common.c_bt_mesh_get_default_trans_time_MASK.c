
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8_t ;
typedef scalar_t__ u16_t ;
struct bt_mesh_model {scalar_t__ user_data; } ;
struct TYPE_2__ {int trans_time; } ;
struct bt_mesh_gen_def_trans_time_srv {TYPE_1__ state; } ;
struct bt_mesh_elem {scalar_t__ addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct bt_mesh_elem* FUNC_0 (scalar_t__) ;
 struct bt_mesh_elem* FUNC_1 (struct bt_mesh_model*) ;
 struct bt_mesh_model* FUNC_2 (struct bt_mesh_elem*,int ) ;
 scalar_t__ FUNC_3 () ;

u8_t FUNC_4(struct bt_mesh_model *VAR_2)
{
    struct bt_mesh_elem *VAR_3 = FUNC_1(VAR_2);
    struct bt_mesh_gen_def_trans_time_srv *VAR_4 = ((void*)0);
    u16_t VAR_5 = FUNC_3();
    struct bt_mesh_model *VAR_6 = ((void*)0);

    for (u16_t VAR_7 = VAR_3->addr; VAR_7 >= VAR_5; VAR_7--) {
        VAR_3 = FUNC_0(VAR_7);
        if (VAR_3) {
            VAR_6 = FUNC_2(VAR_3, VAR_0);
            if (VAR_6) {
                VAR_4 = (struct bt_mesh_gen_def_trans_time_srv *)VAR_6->user_data;
                if (VAR_4) {
                    return VAR_4->state.trans_time;
                }
            }
        }
    }

    return VAR_1;
}
