
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef enum TwinVQFrameType { ____Placeholder_TwinVQFrameType } TwinVQFrameType ;
struct TYPE_17__ {int size; int ppc_shape_len; TYPE_2__* fmode; scalar_t__ ppc_shape_cb; } ;
typedef TYPE_4__ TwinVQModeTab ;
struct TYPE_18__ {int * lpc_hist_idx; int * lpc_idx2; int * lpc_idx1; int * g_coef; int * p_coef; int ** bark_use_hist; int ** bark1; int ppc_coeffs; int main_coeffs; } ;
typedef TYPE_5__ TwinVQFrameData ;
struct TYPE_19__ {size_t cur_frame; int* n_div; int tmp_buf; TYPE_3__* fdsp; int * lsp_hist; int (* decode_ppc ) (TYPE_6__*,int ,int ,float*,float*) ;int (* dec_bark_env ) (TYPE_6__*,int ,int ,int,int ,float,int) ;TYPE_1__* avctx; TYPE_5__* bits; TYPE_4__* mtab; } ;
typedef TYPE_6__ TwinVQContext ;
struct TYPE_16__ {int (* vector_fmul ) (float*,float*,int ,int) ;} ;
struct TYPE_15__ {int sub; int cb_len_read; scalar_t__ cb1; scalar_t__ cb0; } ;
struct TYPE_14__ {int channels; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_6__*,int,float*) ;
 int FUNC_1 (TYPE_6__*,float*,int,int ) ;
 int FUNC_2 (TYPE_6__*,int ,int ,int ,float*,int ) ;
 int FUNC_3 (TYPE_6__*,int ,float*,int,scalar_t__,scalar_t__,int) ;
 int FUNC_4 (TYPE_6__*,int ,int ,int,int ,float,int) ;
 int FUNC_5 (float*,float*,int ,int) ;
 int FUNC_6 (TYPE_6__*,int ,int ,float*,float*) ;
 int FUNC_7 (float*,float*,int ,int) ;

__attribute__((used)) static void FUNC_8(TwinVQContext *VAR_7, float *VAR_8,
                                     enum TwinVQFrameType VAR_9)
{
    const TwinVQModeTab *VAR_10 = VAR_7->mtab;
    TwinVQFrameData *VAR_11 = &VAR_7->bits[VAR_7->cur_frame];
    int VAR_12 = VAR_7->avctx->channels;
    int VAR_13 = VAR_10->fmode[VAR_9].sub;
    int VAR_14 = VAR_10->size / VAR_13;
    float VAR_15[VAR_0 * VAR_6];
    float VAR_16[VAR_5 * VAR_0 * 4];

    int VAR_17, VAR_18;

    FUNC_3(VAR_7, VAR_11->main_coeffs, VAR_8, VAR_9,
            VAR_10->fmode[VAR_9].cb0, VAR_10->fmode[VAR_9].cb1,
            VAR_10->fmode[VAR_9].cb_len_read);

    FUNC_0(VAR_7, VAR_9, VAR_15);

    if (VAR_9 == VAR_1) {
        int VAR_19 = (VAR_7->n_div[3] + VAR_10->ppc_shape_len * VAR_12 - 1) /
                       VAR_7->n_div[3];
        FUNC_3(VAR_7, VAR_11->ppc_coeffs, VAR_16,
                VAR_2, VAR_10->ppc_shape_cb,
                VAR_10->ppc_shape_cb + VAR_19 * VAR_4,
                VAR_19);
    }

    for (VAR_17 = 0; VAR_17 < VAR_12; VAR_17++) {
        float *VAR_20 = VAR_8 + VAR_10->size * VAR_17;
        float VAR_21[VAR_3];

        for (VAR_18 = 0; VAR_18 < VAR_13; VAR_18++) {
            VAR_7->dec_bark_env(VAR_7, VAR_11->bark1[VAR_17][VAR_18],
                               VAR_11->bark_use_hist[VAR_17][VAR_18], VAR_17,
                               VAR_7->tmp_buf, VAR_15[VAR_13 * VAR_17 + VAR_18], VAR_9);

            VAR_7->fdsp->vector_fmul(VAR_20 + VAR_14 * VAR_18,
                                   VAR_20 + VAR_14 * VAR_18,
                                   VAR_7->tmp_buf, VAR_14);
        }

        if (VAR_9 == VAR_1)
            VAR_7->decode_ppc(VAR_7, VAR_11->p_coef[VAR_17], VAR_11->g_coef[VAR_17],
                             VAR_16 + VAR_17 * VAR_10->ppc_shape_len, VAR_20);

        FUNC_2(VAR_7, VAR_11->lpc_idx1[VAR_17], VAR_11->lpc_idx2[VAR_17],
                   VAR_11->lpc_hist_idx[VAR_17], VAR_21, VAR_7->lsp_hist[VAR_17]);

        FUNC_1(VAR_7, VAR_21, VAR_9, VAR_7->tmp_buf);

        for (VAR_18 = 0; VAR_18 < VAR_10->fmode[VAR_9].sub; VAR_18++) {
            VAR_7->fdsp->vector_fmul(VAR_20, VAR_20, VAR_7->tmp_buf, VAR_14);
            VAR_20 += VAR_14;
        }
    }
}
