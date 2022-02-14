
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_36__ TYPE_6__ ;
typedef struct TYPE_35__ TYPE_5__ ;
typedef struct TYPE_34__ TYPE_4__ ;
typedef struct TYPE_33__ TYPE_3__ ;
typedef struct TYPE_32__ TYPE_2__ ;
typedef struct TYPE_31__ TYPE_24__ ;
typedef struct TYPE_30__ TYPE_21__ ;
typedef struct TYPE_29__ TYPE_1__ ;


struct TYPE_29__ {size_t mapping; scalar_t__ blockflag; } ;
typedef TYPE_1__ vorbis_enc_mode ;
struct TYPE_32__ {size_t* floor; size_t* mux; int coupling_steps; int* magnitude; int* angle; size_t* residue; } ;
typedef TYPE_2__ vorbis_enc_mapping ;
typedef int vorbis_enc_floor ;
struct TYPE_31__ {int remaining_samples; } ;
struct TYPE_30__ {int available; } ;
struct TYPE_33__ {int* log2_blocksize; int channels; float* coeffs; float* floor; TYPE_24__ afq; int * residues; int * floors; TYPE_2__* mappings; TYPE_1__* modes; scalar_t__ nmodes; TYPE_21__ bufqueue; } ;
typedef TYPE_3__ vorbis_enc_context ;
typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_36__ {int frame_size; TYPE_3__* priv_data; } ;
struct TYPE_35__ {int size; int duration; int pts; int data; } ;
struct TYPE_34__ {int size_in_bits; } ;
typedef TYPE_4__ PutBitContext ;
typedef TYPE_5__ AVPacket ;
typedef int AVFrame ;
typedef TYPE_6__ AVCodecContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (TYPE_3__*) ;
 int * FUNC_3 (int const*) ;
 int FUNC_4 (TYPE_6__*,int ,char*) ;
 int * FUNC_5 (TYPE_5__*,int ,int) ;
 int FUNC_6 (TYPE_24__*,int const*) ;
 int FUNC_7 (TYPE_24__*,int,int *,int*) ;
 int FUNC_8 (TYPE_6__*,TYPE_5__*,int,int ) ;
 int FUNC_9 (TYPE_6__*,TYPE_21__*,int *) ;
 scalar_t__ FUNC_10 (TYPE_3__*,int *,TYPE_4__*,int *,float*,int) ;
 int FUNC_11 (TYPE_3__*,int *,float*,int *,int) ;
 int FUNC_12 (TYPE_4__*) ;
 int FUNC_13 (scalar_t__) ;
 int FUNC_14 (TYPE_4__*,int ,int) ;
 int FUNC_15 (TYPE_3__*,int) ;
 int FUNC_16 (TYPE_4__*,int,int) ;
 int FUNC_17 (TYPE_4__*) ;
 scalar_t__ FUNC_18 (TYPE_3__*,int *,TYPE_4__*,float*,int,int) ;
 int * FUNC_19 (TYPE_6__*,int) ;

__attribute__((used)) static int FUNC_20(AVCodecContext *VAR_5, AVPacket *VAR_6,
                               const AVFrame *VAR_7, int *VAR_8)
{
    vorbis_enc_context *VAR_9 = VAR_5->priv_data;
    int VAR_10, VAR_11, VAR_12;
    int VAR_13 = 1 << (VAR_9->log2_blocksize[1] - 1);
    vorbis_enc_mode *VAR_14;
    vorbis_enc_mapping *VAR_15;
    PutBitContext VAR_16;

    if (VAR_7) {
        AVFrame *VAR_17;
        if ((VAR_11 = FUNC_6(&VAR_9->afq, VAR_7)) < 0)
            return VAR_11;
        VAR_17 = FUNC_3(VAR_7);
        if (!VAR_17)
            return FUNC_0(VAR_3);
        FUNC_9(VAR_5, &VAR_9->bufqueue, VAR_17);
    } else
        if (!VAR_9->afq.remaining_samples)
            return 0;

    VAR_12 = VAR_9->bufqueue.available * VAR_5->frame_size < VAR_13;
    VAR_12 = VAR_7 && VAR_12;
    if (VAR_12)
        return 0;


    if (!VAR_7) {
        if (VAR_9->bufqueue.available * VAR_5->frame_size < VAR_13) {
            int VAR_18 = (VAR_13/VAR_5->frame_size) - VAR_9->bufqueue.available;
            int VAR_19;

            for (VAR_19 = 0; VAR_19 < VAR_18; VAR_19++) {
               AVFrame *VAR_20 = FUNC_19(VAR_5, VAR_9->channels);
               if (!VAR_20)
                   return FUNC_0(VAR_3);

               FUNC_9(VAR_5, &VAR_9->bufqueue, VAR_20);
            }
        }
    }

    FUNC_15(VAR_9, VAR_5->frame_size);

    if (!FUNC_2(VAR_9))
        return 0;

    if ((VAR_11 = FUNC_8(VAR_5, VAR_6, 8192, 0)) < 0)
        return VAR_11;

    FUNC_14(&VAR_16, VAR_6->data, VAR_6->size);

    if (VAR_16.size_in_bits - FUNC_17(&VAR_16) < 1 + FUNC_13(VAR_9->nmodes - 1)) {
        FUNC_4(VAR_5, VAR_0, "output buffer is too small\n");
        return FUNC_0(VAR_2);
    }

    FUNC_16(&VAR_16, 1, 0);

    FUNC_16(&VAR_16, FUNC_13(VAR_9->nmodes - 1), 1);

    VAR_14 = &VAR_9->modes[1];
    VAR_15 = &VAR_9->mappings[VAR_14->mapping];
    if (VAR_14->blockflag) {
        FUNC_16(&VAR_16, 1, 1);
        FUNC_16(&VAR_16, 1, 1);
    }

    for (VAR_10 = 0; VAR_10 < VAR_9->channels; VAR_10++) {
        vorbis_enc_floor *VAR_21 = &VAR_9->floors[VAR_15->floor[VAR_15->mux[VAR_10]]];
        uint16_t VAR_22[VAR_4];
        FUNC_11(VAR_9, VAR_21, &VAR_9->coeffs[VAR_10 * VAR_13], VAR_22, VAR_13);
        if (FUNC_10(VAR_9, VAR_21, &VAR_16, VAR_22, &VAR_9->floor[VAR_10 * VAR_13], VAR_13)) {
            FUNC_4(VAR_5, VAR_0, "output buffer is too small\n");
            return FUNC_0(VAR_2);
        }
    }

    for (VAR_10 = 0; VAR_10 < VAR_9->channels * VAR_13; VAR_10++)
        VAR_9->coeffs[VAR_10] /= VAR_9->floor[VAR_10];

    for (VAR_10 = 0; VAR_10 < VAR_15->coupling_steps; VAR_10++) {
        float *VAR_23 = VAR_9->coeffs + VAR_15->magnitude[VAR_10] * VAR_13;
        float *VAR_24 = VAR_9->coeffs + VAR_15->angle[VAR_10] * VAR_13;
        int VAR_25;
        for (VAR_25 = 0; VAR_25 < VAR_13; VAR_25++) {
            float VAR_26 = VAR_24[VAR_25];
            VAR_24[VAR_25] -= VAR_23[VAR_25];
            if (VAR_23[VAR_25] > 0)
                VAR_24[VAR_25] = -VAR_24[VAR_25];
            if (VAR_24[VAR_25] < 0)
                VAR_23[VAR_25] = VAR_26;
        }
    }

    if (FUNC_18(VAR_9, &VAR_9->residues[VAR_15->residue[VAR_15->mux[0]]],
                       &VAR_16, VAR_9->coeffs, VAR_13, VAR_9->channels)) {
        FUNC_4(VAR_5, VAR_0, "output buffer is too small\n");
        return FUNC_0(VAR_2);
    }

    FUNC_12(&VAR_16);
    VAR_6->size = FUNC_17(&VAR_16) >> 3;

    FUNC_7(&VAR_9->afq, VAR_13, &VAR_6->pts, &VAR_6->duration);

    if (VAR_13 > VAR_6->duration) {
        uint8_t *VAR_27 = FUNC_5(VAR_6, VAR_1, 10);
        if (!VAR_27)
            return FUNC_0(VAR_3);
        FUNC_1(&VAR_27[4], VAR_13 - VAR_6->duration);
    }

    *VAR_8 = 1;
    return 0;
}
