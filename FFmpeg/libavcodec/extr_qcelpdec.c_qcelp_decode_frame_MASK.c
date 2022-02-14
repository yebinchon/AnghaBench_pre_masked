
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;
typedef struct TYPE_20__ TYPE_11__ ;


typedef int uint8_t ;
struct TYPE_25__ {TYPE_1__* priv_data; } ;
struct TYPE_24__ {int nb_samples; scalar_t__* data; } ;
struct TYPE_23__ {int* data; int size; } ;
struct TYPE_22__ {size_t index; int bitpos; int bitlen; } ;
struct TYPE_20__ {int* plag; scalar_t__* pfrac; int cbgain; scalar_t__ reserved; } ;
struct TYPE_21__ {size_t bitrate; int first16bits; float* formant_mem; float* prev_lspf; size_t prev_bitrate; scalar_t__ erasure_count; TYPE_11__ frame; int gb; } ;
typedef int QCELPFrame ;
typedef TYPE_1__ QCELPContext ;
typedef TYPE_2__ QCELPBitmap ;
typedef TYPE_3__ AVPacket ;
typedef TYPE_4__ AVFrame ;
typedef TYPE_5__ AVCodecContext ;


 int FUNC_0 (int const*) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int FUNC_1 (TYPE_1__*,float*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*,float*,float*) ;
 int FUNC_4 (TYPE_1__*,float*) ;
 scalar_t__ FUNC_5 (TYPE_1__*,float*) ;
 size_t FUNC_6 (TYPE_5__*,int,int const**) ;
 int FUNC_7 (float*,float*,float*,int,int) ;
 int FUNC_8 (TYPE_5__*,TYPE_4__*,int ) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int *,int const*,int) ;
 int FUNC_11 (TYPE_1__*,float*,float*,int) ;
 int FUNC_12 (float*,float*,int) ;
 int FUNC_13 (TYPE_11__*,int ,int) ;
 int FUNC_14 (TYPE_1__*,float*,float*) ;
 int* VAR_5 ;
 TYPE_2__** VAR_6 ;
 int FUNC_15 (TYPE_5__*,char*) ;

__attribute__((used)) static int FUNC_16(AVCodecContext *VAR_7, void *VAR_8,
                              int *VAR_9, AVPacket *VAR_10)
{
    const uint8_t *VAR_11 = VAR_10->data;
    int VAR_12 = VAR_10->size;
    QCELPContext *VAR_13 = VAR_7->priv_data;
    AVFrame *VAR_14 = VAR_8;
    float *VAR_15;
    int VAR_16, VAR_17;
    float VAR_18[10], VAR_19[10];
    float VAR_20[16];
    float *VAR_21;


    VAR_14->nb_samples = 160;
    if ((VAR_17 = FUNC_8(VAR_7, VAR_14, 0)) < 0)
        return VAR_17;
    VAR_15 = (float *)VAR_14->data[0];

    if ((VAR_13->bitrate = FUNC_6(VAR_7, VAR_12, &VAR_11)) == VAR_0) {
        FUNC_15(VAR_7, "Bitrate cannot be determined.");
        goto erasure;
    }

    if (VAR_13->bitrate == VAR_2 &&
        (VAR_13->first16bits = FUNC_0(VAR_11)) == 0xFFFF) {
        FUNC_15(VAR_7, "Bitrate is 1/8 and first 16 bits are on.");
        goto erasure;
    }

    if (VAR_13->bitrate > VAR_4) {
        const QCELPBitmap *VAR_22 = VAR_6[VAR_13->bitrate];
        const QCELPBitmap *VAR_23 = VAR_6[VAR_13->bitrate] +
                                         VAR_5[VAR_13->bitrate];
        uint8_t *VAR_24 = (uint8_t *)&VAR_13->frame;

        if ((VAR_17 = FUNC_10(&VAR_13->gb, VAR_11, VAR_12)) < 0)
            return VAR_17;

        FUNC_13(&VAR_13->frame, 0, sizeof(QCELPFrame));

        for (; VAR_22 < VAR_23; VAR_22++)
            VAR_24[VAR_22->index] |= FUNC_9(&VAR_13->gb, VAR_22->bitlen) << VAR_22->bitpos;


        if (VAR_13->frame.reserved) {
            FUNC_15(VAR_7, "Wrong data in reserved frame area.");
            goto erasure;
        }
        if (VAR_13->bitrate == VAR_3 &&
            FUNC_2(VAR_13->frame.cbgain)) {
            FUNC_15(VAR_7, "Codebook gain sanity check failed.");
            goto erasure;
        }

        if (VAR_13->bitrate >= VAR_1) {
            for (VAR_16 = 0; VAR_16 < 4; VAR_16++) {
                if (VAR_13->frame.pfrac[VAR_16] && VAR_13->frame.plag[VAR_16] >= 124) {
                    FUNC_15(VAR_7, "Cannot initialize pitch filter.");
                    goto erasure;
                }
            }
        }
    }

    FUNC_4(VAR_13, VAR_20);
    FUNC_3(VAR_13, VAR_20, VAR_15);

    if (FUNC_5(VAR_13, VAR_18) < 0) {
        FUNC_15(VAR_7, "Badly received packets in frame.");
        goto erasure;
    }

    FUNC_1(VAR_13, VAR_15);

    if (VAR_13->bitrate == VAR_0) {
erasure:
        VAR_13->bitrate = VAR_0;
        VAR_13->erasure_count++;
        FUNC_4(VAR_13, VAR_20);
        FUNC_3(VAR_13, VAR_20, VAR_15);
        FUNC_5(VAR_13, VAR_18);
        FUNC_1(VAR_13, VAR_15);
    } else
        VAR_13->erasure_count = 0;

    VAR_21 = VAR_13->formant_mem + 10;
    for (VAR_16 = 0; VAR_16 < 4; VAR_16++) {
        FUNC_11(VAR_13, VAR_18, VAR_19, VAR_16);
        FUNC_7(VAR_21, VAR_19,
                                     VAR_15 + VAR_16 * 40, 40, 10);
        VAR_21 += 40;
    }


    FUNC_14(VAR_13, VAR_15, VAR_19);

    FUNC_12(VAR_13->formant_mem, VAR_13->formant_mem + 160, 10 * sizeof(float));

    FUNC_12(VAR_13->prev_lspf, VAR_18, sizeof(VAR_13->prev_lspf));
    VAR_13->prev_bitrate = VAR_13->bitrate;

    *VAR_9 = 1;

    return VAR_12;
}
