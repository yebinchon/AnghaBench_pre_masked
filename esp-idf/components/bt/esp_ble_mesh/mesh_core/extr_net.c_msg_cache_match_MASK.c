
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64_t ;
typedef size_t u16_t ;
struct net_buf_simple {int dummy; } ;
struct bt_mesh_net_rx {size_t msg_cache_idx; } ;


 size_t FUNC_0 (scalar_t__*) ;
 scalar_t__* VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ FUNC_1 (struct bt_mesh_net_rx*,struct net_buf_simple*) ;

__attribute__((used)) static bool FUNC_2(struct bt_mesh_net_rx *VAR_2,
                            struct net_buf_simple *VAR_3)
{
    u64_t VAR_4 = FUNC_1(VAR_2, VAR_3);
    u16_t VAR_5;

    for (VAR_5 = 0U; VAR_5 < FUNC_0(VAR_0); VAR_5++) {
        if (VAR_0[VAR_5] == VAR_4) {
            return 1;
        }
    }


    VAR_2->msg_cache_idx = VAR_1++;
    VAR_0[VAR_2->msg_cache_idx] = VAR_4;
    VAR_1 %= FUNC_0(VAR_0);

    return 0;
}
