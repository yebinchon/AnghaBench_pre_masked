
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
struct sbc_frame {scalar_t__ mode; int subbands; int channels; int blocks; int bitpool; int codesize; int scale_factor; int sb_sample_f; } ;
struct TYPE_11__ {int (* sbc_calc_scalefactors_j ) (int ,int ,int,int) ;int (* sbc_calc_scalefactors ) (int ,int ,int,int,int) ;int X; int position; int (* sbc_enc_process_input_4s ) (int ,int ,int ,int,int) ;int (* sbc_enc_process_input_8s ) (int ,int ,int ,int,int) ;} ;
struct TYPE_10__ {TYPE_1__* priv_data; } ;
struct TYPE_9__ {int nb_samples; int * data; } ;
struct TYPE_8__ {int msbc; TYPE_6__ dsp; struct sbc_frame frame; } ;
typedef TYPE_1__ SBCEncContext ;
typedef int AVPacket ;
typedef TYPE_2__ AVFrame ;
typedef TYPE_3__ AVCodecContext ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (TYPE_3__*,int *,int,int ) ;
 int FUNC_2 (TYPE_6__*,struct sbc_frame*) ;
 int FUNC_3 (int *,struct sbc_frame*,int,int ) ;
 int FUNC_4 (int ,int ,int ,int,int) ;
 int FUNC_5 (int ,int ,int ,int,int) ;
 int FUNC_6 (int ,int ,int,int) ;
 int FUNC_7 (int ,int ,int,int,int) ;

__attribute__((used)) static int FUNC_8(AVCodecContext *VAR_3, AVPacket *VAR_4,
                            const AVFrame *VAR_5, int *VAR_6)
{
    SBCEncContext *VAR_7 = VAR_3->priv_data;
    struct sbc_frame *VAR_8 = &VAR_7->frame;
    uint8_t VAR_9 = VAR_8->mode == VAR_2;
    uint8_t VAR_10 = VAR_8->mode == VAR_1;
    int VAR_11, VAR_12 = 0;

    int VAR_13 = 4 + (4 * VAR_8->subbands * VAR_8->channels) / 8
                     + ((VAR_8->blocks * VAR_8->bitpool * (1 + VAR_10)
                     + VAR_9 * VAR_8->subbands) + 7) / 8;


    if (VAR_5->nb_samples * VAR_8->channels * 2 < VAR_8->codesize)
        return 0;

    if ((VAR_11 = FUNC_1(VAR_3, VAR_4, VAR_13, 0)) < 0)
        return VAR_11;


    if (VAR_8->subbands == 8)
        VAR_7->dsp.position = VAR_7->dsp.sbc_enc_process_input_8s(
                VAR_7->dsp.position, VAR_5->data[0], VAR_7->dsp.X,
                VAR_8->subbands * VAR_8->blocks, VAR_8->channels);
    else
        VAR_7->dsp.position = VAR_7->dsp.sbc_enc_process_input_4s(
                VAR_7->dsp.position, VAR_5->data[0], VAR_7->dsp.X,
                VAR_8->subbands * VAR_8->blocks, VAR_8->channels);

    FUNC_2(&VAR_7->dsp, &VAR_7->frame);

    if (VAR_8->mode == VAR_0)
        VAR_12 = VAR_7->dsp.sbc_calc_scalefactors_j(VAR_8->sb_sample_f,
                                             VAR_8->scale_factor,
                                             VAR_8->blocks,
                                             VAR_8->subbands);
    else
        VAR_7->dsp.sbc_calc_scalefactors(VAR_8->sb_sample_f,
                                       VAR_8->scale_factor,
                                       VAR_8->blocks,
                                       VAR_8->channels,
                                       VAR_8->subbands);
    FUNC_0();
    FUNC_3(VAR_4, VAR_8, VAR_12, VAR_7->msbc);

    *VAR_6 = 1;
    return 0;
}
