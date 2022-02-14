
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct sbc_frame {scalar_t__ mode; int subbands; int blocks; int bitpool; int frequency; int channels; int codesize; int crc_ctx; void* allocation; } ;
struct TYPE_10__ {int position; int increment; int X; } ;
struct TYPE_9__ {scalar_t__ profile; int channels; int sample_rate; int frame_size; int global_quality; int bit_rate; TYPE_1__* codec; TYPE_2__* priv_data; } ;
struct TYPE_8__ {int msbc; int max_delay; TYPE_5__ dsp; struct sbc_frame frame; } ;
struct TYPE_7__ {scalar_t__* supported_samplerates; } ;
typedef TYPE_2__ SBCEncContext ;
typedef TYPE_3__ AVCodecContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 void* VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int,int,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_3__*,int ,char*) ;
 int FUNC_4 (TYPE_5__*) ;
 int FUNC_5 (int *,int ,int) ;

__attribute__((used)) static int FUNC_6(AVCodecContext *VAR_12)
{
    SBCEncContext *VAR_13 = VAR_12->priv_data;
    struct sbc_frame *VAR_14 = &VAR_13->frame;

    if (VAR_12->profile == VAR_3)
        VAR_13->msbc = 1;

    if (VAR_13->msbc) {
        if (VAR_12->channels != 1) {
            FUNC_3(VAR_12, VAR_1, "mSBC require mono channel.\n");
            return FUNC_0(VAR_2);
        }

        if (VAR_12->sample_rate != 16000) {
            FUNC_3(VAR_12, VAR_1, "mSBC require 16 kHz samplerate.\n");
            return FUNC_0(VAR_2);
        }

        VAR_14->mode = VAR_9;
        VAR_14->subbands = 8;
        VAR_14->blocks = VAR_5;
        VAR_14->allocation = VAR_6;
        VAR_14->bitpool = 26;

        VAR_12->frame_size = 8 * VAR_5;
    } else {
        int VAR_15;

        if (VAR_12->global_quality > 255*VAR_4) {
            FUNC_3(VAR_12, VAR_1, "bitpool > 255 is not allowed.\n");
            return FUNC_0(VAR_2);
        }

        if (VAR_12->channels == 1) {
            VAR_14->mode = VAR_9;
            if (VAR_13->max_delay <= 3000 || VAR_12->bit_rate > 270000)
                VAR_14->subbands = 4;
            else
                VAR_14->subbands = 8;
        } else {
            if (VAR_12->bit_rate < 180000 || VAR_12->bit_rate > 420000)
                VAR_14->mode = VAR_8;
            else
                VAR_14->mode = VAR_10;
            if (VAR_13->max_delay <= 4000 || VAR_12->bit_rate > 420000)
                VAR_14->subbands = 4;
            else
                VAR_14->subbands = 8;
        }

        VAR_14->blocks = FUNC_1(((VAR_13->max_delay * VAR_12->sample_rate + 2)
                               / (1000000 * VAR_14->subbands)) - 10, 4, 16) & ~3;

        VAR_14->allocation = VAR_6;

        VAR_15 = VAR_14->blocks * ((VAR_14->mode == VAR_7) + 1);
        VAR_14->bitpool = (((VAR_12->bit_rate * VAR_14->subbands * VAR_14->blocks) / VAR_12->sample_rate)
                          - 4 * VAR_14->subbands * VAR_12->channels
                          - (VAR_14->mode == VAR_8)*VAR_14->subbands - 32 + VAR_15/2) / VAR_15;
        if (VAR_12->global_quality > 0)
            VAR_14->bitpool = VAR_12->global_quality / VAR_4;

        VAR_12->frame_size = 4*((VAR_14->subbands >> 3) + 1) * 4*(VAR_14->blocks >> 2);
    }

    for (int VAR_16 = 0; VAR_12->codec->supported_samplerates[VAR_16]; VAR_16++)
        if (VAR_12->sample_rate == VAR_12->codec->supported_samplerates[VAR_16])
            VAR_14->frequency = VAR_16;

    VAR_14->channels = VAR_12->channels;
    VAR_14->codesize = VAR_14->subbands * VAR_14->blocks * VAR_12->channels * 2;
    VAR_14->crc_ctx = FUNC_2(VAR_0);

    FUNC_5(&VAR_13->dsp.X, 0, sizeof(VAR_13->dsp.X));
    VAR_13->dsp.position = (VAR_11 - VAR_14->subbands * 9) & ~7;
    VAR_13->dsp.increment = VAR_13->msbc ? 1 : 4;
    FUNC_4(&VAR_13->dsp);

    return 0;
}
