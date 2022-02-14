
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8_t ;
typedef int u32_t ;
struct bt_mesh_subnet {scalar_t__ net_idx; scalar_t__ kr_phase; int * keys; } ;
struct TYPE_2__ {struct bt_mesh_subnet* sub; } ;


 int FUNC_0 (struct bt_mesh_subnet*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (int *,int const*,int ,int ,int const*) ;
 TYPE_1__ VAR_2 ;

struct bt_mesh_subnet *FUNC_2(const u8_t VAR_3[8], u8_t VAR_4,
        u32_t VAR_5, const u8_t VAR_6[8],
        bool *VAR_7)
{
    int VAR_8;

    for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_2.sub); VAR_8++) {
        struct bt_mesh_subnet *VAR_9 = &VAR_2.sub[VAR_8];

        if (VAR_9->net_idx == VAR_0) {
            continue;
        }

        if (FUNC_1(&VAR_9->keys[0], VAR_3, VAR_4, VAR_5, VAR_6)) {
            *VAR_7 = 0;
            return VAR_9;
        }

        if (VAR_9->kr_phase == VAR_1) {
            continue;
        }

        if (FUNC_1(&VAR_9->keys[1], VAR_3, VAR_4, VAR_5, VAR_6)) {
            *VAR_7 = 1;
            return VAR_9;
        }
    }

    return ((void*)0);
}
