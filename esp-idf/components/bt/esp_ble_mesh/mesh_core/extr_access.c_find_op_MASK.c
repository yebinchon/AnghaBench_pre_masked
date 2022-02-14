
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8_t ;
typedef scalar_t__ u32_t ;
typedef int u16_t ;
struct bt_mesh_model_op {scalar_t__ opcode; scalar_t__ func; } ;
struct bt_mesh_model {struct bt_mesh_model_op* op; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct bt_mesh_model*,int ) ;
 int FUNC_3 (struct bt_mesh_model*,int ) ;

__attribute__((used)) static const struct bt_mesh_model_op *FUNC_4(struct bt_mesh_model *VAR_0,
        u8_t VAR_1, u16_t VAR_2,
        u16_t VAR_3, u32_t VAR_4,
        struct bt_mesh_model **VAR_5)
{
    u8_t VAR_6;

    for (VAR_6 = 0U; VAR_6 < VAR_1; VAR_6++) {
        const struct bt_mesh_model_op *VAR_7;

        *VAR_5 = &VAR_0[VAR_6];

        if (FUNC_0(VAR_2) ||
                FUNC_1(VAR_2)) {
            if (!FUNC_2(*VAR_5, VAR_2)) {
                continue;
            }
        }

        if (!FUNC_3(*VAR_5, VAR_3)) {
            continue;
        }

        for (VAR_7 = (*VAR_5)->op; VAR_7->func; VAR_7++) {
            if (VAR_7->opcode == VAR_4) {
                return VAR_7;
            }
        }
    }

    *VAR_5 = ((void*)0);
    return ((void*)0);
}
