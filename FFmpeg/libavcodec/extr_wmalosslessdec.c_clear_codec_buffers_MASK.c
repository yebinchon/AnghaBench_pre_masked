
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int num_channels; int* cdlms_ttl; scalar_t__* ave_sum; TYPE_1__** cdlms; int mclms_updates; int mclms_prevvalues; int mclms_coeffs_cur; int mclms_coeffs; int lpc_coefs; int acfilter_prevvalues; int acfilter_coeffs; } ;
typedef TYPE_2__ WmallDecodeCtx ;
struct TYPE_4__ {int lms_updates; int lms_prevvalues; int coefs; } ;


 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static void FUNC_1(WmallDecodeCtx *VAR_0)
{
    int VAR_1, VAR_2;

    FUNC_0(VAR_0->acfilter_coeffs, 0, sizeof(VAR_0->acfilter_coeffs));
    FUNC_0(VAR_0->acfilter_prevvalues, 0, sizeof(VAR_0->acfilter_prevvalues));
    FUNC_0(VAR_0->lpc_coefs, 0, sizeof(VAR_0->lpc_coefs));

    FUNC_0(VAR_0->mclms_coeffs, 0, sizeof(VAR_0->mclms_coeffs));
    FUNC_0(VAR_0->mclms_coeffs_cur, 0, sizeof(VAR_0->mclms_coeffs_cur));
    FUNC_0(VAR_0->mclms_prevvalues, 0, sizeof(VAR_0->mclms_prevvalues));
    FUNC_0(VAR_0->mclms_updates, 0, sizeof(VAR_0->mclms_updates));

    for (VAR_1 = 0; VAR_1 < VAR_0->num_channels; VAR_1++) {
        for (VAR_2 = 0; VAR_2 < VAR_0->cdlms_ttl[VAR_1]; VAR_2++) {
            FUNC_0(VAR_0->cdlms[VAR_1][VAR_2].coefs, 0,
                   sizeof(VAR_0->cdlms[VAR_1][VAR_2].coefs));
            FUNC_0(VAR_0->cdlms[VAR_1][VAR_2].lms_prevvalues, 0,
                   sizeof(VAR_0->cdlms[VAR_1][VAR_2].lms_prevvalues));
            FUNC_0(VAR_0->cdlms[VAR_1][VAR_2].lms_updates, 0,
                   sizeof(VAR_0->cdlms[VAR_1][VAR_2].lms_updates));
        }
        VAR_0->ave_sum[VAR_1] = 0;
    }
}
