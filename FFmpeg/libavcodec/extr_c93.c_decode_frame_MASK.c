
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_17__ {TYPE_1__* priv_data; } ;
struct TYPE_16__ {int* linesize; int key_frame; int palette_has_changed; int ** data; int pict_type; } ;
struct TYPE_15__ {int size; int * data; } ;
struct TYPE_14__ {size_t currentpic; TYPE_3__** pictures; } ;
typedef int GetByteContext ;
typedef TYPE_1__ C93DecoderContext ;
typedef int C93BlockType ;
typedef TYPE_2__ AVPacket ;
typedef TYPE_3__ AVFrame ;
typedef TYPE_4__ AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

 int FUNC_0 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (void*,TYPE_3__* const) ;
 int FUNC_2 (TYPE_4__*,int ,char*,int,int,int) ;
 int FUNC_3 (TYPE_4__*,char*,int,int,int,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *,int) ;
 void* FUNC_6 (int *) ;
 void* FUNC_7 (int *) ;
 void* FUNC_8 (int *) ;
 int FUNC_9 (int *,int const*,int) ;
 int FUNC_10 (TYPE_4__*,int *,int *,int,int,int) ;
 int FUNC_11 (int *,int,int,int,int,int *,int *,void*) ;
 int FUNC_12 (TYPE_4__*,TYPE_3__* const,int ) ;
 int FUNC_13 (TYPE_4__*,int,int) ;
 int FUNC_14 (int *,int *,int) ;

__attribute__((used)) static int FUNC_15(AVCodecContext *VAR_8, void *VAR_9,
                        int *VAR_10, AVPacket *VAR_11)
{
    const uint8_t *VAR_12 = VAR_11->data;
    int VAR_13 = VAR_11->size;
    C93DecoderContext * const VAR_14 = VAR_8->priv_data;
    AVFrame * const VAR_15 = VAR_14->pictures[VAR_14->currentpic];
    AVFrame * const VAR_16 = VAR_14->pictures[VAR_14->currentpic^1];
    GetByteContext VAR_17;
    uint8_t *VAR_18;
    int VAR_19, VAR_20, VAR_21, VAR_22, VAR_23, VAR_24, VAR_25 = 0;

    if ((VAR_20 = FUNC_13(VAR_8, VAR_7, VAR_6)) < 0)
        return VAR_20;

    VAR_14->currentpic ^= 1;

    if ((VAR_20 = FUNC_12(VAR_8, VAR_15, 0)) < 0)
        return VAR_20;

    VAR_19 = VAR_15->linesize[0];

    FUNC_9(&VAR_17, VAR_12, VAR_13);
    VAR_24 = FUNC_6(&VAR_17);
    if (VAR_24 & VAR_4) {
        VAR_15->pict_type = VAR_2;
        VAR_15->key_frame = 1;
    } else {
        VAR_15->pict_type = VAR_3;
        VAR_15->key_frame = 0;
    }

    for (VAR_23 = 0; VAR_23 < VAR_6; VAR_23 += 8) {
        VAR_18 = VAR_15->data[0] + VAR_23 * VAR_19;
        for (VAR_22 = 0; VAR_22 < VAR_7; VAR_22 += 8) {
            uint8_t *VAR_26 = VAR_16->data[0];
            unsigned int VAR_27, VAR_28;
            uint8_t VAR_29[4], VAR_30[4];
            C93BlockType VAR_31;

            if (!VAR_25)
                VAR_25 = FUNC_6(&VAR_17);

            VAR_31= VAR_25 & 0x0F;
            switch (VAR_31) {
            case 130:
                VAR_27 = FUNC_7(&VAR_17);
                if ((VAR_20 = FUNC_10(VAR_8, VAR_18, VAR_26, VAR_27, 8, VAR_19)) < 0)
                    return VAR_20;
                break;

            case 133:
                VAR_26 = VAR_15->data[0];
            case 132:
                for (VAR_28 = 0; VAR_28 < 8; VAR_28 += 4) {
                    for (VAR_21 = 0; VAR_21 < 8; VAR_21 += 4) {
                        int VAR_32 = FUNC_7(&VAR_17);
                        int VAR_33 = VAR_32 % VAR_7;
                        int VAR_34 = VAR_32 / VAR_7;
                        if (VAR_31 == 133 && VAR_34 == VAR_23+VAR_28 &&
                            (FUNC_0(VAR_33 - VAR_22-VAR_21) < 4 || FUNC_0(VAR_33 - VAR_22-VAR_21) > VAR_7-4)) {
                            FUNC_3(VAR_8, "block overlap %d %d %d %d", VAR_33, VAR_22+VAR_21, VAR_34, VAR_23+VAR_28);
                            return VAR_0;
                        }
                        if ((VAR_20 = FUNC_10(VAR_8, &VAR_18[VAR_28*VAR_19+VAR_21],
                                              VAR_26, VAR_32, 4, VAR_19)) < 0)
                            return VAR_20;
                    }
                }
                break;

            case 131:
                FUNC_5(&VAR_17, VAR_29, 2);
                for (VAR_21 = 0; VAR_21 < 8; VAR_21++) {
                    FUNC_11(VAR_18 + VAR_21*VAR_19, VAR_19, 8, 1, 1, VAR_29,
                                     ((void*)0), FUNC_6(&VAR_17));
                }

                break;

            case 136:
            case 135:
            case 134:
                for (VAR_28 = 0; VAR_28 < 8; VAR_28 += 4) {
                    for (VAR_21 = 0; VAR_21 < 8; VAR_21 += 4) {
                        if (VAR_31 == 136) {
                            FUNC_5(&VAR_17, VAR_29, 2);
                            FUNC_11(VAR_18 + VAR_21 + VAR_28*VAR_19, VAR_19, 4, 4,
                                    1, VAR_29, ((void*)0), FUNC_7(&VAR_17));
                        } else if (VAR_31 == 135) {
                            FUNC_5(&VAR_17, VAR_29, 4);
                            FUNC_11(VAR_18 + VAR_21 + VAR_28*VAR_19, VAR_19, 4, 4,
                                    2, VAR_29, ((void*)0), FUNC_8(&VAR_17));
                        } else {
                            FUNC_5(&VAR_17, VAR_30, 4);
                            FUNC_11(VAR_18 + VAR_21 + VAR_28*VAR_19, VAR_19, 4, 4,
                                    1, VAR_29, VAR_30, FUNC_7(&VAR_17));
                        }
                    }
                }
                break;

            case 128:
                break;

            case 129:
                for (VAR_28 = 0; VAR_28 < 8; VAR_28++)
                    FUNC_5(&VAR_17, VAR_18 + VAR_28*VAR_19, 8);
                break;

            default:
                FUNC_2(VAR_8, VAR_1, "unexpected type %x at %dx%d\n",
                       VAR_31, VAR_22, VAR_23);
                return VAR_0;
            }
            VAR_25 >>= 4;
            VAR_18 += 8;
        }
    }

    if (VAR_24 & VAR_5) {
        uint32_t *VAR_35 = (uint32_t *) VAR_15->data[1];
        for (VAR_21 = 0; VAR_21 < 256; VAR_21++) {
            VAR_35[VAR_21] = 0xFFU << 24 | FUNC_4(&VAR_17);
        }
        VAR_15->palette_has_changed = 1;
    } else {
        if (VAR_16->data[1])
            FUNC_14(VAR_15->data[1], VAR_16->data[1], 256 * 4);
    }

    if ((VAR_20 = FUNC_1(VAR_9, VAR_15)) < 0)
        return VAR_20;
    *VAR_10 = 1;

    return VAR_13;
}
