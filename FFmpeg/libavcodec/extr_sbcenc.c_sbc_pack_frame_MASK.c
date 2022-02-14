
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;
struct sbc_frame {int frequency; int blocks; int mode; int allocation; int subbands; int bitpool; int channels; int** scale_factor; int*** sb_sample_f; int crc_ctx; } ;
struct TYPE_3__ {int* data; int size; } ;
typedef int PutBitContext ;
typedef TYPE_1__ AVPacket ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct sbc_frame*,int**) ;
 int FUNC_1 (int ,int*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int*,int ) ;
 int FUNC_4 (int *,int,int) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static size_t FUNC_6(AVPacket *VAR_5, struct sbc_frame *VAR_6,
                             int VAR_7, bool VAR_8)
{
    PutBitContext VAR_9;


    uint8_t VAR_10[11] = { 0 };
    int VAR_11;

    uint32_t VAR_12;

    int VAR_13, VAR_14, VAR_15;
    int VAR_16[2][8];
    uint32_t VAR_17[2][8];
    uint32_t VAR_18[2][8];

    if (VAR_8) {
        VAR_5->data[0] = VAR_1;
        VAR_5->data[1] = 0;
        VAR_5->data[2] = 0;
    } else {
        VAR_5->data[0] = VAR_2;

        VAR_5->data[1] = (VAR_6->frequency & 0x03) << 6;
        VAR_5->data[1] |= (((VAR_6->blocks >> 2) - 1) & 0x03) << 4;
        VAR_5->data[1] |= (VAR_6->mode & 0x03) << 2;
        VAR_5->data[1] |= (VAR_6->allocation & 0x01) << 1;
        VAR_5->data[1] |= ((VAR_6->subbands == 8) & 0x01) << 0;

        VAR_5->data[2] = VAR_6->bitpool;

        if (VAR_6->bitpool > VAR_6->subbands << (4 + (VAR_6->mode == VAR_4
                                                   || VAR_6->mode == VAR_0)))
            return -5;
    }


    VAR_10[0] = VAR_5->data[1];
    VAR_10[1] = VAR_5->data[2];
    VAR_11 = 16;

    FUNC_3(&VAR_9, VAR_5->data + 4, VAR_5->size);

    if (VAR_6->mode == VAR_0) {
        FUNC_4(&VAR_9, VAR_6->subbands, VAR_7);
        VAR_10[VAR_11 >> 3] = VAR_7;
        VAR_11 += VAR_6->subbands;
    }

    for (VAR_13 = 0; VAR_13 < VAR_6->channels; VAR_13++) {
        for (VAR_14 = 0; VAR_14 < VAR_6->subbands; VAR_14++) {
            FUNC_4(&VAR_9, 4, VAR_6->scale_factor[VAR_13][VAR_14] & 0x0F);
            VAR_10[VAR_11 >> 3] <<= 4;
            VAR_10[VAR_11 >> 3] |= VAR_6->scale_factor[VAR_13][VAR_14] & 0x0F;
            VAR_11 += 4;
        }
    }


    if (VAR_11 % 8)
        VAR_10[VAR_11 >> 3] <<= 8 - (VAR_11 % 8);

    VAR_5->data[3] = FUNC_1(VAR_6->crc_ctx, VAR_10, VAR_11);

    FUNC_0(VAR_6, VAR_16);

    for (VAR_13 = 0; VAR_13 < VAR_6->channels; VAR_13++) {
        for (VAR_14 = 0; VAR_14 < VAR_6->subbands; VAR_14++) {
            VAR_17[VAR_13][VAR_14] = ((1 << VAR_16[VAR_13][VAR_14]) - 1) <<
                (32 - (VAR_6->scale_factor[VAR_13][VAR_14] +
                    VAR_3 + 2));
            VAR_18[VAR_13][VAR_14] = (uint32_t) 1 <<
                (VAR_6->scale_factor[VAR_13][VAR_14] +
                    VAR_3 + 1);
        }
    }

    for (VAR_15 = 0; VAR_15 < VAR_6->blocks; VAR_15++) {
        for (VAR_13 = 0; VAR_13 < VAR_6->channels; VAR_13++) {
            for (VAR_14 = 0; VAR_14 < VAR_6->subbands; VAR_14++) {

                if (VAR_16[VAR_13][VAR_14] == 0)
                    continue;

                VAR_12 = ((uint64_t) VAR_17[VAR_13][VAR_14] *
                    (VAR_18[VAR_13][VAR_14] +
                    VAR_6->sb_sample_f[VAR_15][VAR_13][VAR_14])) >> 32;

                FUNC_4(&VAR_9, VAR_16[VAR_13][VAR_14], VAR_12);
            }
        }
    }

    FUNC_2(&VAR_9);

    return (FUNC_5(&VAR_9) + 7) / 8;
}
