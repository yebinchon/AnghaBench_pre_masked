
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {int lsps; size_t lsp_def_mode; float* synth_history; float* excitation_history; int history_nsamples; scalar_t__ sframe_cache_size; double const* prev_lsps; int * zero_exc_pf; scalar_t__ do_apf; scalar_t__ has_residual_lsps; int lsp_q_mode; int sframe_cache; int gb; } ;
typedef TYPE_1__ WMAVoiceContext ;
struct TYPE_15__ {TYPE_1__* priv_data; } ;
struct TYPE_14__ {int nb_samples; scalar_t__* data; } ;
typedef int GetBitContext ;
typedef TYPE_2__ AVFrame ;
typedef TYPE_3__ AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_3__*,int ,char*,int,int) ;
 int FUNC_2 (TYPE_3__*,char*) ;
 int FUNC_3 (int *,double*) ;
 int FUNC_4 (int *,double*,double*,double*,double*,int ) ;
 int FUNC_5 (int *,double*) ;
 int FUNC_6 (int *,double*,double*,double*,double*,int ) ;
 int FUNC_7 (TYPE_3__*,TYPE_2__*,int ) ;
 int FUNC_8 (int *,int) ;
 scalar_t__ FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int *) ;
 int FUNC_11 (int *,int ,scalar_t__) ;
 int FUNC_12 (float*,...) ;
 int FUNC_13 (int *,int *,int) ;
 int FUNC_14 (int *,int) ;
 int FUNC_15 (double*,int) ;
 int FUNC_16 (TYPE_3__*,int *,int,float*,double*,double*,float*,float*) ;
 int FUNC_17 (TYPE_3__*) ;
 double** VAR_8 ;
 double** VAR_9 ;

__attribute__((used)) static int FUNC_18(AVCodecContext *VAR_10, AVFrame *VAR_11,
                            int *VAR_12)
{
    WMAVoiceContext *VAR_13 = VAR_10->priv_data;
    GetBitContext *VAR_14 = &VAR_13->gb, VAR_15;
    int VAR_16, VAR_17, VAR_18 = VAR_6;
    double VAR_19[VAR_3][VAR_5];
    const double *VAR_20 = VAR_13->lsps == 16 ?
        VAR_9[VAR_13->lsp_def_mode] : VAR_8[VAR_13->lsp_def_mode];
    float VAR_21[VAR_7 + VAR_6 + 12];
    float VAR_22[VAR_5 + VAR_6];
    float *VAR_23;

    FUNC_12(VAR_22, VAR_13->synth_history,
           VAR_13->lsps * sizeof(*VAR_22));
    FUNC_12(VAR_21, VAR_13->excitation_history,
           VAR_13->history_nsamples * sizeof(*VAR_21));

    if (VAR_13->sframe_cache_size > 0) {
        VAR_14 = &VAR_15;
        FUNC_11(VAR_14, VAR_13->sframe_cache, VAR_13->sframe_cache_size);
        VAR_13->sframe_cache_size = 0;
    }





    if (!FUNC_9(VAR_14)) {
        FUNC_2(VAR_10, "WMAPro-in-WMAVoice");
        return VAR_1;
    }


    if (FUNC_9(VAR_14)) {
        if ((VAR_18 = FUNC_8(VAR_14, 12)) > VAR_6) {
            FUNC_1(VAR_10, VAR_2,
                   "Superframe encodes > %d samples (%d), not allowed\n",
                   VAR_6, VAR_18);
            return VAR_0;
        }
    }


    if (VAR_13->has_residual_lsps) {
        double VAR_24[VAR_5], VAR_25[VAR_5 * 2], VAR_26[VAR_5 * 2];

        for (VAR_16 = 0; VAR_16 < VAR_13->lsps; VAR_16++)
            VAR_24[VAR_16] = VAR_13->prev_lsps[VAR_16] - VAR_20[VAR_16];

        if (VAR_13->lsps == 10) {
            FUNC_4(VAR_14, VAR_19[2], VAR_24, VAR_25, VAR_26, VAR_13->lsp_q_mode);
        } else
            FUNC_6(VAR_14, VAR_19[2], VAR_24, VAR_25, VAR_26, VAR_13->lsp_q_mode);

        for (VAR_16 = 0; VAR_16 < VAR_13->lsps; VAR_16++) {
            VAR_19[0][VAR_16] = VAR_20[VAR_16] + (VAR_25[VAR_16] - VAR_26[VAR_16 * 2]);
            VAR_19[1][VAR_16] = VAR_20[VAR_16] + (VAR_25[VAR_13->lsps + VAR_16] - VAR_26[VAR_16 * 2 + 1]);
            VAR_19[2][VAR_16] += VAR_20[VAR_16];
        }
        for (VAR_16 = 0; VAR_16 < 3; VAR_16++)
            FUNC_15(VAR_19[VAR_16], VAR_13->lsps);
    }



    FUNC_0(VAR_11);


    VAR_11->nb_samples = VAR_6;
    if ((VAR_17 = FUNC_7(VAR_10, VAR_11, 0)) < 0)
        return VAR_17;
    VAR_11->nb_samples = VAR_18;
    VAR_23 = (float *)VAR_11->data[0];


    for (VAR_16 = 0; VAR_16 < 3; VAR_16++) {
        if (!VAR_13->has_residual_lsps) {
            int VAR_27;

            if (VAR_13->lsps == 10) {
                FUNC_3(VAR_14, VAR_19[VAR_16]);
            } else
                FUNC_5(VAR_14, VAR_19[VAR_16]);

            for (VAR_27 = 0; VAR_27 < VAR_13->lsps; VAR_27++)
                VAR_19[VAR_16][VAR_27] += VAR_20[VAR_27];
            FUNC_15(VAR_19[VAR_16], VAR_13->lsps);
        }

        if ((VAR_17 = FUNC_16(VAR_10, VAR_14, VAR_16,
                               &VAR_23[VAR_16 * VAR_4],
                               VAR_19[VAR_16], VAR_16 == 0 ? VAR_13->prev_lsps : VAR_19[VAR_16 - 1],
                               &VAR_21[VAR_13->history_nsamples + VAR_16 * VAR_4],
                               &VAR_22[VAR_13->lsps + VAR_16 * VAR_4]))) {
            *VAR_12 = 0;
            return VAR_17;
        }
    }




    if (FUNC_9(VAR_14)) {
        VAR_17 = FUNC_8(VAR_14, 4);
        FUNC_14(VAR_14, 10 * (VAR_17 + 1));
    }

    if (FUNC_10(VAR_14) < 0) {
        FUNC_17(VAR_10);
        return VAR_0;
    }

    *VAR_12 = 1;


    FUNC_12(VAR_13->prev_lsps, VAR_19[2],
           VAR_13->lsps * sizeof(*VAR_13->prev_lsps));
    FUNC_12(VAR_13->synth_history, &VAR_22[VAR_6],
           VAR_13->lsps * sizeof(*VAR_22));
    FUNC_12(VAR_13->excitation_history, &VAR_21[VAR_6],
           VAR_13->history_nsamples * sizeof(*VAR_21));
    if (VAR_13->do_apf)
        FUNC_13(VAR_13->zero_exc_pf, &VAR_13->zero_exc_pf[VAR_6],
                VAR_13->history_nsamples * sizeof(*VAR_13->zero_exc_pf));

    return 0;
}
