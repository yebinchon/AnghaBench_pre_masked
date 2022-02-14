
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int uint8_t ;
typedef int int16_t ;
struct TYPE_19__ {int start; int lsf; int cb_index; } ;
struct TYPE_18__ {TYPE_1__* priv_data; } ;
struct TYPE_17__ {int nb_samples; int** data; } ;
struct TYPE_16__ {int size; int * data; } ;
struct TYPE_15__ {int mode; int* plc_residual; int block_samples; int* syntdenum; int* decresidual; int nsub; int last_lag; int* syntMem; int* old_syntdenum; int prev_enh_pl; int hpimemx; int hpimemy; scalar_t__ enhancer; int plc_lpc; TYPE_6__ frame; int lsfdeq; int weightdenum; int lpc_n; int gb; } ;
typedef int ILBCFrame ;
typedef TYPE_1__ ILBCContext ;
typedef TYPE_2__ AVPacket ;
typedef TYPE_3__ AVFrame ;
typedef TYPE_4__ AVCodecContext ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,TYPE_6__*,int*,int*) ;
 int FUNC_1 (int*,int ,int ,int*,int*,int,TYPE_1__*) ;
 int FUNC_2 (TYPE_4__*,TYPE_3__*,int ) ;
 int FUNC_3 (int*,int*,int*,size_t,int) ;
 int VAR_3 ;
 int FUNC_4 (int*,int ,int ,int ,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,int const*,int) ;
 int FUNC_7 (int ,size_t,int ) ;
 int FUNC_8 (int ,int ,int ) ;
 int FUNC_9 (int*,int ,int ,size_t,TYPE_1__*) ;
 int FUNC_10 (int*,int*,size_t) ;
 int FUNC_11 (TYPE_6__*,int ,int) ;
 scalar_t__ FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (int*,int*,size_t,int,int,int) ;

__attribute__((used)) static int FUNC_14(AVCodecContext *VAR_4, void *VAR_5,
                             int *VAR_6, AVPacket *VAR_7)
{
    const uint8_t *VAR_8 = VAR_7->data;
    AVFrame *VAR_9 = VAR_5;
    ILBCContext *VAR_10 = VAR_4->priv_data;
    int VAR_11 = VAR_10->mode, VAR_12;
    int16_t *VAR_13 = &VAR_10->plc_residual[VAR_1];

    if ((VAR_12 = FUNC_6(&VAR_10->gb, VAR_8, VAR_7->size)) < 0)
        return VAR_12;
    FUNC_11(&VAR_10->frame, 0, sizeof(ILBCFrame));

    VAR_9->nb_samples = VAR_10->block_samples;
    if ((VAR_12 = FUNC_2(VAR_4, VAR_9, 0)) < 0)
        return VAR_12;

    if (FUNC_12(VAR_10))
        VAR_11 = 0;
    if (VAR_10->frame.start < 1 || VAR_10->frame.start > 5)
        VAR_11 = 0;

    if (VAR_11) {
        FUNC_5(VAR_10->frame.cb_index);

        FUNC_8(VAR_10->lsfdeq, VAR_10->frame.lsf, VAR_10->lpc_n);
        FUNC_7(VAR_10->lsfdeq, VAR_1, VAR_10->lpc_n);
        FUNC_9(VAR_10->syntdenum, VAR_10->weightdenum,
                        VAR_10->lsfdeq, VAR_1, VAR_10);
        FUNC_0(VAR_10, &VAR_10->frame, VAR_10->decresidual, VAR_10->syntdenum);

        FUNC_1(VAR_10->plc_residual, VAR_10->plc_lpc, 0,
                               VAR_10->decresidual, VAR_10->syntdenum + (VAR_1 + 1) * (VAR_10->nsub - 1),
                               VAR_10->last_lag, VAR_10);

        FUNC_10(VAR_10->decresidual, VAR_10->plc_residual, VAR_10->block_samples * 2);
    }

    if (VAR_10->enhancer) {

    } else {
        int16_t VAR_14, VAR_15;


        if (VAR_10->mode == 20) {
            VAR_14 = FUNC_13(&VAR_10->decresidual[VAR_10->block_samples-60], &VAR_10->decresidual[VAR_10->block_samples-80],
                              60, 80, 20, -1);
        } else {
            VAR_14 = FUNC_13(&VAR_10->decresidual[VAR_10->block_samples-VAR_0],
                              &VAR_10->decresidual[VAR_10->block_samples-VAR_0-20],
                              VAR_0, 100, 20, -1);
        }


        VAR_10->last_lag = VAR_14;


        FUNC_10(VAR_13, VAR_10->decresidual, VAR_10->block_samples * 2);


        FUNC_10(&VAR_13[-VAR_1], VAR_10->syntMem, VAR_1 * 2);

        for (VAR_15 = 0; VAR_15 < VAR_10->nsub; VAR_15++) {
            FUNC_3(VAR_13+VAR_15*VAR_2, VAR_13+VAR_15*VAR_2,
                                      VAR_10->syntdenum + VAR_15*(VAR_1 + 1),
                                      VAR_1 + 1, VAR_2);
        }


        FUNC_10(VAR_10->syntMem, &VAR_13[VAR_10->block_samples-VAR_1], VAR_1 * 2);
    }

    FUNC_10(VAR_9->data[0], VAR_13, VAR_10->block_samples * 2);

    FUNC_4((int16_t *)VAR_9->data[0], VAR_3,
              VAR_10->hpimemy, VAR_10->hpimemx, VAR_10->block_samples);

    FUNC_10(VAR_10->old_syntdenum, VAR_10->syntdenum, VAR_10->nsub*(VAR_1 + 1) * 2);

    VAR_10->prev_enh_pl = 0;
    if (VAR_11 == 0)
        VAR_10->prev_enh_pl = 1;

    *VAR_6 = 1;

    return VAR_7->size;
}
