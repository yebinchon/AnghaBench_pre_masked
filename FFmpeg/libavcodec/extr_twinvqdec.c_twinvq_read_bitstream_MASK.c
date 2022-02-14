
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_10__ {int lsp_bit0; int lsp_bit1; int lsp_split; int lsp_bit2; int ppc_period_bit; int pgain_bit; TYPE_2__* fmode; } ;
typedef TYPE_3__ TwinVQModeTab ;
struct TYPE_11__ {int window_type; size_t ftype; void** g_coef; void** p_coef; int ppc_coeffs; void*** lpc_idx2; void** lpc_idx1; void** lpc_hist_idx; void** sub_gain_bits; void** gain_bits; int ** bark_use_hist; void**** bark1; int main_coeffs; } ;
typedef TYPE_4__ TwinVQFrameData ;
struct TYPE_12__ {TYPE_4__* bits; TYPE_1__* avctx; TYPE_3__* mtab; } ;
typedef TYPE_5__ TwinVQContext ;
struct TYPE_9__ {int sub; int bark_n_coef; int bark_n_bit; } ;
struct TYPE_8__ {int channels; } ;
typedef int GetBitContext ;
typedef int AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int ,char*) ;
 size_t* VAR_6 ;
 void* FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int const*,int) ;
 int FUNC_5 (TYPE_5__*,int *,int ,int) ;
 int FUNC_6 (int *,void*) ;

__attribute__((used)) static int FUNC_7(AVCodecContext *VAR_7, TwinVQContext *VAR_8,
                                 const uint8_t *VAR_9, int VAR_10)
{
    TwinVQFrameData *VAR_11 = &VAR_8->bits[0];
    const TwinVQModeTab *VAR_12 = VAR_8->mtab;
    int VAR_13 = VAR_8->avctx->channels;
    int VAR_14;
    GetBitContext VAR_15;
    int VAR_16, VAR_17, VAR_18, VAR_19;

    if ((VAR_19 = FUNC_4(&VAR_15, VAR_9, VAR_10)) < 0)
        return VAR_19;
    FUNC_6(&VAR_15, FUNC_1(&VAR_15, 8));

    VAR_11->window_type = FUNC_1(&VAR_15, VAR_5);

    if (VAR_11->window_type > 8) {
        FUNC_0(VAR_7, VAR_1, "Invalid window type, broken sample?\n");
        return VAR_0;
    }

    VAR_11->ftype = VAR_6[VAR_8->bits[0].window_type];

    VAR_14 = VAR_12->fmode[VAR_11->ftype].sub;

    FUNC_5(VAR_8, &VAR_15, VAR_11->main_coeffs, VAR_11->ftype);

    for (VAR_16 = 0; VAR_16 < VAR_13; VAR_16++)
        for (VAR_17 = 0; VAR_17 < VAR_14; VAR_17++)
            for (VAR_18 = 0; VAR_18 < VAR_12->fmode[VAR_11->ftype].bark_n_coef; VAR_18++)
                VAR_11->bark1[VAR_16][VAR_17][VAR_18] =
                    FUNC_1(&VAR_15, VAR_12->fmode[VAR_11->ftype].bark_n_bit);

    for (VAR_16 = 0; VAR_16 < VAR_13; VAR_16++)
        for (VAR_17 = 0; VAR_17 < VAR_14; VAR_17++)
            VAR_11->bark_use_hist[VAR_16][VAR_17] = FUNC_2(&VAR_15);

    if (VAR_11->ftype == VAR_2) {
        for (VAR_16 = 0; VAR_16 < VAR_13; VAR_16++)
            VAR_11->gain_bits[VAR_16] = FUNC_1(&VAR_15, VAR_3);
    } else {
        for (VAR_16 = 0; VAR_16 < VAR_13; VAR_16++) {
            VAR_11->gain_bits[VAR_16] = FUNC_1(&VAR_15, VAR_3);
            for (VAR_17 = 0; VAR_17 < VAR_14; VAR_17++)
                VAR_11->sub_gain_bits[VAR_16 * VAR_14 + VAR_17] = FUNC_1(&VAR_15,
                                                       VAR_4);
        }
    }

    for (VAR_16 = 0; VAR_16 < VAR_13; VAR_16++) {
        VAR_11->lpc_hist_idx[VAR_16] = FUNC_1(&VAR_15, VAR_12->lsp_bit0);
        VAR_11->lpc_idx1[VAR_16] = FUNC_1(&VAR_15, VAR_12->lsp_bit1);

        for (VAR_17 = 0; VAR_17 < VAR_12->lsp_split; VAR_17++)
            VAR_11->lpc_idx2[VAR_16][VAR_17] = FUNC_1(&VAR_15, VAR_12->lsp_bit2);
    }

    if (VAR_11->ftype == VAR_2) {
        FUNC_5(VAR_8, &VAR_15, VAR_11->ppc_coeffs, 3);
        for (VAR_16 = 0; VAR_16 < VAR_13; VAR_16++) {
            VAR_11->p_coef[VAR_16] = FUNC_1(&VAR_15, VAR_12->ppc_period_bit);
            VAR_11->g_coef[VAR_16] = FUNC_1(&VAR_15, VAR_12->pgain_bit);
        }
    }

    return (FUNC_3(&VAR_15) + 7) / 8;
}
