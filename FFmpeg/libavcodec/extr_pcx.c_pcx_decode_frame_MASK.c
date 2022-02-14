
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_11__ {void* den; void* num; } ;
struct TYPE_14__ {int err_recognition; int pix_fmt; TYPE_1__ sample_aspect_ratio; } ;
struct TYPE_13__ {int** data; unsigned int* linesize; int pict_type; } ;
struct TYPE_12__ {int size; int data; } ;
typedef int GetByteContext ;
typedef int GetBitContext ;
typedef TYPE_2__ AVPacket ;
typedef TYPE_3__ AVFrame ;
typedef TYPE_4__ AVCodecContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int*,int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (int*) ;
 int FUNC_3 (TYPE_4__*,int ,char*) ;
 int* FUNC_4 (scalar_t__) ;
 int FUNC_5 (int *) ;
 unsigned int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 void* FUNC_8 (int *) ;
 int FUNC_9 (int *,int ,int) ;
 int FUNC_10 (int *,int,int ) ;
 int FUNC_11 (int *,int) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (TYPE_4__*,TYPE_3__* const,int ) ;
 int FUNC_14 (TYPE_4__*,unsigned int,unsigned int) ;
 int FUNC_15 (int *,unsigned int) ;
 int FUNC_16 (int *,int*,unsigned int) ;
 int FUNC_17 (int*,int*,unsigned int) ;
 int FUNC_18 (int *,int *,int) ;
 int FUNC_19 (int *,int*,unsigned int,int) ;

__attribute__((used)) static int FUNC_20(AVCodecContext *VAR_11, void *VAR_12, int *VAR_13,
                            AVPacket *VAR_14)
{
    GetByteContext VAR_15;
    AVFrame * const VAR_16 = VAR_12;
    int VAR_17, VAR_18, VAR_19, VAR_20, VAR_21;
    int VAR_22;
    unsigned int VAR_23, VAR_24, VAR_25, VAR_26, VAR_27, VAR_28, VAR_29, VAR_30,
                 VAR_31;
    uint8_t *VAR_32, *VAR_33;

    if (VAR_14->size < VAR_9) {
        FUNC_3(VAR_11, VAR_3, "Packet too small\n");
        return VAR_0;
    }

    FUNC_9(&VAR_15, VAR_14->data, VAR_14->size);

    if (FUNC_7(&VAR_15) != 0x0a || FUNC_7(&VAR_15) > 5) {
        FUNC_3(VAR_11, VAR_3, "this is not PCX encoded data\n");
        return VAR_0;
    }

    VAR_17 = FUNC_7(&VAR_15);
    VAR_25 = FUNC_7(&VAR_15);
    VAR_18 = FUNC_8(&VAR_15);
    VAR_19 = FUNC_8(&VAR_15);
    VAR_20 = FUNC_8(&VAR_15);
    VAR_21 = FUNC_8(&VAR_15);
    VAR_11->sample_aspect_ratio.num = FUNC_8(&VAR_15);
    VAR_11->sample_aspect_ratio.den = FUNC_8(&VAR_15);

    if (VAR_20 < VAR_18 || VAR_21 < VAR_19) {
        FUNC_3(VAR_11, VAR_3, "invalid image dimensions\n");
        return VAR_0;
    }

    VAR_23 = VAR_20 - VAR_18 + 1;
    VAR_24 = VAR_21 - VAR_19 + 1;

    FUNC_11(&VAR_15, 49);
    VAR_27 = FUNC_7(&VAR_15);
    VAR_26 = FUNC_8(&VAR_15);
    VAR_31 = VAR_27 * VAR_26;

    if (VAR_31 < (VAR_23 * VAR_25 * VAR_27 + 7) / 8 ||
        (!VAR_17 && VAR_31 > FUNC_6(&VAR_15) / VAR_24)) {
        FUNC_3(VAR_11, VAR_3, "PCX data is corrupted\n");
        return VAR_0;
    }

    switch ((VAR_27 << 8) + VAR_25) {
    case 0x0308:
        VAR_11->pix_fmt = VAR_7;
        break;
    case 0x0108:
    case 0x0104:
    case 0x0102:
    case 0x0101:
    case 0x0401:
    case 0x0301:
    case 0x0201:
        VAR_11->pix_fmt = VAR_6;
        break;
    default:
        FUNC_3(VAR_11, VAR_3, "invalid PCX file\n");
        return VAR_0;
    }

    FUNC_11(&VAR_15, 60);

    if ((VAR_22 = FUNC_14(VAR_11, VAR_23, VAR_24)) < 0)
        return VAR_22;

    if ((VAR_22 = FUNC_13(VAR_11, VAR_16, 0)) < 0)
        return VAR_22;

    VAR_16->pict_type = VAR_5;

    VAR_32 = VAR_16->data[0];
    VAR_28 = VAR_16->linesize[0];

    VAR_33 = FUNC_4(VAR_31 + VAR_2);
    if (!VAR_33)
        return FUNC_0(VAR_8);

    if (VAR_27 == 3 && VAR_25 == 8) {
        for (VAR_29 = 0; VAR_29 < VAR_24; VAR_29++) {
            VAR_22 = FUNC_19(&VAR_15, VAR_33, VAR_31, VAR_17);
            if (VAR_22 < 0)
                goto end;

            for (VAR_30 = 0; VAR_30 < VAR_23; VAR_30++) {
                VAR_32[3 * VAR_30] = VAR_33[VAR_30];
                VAR_32[3 * VAR_30 + 1] = VAR_33[VAR_30 + VAR_26];
                VAR_32[3 * VAR_30 + 2] = VAR_33[VAR_30 + (VAR_26 << 1)];
            }

            VAR_32 += VAR_28;
        }
    } else if (VAR_27 == 1 && VAR_25 == 8) {
        int VAR_34 = VAR_14->size - 769;

        if (VAR_14->size < 769) {
            FUNC_3(VAR_11, VAR_3, "File is too short\n");
            VAR_22 = VAR_11->err_recognition & VAR_1 ?
                  VAR_0 : VAR_14->size;
            goto end;
        }

        for (VAR_29 = 0; VAR_29 < VAR_24; VAR_29++, VAR_32 += VAR_28) {
            VAR_22 = FUNC_19(&VAR_15, VAR_33, VAR_31, VAR_17);
            if (VAR_22 < 0)
                goto end;
            FUNC_17(VAR_32, VAR_33, VAR_23);
        }

        if (FUNC_12(&VAR_15) != VAR_34) {
            FUNC_3(VAR_11, VAR_4, "image data possibly corrupted\n");
            FUNC_10(&VAR_15, VAR_34, VAR_10);
        }
        if (FUNC_5(&VAR_15) != 12) {
            FUNC_3(VAR_11, VAR_3, "expected palette after image data\n");
            VAR_22 = VAR_11->err_recognition & VAR_1 ?
                  VAR_0 : VAR_14->size;
            goto end;
        }
    } else if (VAR_27 == 1) {
        GetBitContext VAR_35;

        for (VAR_29 = 0; VAR_29 < VAR_24; VAR_29++) {
            FUNC_16(&VAR_35, VAR_33, VAR_31);

            VAR_22 = FUNC_19(&VAR_15, VAR_33, VAR_31, VAR_17);
            if (VAR_22 < 0)
                goto end;

            for (VAR_30 = 0; VAR_30 < VAR_23; VAR_30++)
                VAR_32[VAR_30] = FUNC_15(&VAR_35, VAR_25);
            VAR_32 += VAR_28;
        }
    } else {
        int VAR_36;

        for (VAR_29 = 0; VAR_29 < VAR_24; VAR_29++) {
            VAR_22 = FUNC_19(&VAR_15, VAR_33, VAR_31, VAR_17);
            if (VAR_22 < 0)
                goto end;

            for (VAR_30 = 0; VAR_30 < VAR_23; VAR_30++) {
                int VAR_37 = 0x80 >> (VAR_30 & 7), VAR_38 = 0;
                for (VAR_36 = VAR_27 - 1; VAR_36 >= 0; VAR_36--) {
                    VAR_38 <<= 1;
                    VAR_38 += !!(VAR_33[VAR_36 * VAR_26 + (VAR_30 >> 3)] & VAR_37);
                }
                VAR_32[VAR_30] = VAR_38;
            }
            VAR_32 += VAR_28;
        }
    }

    VAR_22 = FUNC_12(&VAR_15);
    if (VAR_27 == 1 && VAR_25 == 8) {
        FUNC_18(&VAR_15, (uint32_t *)VAR_16->data[1], 256);
        VAR_22 += 256 * 3;
    } else if (VAR_25 * VAR_27 == 1) {
        FUNC_1(VAR_16->data[1] , 0xFF000000);
        FUNC_1(VAR_16->data[1]+4, 0xFFFFFFFF);
    } else if (VAR_25 < 8) {
        FUNC_10(&VAR_15, 16, VAR_10);
        FUNC_18(&VAR_15, (uint32_t *)VAR_16->data[1], 16);
    }

    *VAR_13 = 1;

end:
    FUNC_2(VAR_33);
    return VAR_22;
}
