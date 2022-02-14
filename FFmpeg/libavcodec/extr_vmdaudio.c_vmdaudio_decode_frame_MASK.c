
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int int16_t ;
struct TYPE_10__ {int chunk_size; int out_bps; } ;
typedef TYPE_1__ VmdAudioContext ;
struct TYPE_13__ {int block_align; int channels; TYPE_1__* priv_data; } ;
struct TYPE_12__ {int nb_samples; int** data; } ;
struct TYPE_11__ {int* data; int size; } ;
typedef TYPE_2__ AVPacket ;
typedef TYPE_3__ AVFrame ;
typedef TYPE_4__ AVCodecContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int const*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_4__*,int ,char*,...) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int*,int const*,int,int) ;
 int FUNC_6 (TYPE_4__*,TYPE_3__*,int ) ;
 int FUNC_7 (int*,int const*,int) ;
 int FUNC_8 (int*,int,int) ;

__attribute__((used)) static int FUNC_9(AVCodecContext *VAR_6, void *VAR_7,
                                 int *VAR_8, AVPacket *VAR_9)
{
    AVFrame *VAR_10 = VAR_7;
    const uint8_t *VAR_11 = VAR_9->data;
    const uint8_t *VAR_12;
    int VAR_13 = VAR_9->size;
    VmdAudioContext *VAR_14 = VAR_6->priv_data;
    int VAR_15, VAR_16, VAR_17;
    int VAR_18;
    uint8_t *VAR_19;
    int16_t *VAR_20;

    if (VAR_13 < 16) {
        FUNC_3(VAR_6, VAR_1, "skipping small junk packet\n");
        *VAR_8 = 0;
        return VAR_13;
    }

    VAR_15 = VAR_11[6];
    if (VAR_15 < VAR_2 || VAR_15 > VAR_4) {
        FUNC_3(VAR_6, VAR_0, "unknown block type: %d\n", VAR_15);
        return FUNC_0(VAR_5);
    }
    VAR_11 += 16;
    VAR_13 -= 16;


    VAR_16 = 0;
    if (VAR_15 == VAR_3) {
        uint32_t VAR_21;
        if (VAR_13 < 4) {
            FUNC_3(VAR_6, VAR_0, "packet is too small\n");
            return FUNC_0(VAR_5);
        }
        VAR_21 = FUNC_1(VAR_11);
        VAR_16 = FUNC_4(VAR_21);
        VAR_11 += 4;
        VAR_13 -= 4;
    } else if (VAR_15 == VAR_4) {
        VAR_16 = 1;
        VAR_13 = 0;
    }


    VAR_17 = VAR_13 / VAR_14->chunk_size;


    VAR_13 = VAR_17 * VAR_14->chunk_size;


    VAR_10->nb_samples = ((VAR_16 + VAR_17) * VAR_6->block_align) /
                        VAR_6->channels;
    if ((VAR_18 = FUNC_6(VAR_6, VAR_10, 0)) < 0)
        return VAR_18;
    VAR_19 = VAR_10->data[0];
    VAR_20 = (int16_t *)VAR_10->data[0];


    if (VAR_16 > 0) {
        int VAR_22 = VAR_6->block_align * VAR_16;
        FUNC_2(VAR_6->block_align * VAR_16 <= VAR_10->nb_samples * VAR_6->channels);

        if (VAR_14->out_bps == 2) {
            FUNC_8(VAR_20, 0x00, VAR_22 * 2);
            VAR_20 += VAR_22;
        } else {
            FUNC_8(VAR_19, 0x80, VAR_22);
            VAR_19 += VAR_22;
        }
    }


    if (VAR_17 > 0) {
        VAR_12 = VAR_11 + VAR_13;
        FUNC_2((VAR_13 & (VAR_6->channels > 1)) == 0);
        while (VAR_12 - VAR_11 >= VAR_14->chunk_size) {
            if (VAR_14->out_bps == 2) {
                FUNC_5(VAR_20, VAR_11, VAR_14->chunk_size,
                                 VAR_6->channels);
                VAR_20 += VAR_6->block_align;
            } else {
                FUNC_7(VAR_19, VAR_11, VAR_14->chunk_size);
                VAR_19 += VAR_6->block_align;
            }
            VAR_11 += VAR_14->chunk_size;
        }
    }

    *VAR_8 = 1;

    return VAR_9->size;
}
