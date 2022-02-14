
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16_t ;
struct bt_mesh_hci_cp_set_adv_data {int len; int* data; int member_0; } ;
struct bt_mesh_adv_data {int data_len; int type; int data; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int*,int) ;
 int FUNC_2 (int*,int) ;
 int VAR_2 ;
 int FUNC_3 (int*,int ,int) ;

__attribute__((used)) static int FUNC_4(u16_t VAR_3, const struct bt_mesh_adv_data *VAR_4, size_t VAR_5)
{
    struct bt_mesh_hci_cp_set_adv_data VAR_6 = {0};
    int VAR_7;

    if (VAR_4 == ((void*)0) || VAR_5 == 0) {
        return 0;
    }

    for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++) {

        if (VAR_6.len + VAR_4[VAR_7].data_len + 2 > 31) {
            return -VAR_2;
        }

        VAR_6.data[VAR_6.len++] = VAR_4[VAR_7].data_len + 1;
        VAR_6.data[VAR_6.len++] = VAR_4[VAR_7].type;

        FUNC_3(&VAR_6.data[VAR_6.len], VAR_4[VAR_7].data, VAR_4[VAR_7].data_len);
        VAR_6.len += VAR_4[VAR_7].data_len;
    }


    if (VAR_3 == VAR_0) {
        FUNC_0(FUNC_1(VAR_6.data, VAR_6.len));
    } else if (VAR_3 == VAR_1) {
        FUNC_0(FUNC_2(VAR_6.data, VAR_6.len));
    }

    return 0;
}
