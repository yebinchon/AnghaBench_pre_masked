
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8_t ;
struct tc_cmac_struct {int dummy; } ;
struct tc_aes_key_sched_struct {int dummy; } ;
struct bt_mesh_sg {int len; int data; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int *,struct tc_cmac_struct*) ;
 scalar_t__ FUNC_1 (struct tc_cmac_struct*,int const*,struct tc_aes_key_sched_struct*) ;
 scalar_t__ FUNC_2 (struct tc_cmac_struct*,int ,int ) ;

int FUNC_3(const u8_t VAR_2[16], struct bt_mesh_sg *VAR_3,
                     size_t VAR_4, u8_t VAR_5[16])
{
    struct tc_aes_key_sched_struct VAR_6;
    struct tc_cmac_struct VAR_7;

    if (FUNC_1(&VAR_7, VAR_2, &VAR_6) == VAR_1) {
        return -VAR_0;
    }

    for (; VAR_4; VAR_4--, VAR_3++) {
        if (FUNC_2(&VAR_7, VAR_3->data,
                           VAR_3->len) == VAR_1) {
            return -VAR_0;
        }
    }

    if (FUNC_0(VAR_5, &VAR_7) == VAR_1) {
        return -VAR_0;
    }

    return 0;
}
