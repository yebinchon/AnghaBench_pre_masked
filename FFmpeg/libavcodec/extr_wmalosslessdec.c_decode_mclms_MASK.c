
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int mclms_order; int mclms_scaling; int num_channels; int* mclms_coeffs; int* mclms_coeffs_cur; int gb; } ;
typedef TYPE_1__ WmallDecodeCtx ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;

__attribute__((used)) static void FUNC_4(WmallDecodeCtx *VAR_0)
{
    VAR_0->mclms_order = (FUNC_1(&VAR_0->gb, 4) + 1) * 2;
    VAR_0->mclms_scaling = FUNC_1(&VAR_0->gb, 4);
    if (FUNC_2(&VAR_0->gb)) {
        int VAR_1, VAR_2;
        int VAR_3 = FUNC_0(VAR_0->mclms_scaling + 1);
        if (1 << VAR_3 < VAR_0->mclms_scaling + 1)
            VAR_3++;

        VAR_2 = FUNC_3(&VAR_0->gb, VAR_3) + 2;

        for (VAR_1 = 0; VAR_1 < VAR_0->mclms_order * VAR_0->num_channels * VAR_0->num_channels; VAR_1++)
            VAR_0->mclms_coeffs[VAR_1] = FUNC_1(&VAR_0->gb, VAR_2);

        for (VAR_1 = 0; VAR_1 < VAR_0->num_channels; VAR_1++) {
            int VAR_4;
            for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++)
                VAR_0->mclms_coeffs_cur[VAR_1 * VAR_0->num_channels + VAR_4] = FUNC_1(&VAR_0->gb, VAR_2);
        }
    }
}
