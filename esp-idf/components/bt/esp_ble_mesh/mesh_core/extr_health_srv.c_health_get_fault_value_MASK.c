
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8_t ;
struct net_buf_simple {int dummy; } ;
struct bt_mesh_model {struct bt_mesh_health_srv* user_data; } ;
struct TYPE_2__ {scalar_t__* curr_faults; scalar_t__* reg_faults; } ;
struct bt_mesh_health_srv {TYPE_1__ test; } ;


 size_t FUNC_0 (scalar_t__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct net_buf_simple*,scalar_t__) ;
 scalar_t__ FUNC_2 (struct net_buf_simple*) ;

__attribute__((used)) static void FUNC_3(struct bt_mesh_model *VAR_1,
                                   struct net_buf_simple *VAR_2,
                                   bool VAR_3)
{
    struct bt_mesh_health_srv *VAR_4 = VAR_1->user_data;
    size_t VAR_5;
    size_t VAR_6;

    VAR_5 = VAR_3 ? FUNC_0(VAR_4->test.curr_faults) : FUNC_0(VAR_4->test.reg_faults);

    for (VAR_6 = 0U; VAR_6 < VAR_5; VAR_6++) {
        if (FUNC_2(VAR_2) == 0) {
            return;
        }

        u8_t VAR_7 = VAR_3 ? VAR_4->test.curr_faults[VAR_6] : VAR_4->test.reg_faults[VAR_6];
        if (VAR_7 != VAR_0) {
            FUNC_1(VAR_2, VAR_7);
        }
    }
}
