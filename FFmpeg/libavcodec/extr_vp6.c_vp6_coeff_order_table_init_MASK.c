
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int sub_version; TYPE_1__* modelp; } ;
typedef TYPE_2__ VP56Context ;
struct TYPE_4__ {int* coeff_index_to_pos; int* coeff_reorder; int* coeff_index_to_idct_selector; } ;



__attribute__((used)) static void FUNC_0(VP56Context *VAR_0)
{
    int VAR_1, VAR_2, VAR_3 = 1;

    VAR_0->modelp->coeff_index_to_pos[0] = 0;
    for (VAR_1=0; VAR_1<16; VAR_1++)
        for (VAR_2=1; VAR_2<64; VAR_2++)
            if (VAR_0->modelp->coeff_reorder[VAR_2] == VAR_1)
                VAR_0->modelp->coeff_index_to_pos[VAR_3++] = VAR_2;

    for (VAR_3 = 0; VAR_3 < 64; VAR_3++) {
        int VAR_4 = 0;
        for (VAR_1 = 0; VAR_1 <= VAR_3; VAR_1++) {
            int VAR_5 = VAR_0->modelp->coeff_index_to_pos[VAR_1];
            if (VAR_5 > VAR_4)
                VAR_4 = VAR_5;
        }
        if (VAR_0->sub_version > 6)
            VAR_4++;
        VAR_0->modelp->coeff_index_to_idct_selector[VAR_3] = VAR_4;
    }
}
