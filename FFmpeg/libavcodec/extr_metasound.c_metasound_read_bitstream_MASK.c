
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
struct TYPE_12__ {scalar_t__ cur_frame; scalar_t__ frames_per_packet; int is_6kbps; TYPE_4__* bits; TYPE_1__* avctx; TYPE_3__* mtab; } ;
typedef TYPE_5__ TwinVQContext ;
struct TYPE_9__ {int sub; int bark_n_coef; int bark_n_bit; } ;
struct TYPE_8__ {int channels; } ;
typedef int GetBitContext ;
typedef int AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,int ,char*) ;
 size_t* VAR_7 ;
 void* FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int const*,int) ;
 int FUNC_5 (TYPE_5__*,int *,int ,int) ;
 int FUNC_6 (int *,int) ;

__attribute__((used)) static int FUNC_7(AVCodecContext *VAR_8, TwinVQContext *VAR_9,
                                    const uint8_t *VAR_10, int VAR_11)
{
    TwinVQFrameData *VAR_12;
    const TwinVQModeTab *VAR_13 = VAR_9->mtab;
    int VAR_14 = VAR_9->avctx->channels;
    int VAR_15;
    GetBitContext VAR_16;
    int VAR_17, VAR_18, VAR_19, VAR_20;

    if ((VAR_20 = FUNC_4(&VAR_16, VAR_10, VAR_11)) < 0)
        return VAR_20;

    for (VAR_9->cur_frame = 0; VAR_9->cur_frame < VAR_9->frames_per_packet;
         VAR_9->cur_frame++) {
        VAR_12 = VAR_9->bits + VAR_9->cur_frame;

        VAR_12->window_type = FUNC_1(&VAR_16, VAR_6);

        if (VAR_12->window_type > 8) {
            FUNC_0(VAR_8, VAR_1, "Invalid window type, broken sample?\n");
            return VAR_0;
        }

        VAR_12->ftype = VAR_7[VAR_9->bits[VAR_9->cur_frame].window_type];

        VAR_15 = VAR_13->fmode[VAR_12->ftype].sub;

        if (VAR_12->ftype != VAR_3 && !VAR_9->is_6kbps)
            FUNC_1(&VAR_16, 2);

        FUNC_5(VAR_9, &VAR_16, VAR_12->main_coeffs, VAR_12->ftype);

        for (VAR_17 = 0; VAR_17 < VAR_14; VAR_17++)
            for (VAR_18 = 0; VAR_18 < VAR_15; VAR_18++)
                for (VAR_19 = 0; VAR_19 < VAR_13->fmode[VAR_12->ftype].bark_n_coef; VAR_19++)
                    VAR_12->bark1[VAR_17][VAR_18][VAR_19] =
                        FUNC_1(&VAR_16, VAR_13->fmode[VAR_12->ftype].bark_n_bit);

        for (VAR_17 = 0; VAR_17 < VAR_14; VAR_17++)
            for (VAR_18 = 0; VAR_18 < VAR_15; VAR_18++)
                VAR_12->bark_use_hist[VAR_17][VAR_18] = FUNC_2(&VAR_16);

        if (VAR_12->ftype == VAR_2) {
            for (VAR_17 = 0; VAR_17 < VAR_14; VAR_17++)
                VAR_12->gain_bits[VAR_17] = FUNC_1(&VAR_16, VAR_4);
        } else {
            for (VAR_17 = 0; VAR_17 < VAR_14; VAR_17++) {
                VAR_12->gain_bits[VAR_17] = FUNC_1(&VAR_16, VAR_4);
                for (VAR_18 = 0; VAR_18 < VAR_15; VAR_18++)
                    VAR_12->sub_gain_bits[VAR_17 * VAR_15 + VAR_18] =
                        FUNC_1(&VAR_16, VAR_5);
            }
        }

        for (VAR_17 = 0; VAR_17 < VAR_14; VAR_17++) {
            VAR_12->lpc_hist_idx[VAR_17] = FUNC_1(&VAR_16, VAR_13->lsp_bit0);
            VAR_12->lpc_idx1[VAR_17] = FUNC_1(&VAR_16, VAR_13->lsp_bit1);

            for (VAR_18 = 0; VAR_18 < VAR_13->lsp_split; VAR_18++)
                VAR_12->lpc_idx2[VAR_17][VAR_18] = FUNC_1(&VAR_16, VAR_13->lsp_bit2);
        }

        if (VAR_12->ftype == VAR_2) {
            FUNC_5(VAR_9, &VAR_16, VAR_12->ppc_coeffs, 3);
            for (VAR_17 = 0; VAR_17 < VAR_14; VAR_17++) {
                VAR_12->p_coef[VAR_17] = FUNC_1(&VAR_16, VAR_13->ppc_period_bit);
                VAR_12->g_coef[VAR_17] = FUNC_1(&VAR_16, VAR_13->pgain_bit);
            }
        }


        if (FUNC_3(&VAR_16) & 3)
            FUNC_6(&VAR_16, 4 - (FUNC_3(&VAR_16) & 3));
    }

    return (FUNC_3(&VAR_16) + 7) / 8;
}
