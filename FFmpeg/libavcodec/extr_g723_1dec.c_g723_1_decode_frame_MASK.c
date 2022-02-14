
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_9__ ;
typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


typedef int uint8_t ;
typedef int int16_t ;
struct TYPE_27__ {int amp_index; } ;
struct TYPE_26__ {int channels; TYPE_2__* priv_data; } ;
struct TYPE_25__ {int nb_samples; int** data; scalar_t__* extended_data; } ;
struct TYPE_24__ {int* data; int size; } ;
struct TYPE_23__ {int* audio; scalar_t__ past_frame_type; scalar_t__ cur_frame_type; int erased_frames; int* prev_lsp; int* excitation; int* prev_excitation; int interp_gain; int sid_gain; int cur_gain; int* sid_lsp; int* synth_mem; int lsp_index; TYPE_9__* subframe; int cng_random_seed; int random_seed; int interp_index; int cur_rate; int * pitch_lag; } ;
struct TYPE_22__ {scalar_t__ postfilter; TYPE_3__* ch; } ;
struct TYPE_21__ {int index; int opt_gain; int sc_gain; } ;
typedef TYPE_1__ PPFParam ;
typedef TYPE_2__ G723_1_Context ;
typedef TYPE_3__ G723_1_ChannelContext ;
typedef TYPE_4__ AVPacket ;
typedef TYPE_5__ AVFrame ;
typedef TYPE_6__ AVCodecContext ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_6__*,int ,char*,int,int) ;
 int FUNC_2 (TYPE_3__*,int ,int*,int*) ;
 int FUNC_3 (TYPE_3__*,int,int ,TYPE_1__*,int ) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (int*,int*,int*,int ,int ,int,int,int) ;
 int FUNC_6 (int*,int*,int*,int,int,int ,int,int) ;
 int FUNC_7 (int*,int*,int ,TYPE_9__*,int ) ;
 int FUNC_8 (int*,int*,int ,int) ;
 int FUNC_9 (int*,int*,int*) ;
 int FUNC_10 (TYPE_6__*,TYPE_5__*,int ) ;
 int* VAR_10 ;
 int FUNC_11 (TYPE_3__*,int*,int*,int*) ;
 int* VAR_11 ;
 int FUNC_12 (int*,TYPE_9__*,int ,int ,int) ;
 int FUNC_13 (TYPE_3__*) ;
 int FUNC_14 (int*,int*,int) ;
 int FUNC_15 (int*,int ,int) ;
 int FUNC_16 (int*,int*,int ,int,int *) ;
 int FUNC_17 (int) ;
 scalar_t__ FUNC_18 (TYPE_3__*,int const*,int) ;

__attribute__((used)) static int FUNC_19(AVCodecContext *VAR_12, void *VAR_13,
                               int *VAR_14, AVPacket *VAR_15)
{
    G723_1_Context *VAR_16 = VAR_12->priv_data;
    AVFrame *VAR_17 = VAR_13;
    const uint8_t *VAR_18 = VAR_15->data;
    int VAR_19 = VAR_15->size;
    int VAR_20 = VAR_18[0] & 3;

    PPFParam VAR_21[VAR_7];
    int16_t VAR_22[VAR_4];
    int16_t VAR_23[VAR_7 * VAR_4];
    int16_t VAR_24[VAR_8];
    int16_t *VAR_25;
    int VAR_26 = 0, VAR_27, VAR_28, VAR_29;

    if (VAR_19 < VAR_11[VAR_20] * VAR_12->channels) {
        if (VAR_19)
            FUNC_1(VAR_12, VAR_1,
                   "Expected %d bytes, got %d - skipping packet\n",
                   VAR_11[VAR_20], VAR_19);
        *VAR_14 = 0;
        return VAR_19;
    }

    VAR_17->nb_samples = VAR_3;
    if ((VAR_29 = FUNC_10(VAR_12, VAR_17, 0)) < 0)
        return VAR_29;

    for (int VAR_30 = 0; VAR_30 < VAR_12->channels; VAR_30++) {
        G723_1_ChannelContext *VAR_31 = &VAR_16->ch[VAR_30];
        int16_t *VAR_32 = VAR_31->audio;

        if (FUNC_18(VAR_31, VAR_18 + VAR_30 * (VAR_19 / VAR_12->channels),
                             VAR_19 / VAR_12->channels) < 0) {
            VAR_26 = 1;
            if (VAR_31->past_frame_type == VAR_0)
                VAR_31->cur_frame_type = VAR_0;
            else
                VAR_31->cur_frame_type = VAR_9;
        }

        VAR_25 = (int16_t *)VAR_17->extended_data[VAR_30];

        if (VAR_31->cur_frame_type == VAR_0) {
            if (!VAR_26)
                VAR_31->erased_frames = 0;
            else if (VAR_31->erased_frames != 3)
                VAR_31->erased_frames++;

            FUNC_8(VAR_22, VAR_31->prev_lsp, VAR_31->lsp_index, VAR_26);
            FUNC_9(VAR_23, VAR_22, VAR_31->prev_lsp);


            FUNC_14(VAR_31->prev_lsp, VAR_22, VAR_4 * sizeof(*VAR_31->prev_lsp));


            FUNC_14(VAR_31->excitation, VAR_31->prev_excitation,
                   VAR_5 * sizeof(*VAR_31->excitation));
            if (!VAR_31->erased_frames) {
                int16_t *VAR_33 = VAR_31->excitation + VAR_5;


                VAR_31->interp_gain = VAR_10[(VAR_31->subframe[2].amp_index +
                                                VAR_31->subframe[3].amp_index) >> 1];
                for (VAR_27 = 0; VAR_27 < VAR_7; VAR_27++) {
                    FUNC_12(VAR_33, &VAR_31->subframe[VAR_27], VAR_31->cur_rate,
                                       VAR_31->pitch_lag[VAR_27 >> 1], VAR_27);
                    FUNC_7(VAR_24,
                                                 &VAR_31->excitation[VAR_8 * VAR_27],
                                                 VAR_31->pitch_lag[VAR_27 >> 1],
                                                 &VAR_31->subframe[VAR_27], VAR_31->cur_rate);

                    for (VAR_28 = 0; VAR_28 < VAR_8; VAR_28++) {
                        int VAR_34 = FUNC_0(VAR_33[VAR_28] * 2);
                        VAR_33[VAR_28] = FUNC_0(VAR_34 + VAR_24[VAR_28]);
                    }
                    VAR_33 += VAR_8;
                }

                VAR_33 = VAR_31->excitation + VAR_5;

                VAR_31->interp_index = FUNC_2(VAR_31, VAR_31->pitch_lag[1],
                                                    &VAR_31->sid_gain, &VAR_31->cur_gain);


                if (VAR_16->postfilter) {
                    VAR_27 = VAR_5;
                    for (VAR_28 = 0; VAR_28 < VAR_7; VAR_27 += VAR_8, VAR_28++)
                        FUNC_3(VAR_31, VAR_27, VAR_31->pitch_lag[VAR_28 >> 1],
                                       VAR_21 + VAR_28, VAR_31->cur_rate);

                    for (VAR_27 = 0, VAR_28 = 0; VAR_28 < VAR_7; VAR_27 += VAR_8, VAR_28++)
                        FUNC_5(VAR_31->audio + VAR_4 + VAR_27,
                                                     VAR_33 + VAR_27,
                                                     VAR_33 + VAR_27 + VAR_21[VAR_28].index,
                                                     VAR_21[VAR_28].sc_gain,
                                                     VAR_21[VAR_28].opt_gain,
                                                     1 << 14, 15, VAR_8);
                } else {
                    VAR_32 = VAR_33 - VAR_4;
                }


                FUNC_14(VAR_31->prev_excitation, VAR_31->excitation + VAR_3,
                       VAR_5 * sizeof(*VAR_31->excitation));
            } else {
                VAR_31->interp_gain = (VAR_31->interp_gain * 3 + 2) >> 2;
                if (VAR_31->erased_frames == 3) {

                    FUNC_15(VAR_31->excitation, 0,
                           (VAR_3 + VAR_5) * sizeof(*VAR_31->excitation));
                    FUNC_15(VAR_31->prev_excitation, 0,
                           VAR_5 * sizeof(*VAR_31->excitation));
                    FUNC_15(VAR_17->data[0], 0,
                           (VAR_3 + VAR_4) * sizeof(int16_t));
                } else {
                    int16_t *VAR_35 = VAR_31->audio + VAR_4;


                    FUNC_16(VAR_31->excitation, VAR_35, VAR_31->interp_index,
                                    VAR_31->interp_gain, &VAR_31->random_seed);


                    FUNC_14(VAR_31->prev_excitation, VAR_35 + (VAR_3 - VAR_5),
                           VAR_5 * sizeof(*VAR_31->excitation));
                }
            }
            VAR_31->cng_random_seed = VAR_2;
        } else {
            if (VAR_31->cur_frame_type == VAR_6) {
                VAR_31->sid_gain = FUNC_17(VAR_31->subframe[0].amp_index);
                FUNC_8(VAR_31->sid_lsp, VAR_31->prev_lsp, VAR_31->lsp_index, 0);
            } else if (VAR_31->past_frame_type == VAR_0) {
                VAR_31->sid_gain = FUNC_4(VAR_31);
            }

            if (VAR_31->past_frame_type == VAR_0)
                VAR_31->cur_gain = VAR_31->sid_gain;
            else
                VAR_31->cur_gain = (VAR_31->cur_gain * 7 + VAR_31->sid_gain) >> 3;
            FUNC_13(VAR_31);
            FUNC_9(VAR_23, VAR_31->sid_lsp, VAR_31->prev_lsp);

            FUNC_14(VAR_31->prev_lsp, VAR_31->sid_lsp, VAR_4 * sizeof(*VAR_31->prev_lsp));
        }

        VAR_31->past_frame_type = VAR_31->cur_frame_type;

        FUNC_14(VAR_31->audio, VAR_31->synth_mem, VAR_4 * sizeof(*VAR_31->audio));
        for (VAR_27 = VAR_4, VAR_28 = 0; VAR_28 < VAR_7; VAR_27 += VAR_8, VAR_28++)
            FUNC_6(VAR_31->audio + VAR_27, &VAR_23[VAR_28 * VAR_4],
                                        VAR_32 + VAR_27, VAR_8, VAR_4,
                                        0, 1, 1 << 12);
        FUNC_14(VAR_31->synth_mem, VAR_31->audio + VAR_3, VAR_4 * sizeof(*VAR_31->audio));

        if (VAR_16->postfilter) {
            FUNC_11(VAR_31, VAR_23, VAR_31->audio, VAR_25);
        } else {
            for (VAR_27 = 0; VAR_27 < VAR_3; VAR_27++)
                VAR_25[VAR_27] = FUNC_0(2 * VAR_31->audio[VAR_4 + VAR_27]);
        }
    }

    *VAR_14 = 1;

    return VAR_11[VAR_20] * VAR_12->channels;
}
