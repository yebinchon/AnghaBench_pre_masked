
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8_t ;
struct bt_mesh_adv_data {size_t data_len; size_t type; int data; } ;


 int FUNC_0 (size_t*,int ,size_t) ;

__attribute__((used)) static int FUNC_1(const struct bt_mesh_adv_data *VAR_0, size_t VAR_1, u8_t *VAR_2, u8_t *VAR_3)
{
    int VAR_4;

    for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
        VAR_2[(*VAR_3)++] = VAR_0[VAR_4].data_len + 1;
        VAR_2[(*VAR_3)++] = VAR_0[VAR_4].type;

        FUNC_0(&VAR_2[*VAR_3], VAR_0[VAR_4].data,
               VAR_0[VAR_4].data_len);
        *VAR_3 += VAR_0[VAR_4].data_len;
    }

    return 0;
}
