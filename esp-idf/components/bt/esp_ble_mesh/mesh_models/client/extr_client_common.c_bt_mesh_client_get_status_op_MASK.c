
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32_t ;
struct TYPE_3__ {scalar_t__ cli_op; scalar_t__ status_op; } ;
typedef TYPE_1__ bt_mesh_client_op_pair_t ;



__attribute__((used)) static u32_t FUNC_0(const bt_mesh_client_op_pair_t *VAR_0,
        int VAR_1, u32_t VAR_2)
{
    if (!VAR_0 || VAR_1 == 0) {
        return 0;
    }

    const bt_mesh_client_op_pair_t *VAR_3 = VAR_0;
    for (int VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
        if (VAR_3->cli_op == VAR_2) {
            return VAR_3->status_op;
        }
        VAR_3++;
    }

    return 0;
}
