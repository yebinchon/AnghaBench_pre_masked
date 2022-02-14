
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_19__ {TYPE_2__* priv_data; } ;
struct TYPE_18__ {int key_frame; int** data; int* linesize; int pict_type; } ;
struct TYPE_17__ {int* data; int size; } ;
struct TYPE_16__ {TYPE_4__* frame; } ;
struct TYPE_15__ {int member_0; } ;
typedef TYPE_1__ GetBitContext ;
typedef int AvsVideoSubType ;
typedef TYPE_2__ AvsContext ;
typedef int AvsBlockType ;
typedef TYPE_3__ AVPacket ;
typedef TYPE_4__ AVFrame ;
typedef TYPE_5__ AVCodecContext ;


 int VAR_0 ;

 int VAR_1 ;



 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int const*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_4__*,TYPE_4__* const) ;
 int FUNC_3 (TYPE_5__*,TYPE_4__* const,int ) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,int const*,int) ;

__attribute__((used)) static int
FUNC_6(AVCodecContext * VAR_5,
                 void *VAR_6, int *VAR_7, AVPacket *VAR_8)
{
    const uint8_t *VAR_9 = VAR_8->data;
    const uint8_t *VAR_10 = VAR_8->data + VAR_8->size;
    int VAR_11 = VAR_8->size;
    AvsContext *const VAR_12 = VAR_5->priv_data;
    AVFrame *VAR_13 = VAR_6;
    AVFrame *const VAR_14 = VAR_12->frame;
    const uint8_t *VAR_15, *VAR_16;
    uint8_t *VAR_17;
    int VAR_18, VAR_19, VAR_20, VAR_21, VAR_22, VAR_23, VAR_24 = 3, VAR_25 = 3;
    AvsVideoSubType VAR_26;
    AvsBlockType VAR_27;
    GetBitContext VAR_28 = {0};

    if ((VAR_23 = FUNC_3(VAR_5, VAR_14, 0)) < 0)
        return VAR_23;
    VAR_14->pict_type = VAR_4;
    VAR_14->key_frame = 0;

    VAR_17 = VAR_14->data[0];
    VAR_22 = VAR_14->linesize[0];

    if (VAR_10 - VAR_9 < 4)
        return VAR_0;
    VAR_26 = VAR_9[0];
    VAR_27 = VAR_9[1];
    VAR_9 += 4;

    if (VAR_27 == VAR_1) {
        int VAR_29, VAR_30;
        uint32_t *VAR_31 = (uint32_t *) VAR_14->data[1];

        VAR_29 = FUNC_0(VAR_9);
        VAR_30 = VAR_29 + FUNC_0(VAR_9 + 2);
        if (VAR_29 >= 256 || VAR_30 > 256 || VAR_10 - VAR_9 < 4 + 4 + 3 * (VAR_30 - VAR_29))
            return VAR_0;
        VAR_9 += 4;
        for (VAR_18=VAR_29; VAR_18<VAR_30; VAR_18++, VAR_9+=3) {
            VAR_31[VAR_18] = (VAR_9[0] << 18) | (VAR_9[1] << 10) | (VAR_9[2] << 2);
            VAR_31[VAR_18] |= 0xFFU << 24 | (VAR_31[VAR_18] >> 6) & 0x30303;
        }

        VAR_26 = VAR_9[0];
        VAR_27 = VAR_9[1];
        VAR_9 += 4;
    }

    if (VAR_27 != VAR_2)
        return VAR_0;

    switch (VAR_26) {
    case 131:
        VAR_14->pict_type = VAR_3;
        VAR_14->key_frame = 1;
    case 128:
        VAR_24 = 3;
        VAR_25 = 3;
        break;

    case 130:
        VAR_24 = 2;
        VAR_25 = 2;
        break;

    case 129:
        VAR_24 = 2;
        VAR_25 = 3;
        break;

    default:
      return VAR_0;
    }

    if (VAR_10 - VAR_9 < 256 * VAR_24 * VAR_25)
        return VAR_0;
    VAR_15 = VAR_9 + (256 * VAR_24 * VAR_25);
    if (VAR_26 != 131) {
        int VAR_32 = ((318 / VAR_24 + 7) / 8) * (198 / VAR_25);
        if (VAR_10 - VAR_15 < VAR_32)
            return VAR_0;
        FUNC_5(&VAR_28, VAR_15, VAR_32 * 8);
        VAR_15 += VAR_32;
    }

    for (VAR_21=0; VAR_21<198; VAR_21+=VAR_25) {
        for (VAR_20=0; VAR_20<318; VAR_20+=VAR_24) {
            if (VAR_26 == 131 || FUNC_4(&VAR_28)) {
                if (VAR_10 - VAR_15 < 1)
                    return VAR_0;
                VAR_16 = &VAR_9[*VAR_15++ * (VAR_24 * VAR_25)];
                for (VAR_19=0; VAR_19<VAR_24; VAR_19++) {
                    VAR_17[(VAR_21 + 0) * VAR_22 + VAR_20 + VAR_19] = VAR_16[(0 * VAR_24) + VAR_19];
                    VAR_17[(VAR_21 + 1) * VAR_22 + VAR_20 + VAR_19] = VAR_16[(1 * VAR_24) + VAR_19];
                    if (VAR_25 == 3)
                        VAR_17[(VAR_21 + 2) * VAR_22 + VAR_20 + VAR_19] =
                            VAR_16[(2 * VAR_24) + VAR_19];
                }
            }
        }
        if (VAR_26 != 131)
            FUNC_1(&VAR_28);
    }

    if ((VAR_23 = FUNC_2(VAR_13, VAR_14)) < 0)
        return VAR_23;
    *VAR_7 = 1;

    return VAR_11;
}
