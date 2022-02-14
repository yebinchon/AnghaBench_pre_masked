
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_10__ ;


typedef int uint8_t ;
struct TYPE_22__ {int width; int height; TYPE_2__* priv_data; } ;
struct TYPE_21__ {int size; int * data; } ;
struct TYPE_19__ {scalar_t__ got_error; } ;
struct TYPE_20__ {int got_error; TYPE_10__* pic; int hblock; int haar_coder; int dctblock; int dct_coder; int image_coder; int fill_coder; scalar_t__ btype; TYPE_1__ coder; } ;
struct TYPE_18__ {int key_frame; int* linesize; int ** data; int pict_type; } ;
typedef TYPE_1__ RangeCoder ;
typedef TYPE_2__ MSS3Context ;
typedef int GetByteContext ;
typedef TYPE_3__ AVPacket ;
typedef TYPE_4__ AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 int VAR_4 ;

 int FUNC_0 (void*,TYPE_10__*) ;
 int FUNC_1 (TYPE_4__*,int ,char*,...) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int const*,int) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (TYPE_1__*,scalar_t__) ;
 int FUNC_9 (TYPE_1__*,int ,int *,int,int,int ,int,int) ;
 int FUNC_10 (TYPE_1__*,int ,int *,int,int) ;
 int FUNC_11 (TYPE_1__*,int ,int *,int,int,int ) ;
 int FUNC_12 (TYPE_1__*,int ,int *,int,int) ;
 int FUNC_13 (TYPE_4__*,TYPE_10__*,int ) ;
 int FUNC_14 (TYPE_1__*,int const*,int) ;
 int FUNC_15 (TYPE_2__*,int) ;

__attribute__((used)) static int FUNC_16(AVCodecContext *VAR_5, void *VAR_6, int *VAR_7,
                             AVPacket *VAR_8)
{
    const uint8_t *VAR_9 = VAR_8->data;
    int VAR_10 = VAR_8->size;
    MSS3Context *VAR_11 = VAR_5->priv_data;
    RangeCoder *VAR_12 = &VAR_11->coder;
    GetByteContext VAR_13;
    uint8_t *VAR_14[3];
    int VAR_15, VAR_16, VAR_17, VAR_18, VAR_19, VAR_20;
    int VAR_21, VAR_22, VAR_23, VAR_24, VAR_25, VAR_26, VAR_27;
    int VAR_28;

    if (VAR_10 < VAR_4) {
        FUNC_1(VAR_5, VAR_1,
               "Frame should have at least %d bytes, got %d instead\n",
               VAR_4, VAR_10);
        return VAR_0;
    }

    FUNC_6(&VAR_13, VAR_9, VAR_10);
    VAR_20 = FUNC_3(&VAR_13);
    if (VAR_20 & ~0x301) {
        FUNC_1(VAR_5, VAR_1, "Invalid frame type %X\n", VAR_20);
        return VAR_0;
    }
    VAR_20 = !(VAR_20 & 1);
    FUNC_7(&VAR_13, 6);
    VAR_17 = FUNC_2(&VAR_13);
    VAR_18 = FUNC_2(&VAR_13);
    VAR_15 = FUNC_2(&VAR_13);
    VAR_16 = FUNC_2(&VAR_13);

    if (VAR_17 + VAR_15 > VAR_5->width ||
        VAR_18 + VAR_16 > VAR_5->height ||
        (VAR_15 | VAR_16) & 0xF) {
        FUNC_1(VAR_5, VAR_1, "Invalid frame dimensions %dx%d +%d,%d\n",
               VAR_15, VAR_16, VAR_17, VAR_18);
        return VAR_0;
    }
    FUNC_7(&VAR_13, 4);
    VAR_19 = FUNC_4(&VAR_13);
    if (VAR_19 < 1 || VAR_19 > 100) {
        FUNC_1(VAR_5, VAR_1, "Invalid quality setting %d\n", VAR_19);
        return VAR_0;
    }
    FUNC_7(&VAR_13, 4);

    if (VAR_20 && !FUNC_5(&VAR_13)) {
        FUNC_1(VAR_5, VAR_1, "Keyframe without data found\n");
        return VAR_0;
    }
    if (!VAR_20 && VAR_11->got_error)
        return VAR_10;
    VAR_11->got_error = 0;

    if ((VAR_28 = FUNC_13(VAR_5, VAR_11->pic, 0)) < 0)
        return VAR_28;
    VAR_11->pic->key_frame = VAR_20;
    VAR_11->pic->pict_type = VAR_20 ? VAR_2 : VAR_3;
    if (!FUNC_5(&VAR_13)) {
        if ((VAR_28 = FUNC_0(VAR_6, VAR_11->pic)) < 0)
            return VAR_28;
        *VAR_7 = 1;

        return VAR_10;
    }

    FUNC_15(VAR_11, VAR_19);

    FUNC_14(VAR_12, VAR_9 + VAR_4, VAR_10 - VAR_4);

    VAR_24 = VAR_15 >> 4;
    VAR_25 = VAR_16 >> 4;
    VAR_14[0] = VAR_11->pic->data[0] + VAR_17 + VAR_18 * VAR_11->pic->linesize[0];
    VAR_14[1] = VAR_11->pic->data[1] + VAR_17 / 2 + (VAR_18 / 2) * VAR_11->pic->linesize[1];
    VAR_14[2] = VAR_11->pic->data[2] + VAR_17 / 2 + (VAR_18 / 2) * VAR_11->pic->linesize[2];
    for (VAR_22 = 0; VAR_22 < VAR_25; VAR_22++) {
        for (VAR_21 = 0; VAR_21 < VAR_24; VAR_21++) {
            for (VAR_23 = 0; VAR_23 < 3; VAR_23++) {
                VAR_26 = 8 << !VAR_23;

                VAR_27 = FUNC_8(VAR_12, VAR_11->btype + VAR_23);
                switch (VAR_27) {
                case 130:
                    FUNC_10(VAR_12, VAR_11->fill_coder + VAR_23,
                                      VAR_14[VAR_23] + VAR_21 * VAR_26,
                                      VAR_11->pic->linesize[VAR_23], VAR_26);
                    break;
                case 128:
                    FUNC_12(VAR_12, VAR_11->image_coder + VAR_23,
                                       VAR_14[VAR_23] + VAR_21 * VAR_26,
                                       VAR_11->pic->linesize[VAR_23], VAR_26);
                    break;
                case 131:
                    FUNC_9(VAR_12, VAR_11->dct_coder + VAR_23,
                                     VAR_14[VAR_23] + VAR_21 * VAR_26,
                                     VAR_11->pic->linesize[VAR_23], VAR_26,
                                     VAR_11->dctblock, VAR_21, VAR_22);
                    break;
                case 129:
                    FUNC_11(VAR_12, VAR_11->haar_coder + VAR_23,
                                      VAR_14[VAR_23] + VAR_21 * VAR_26,
                                      VAR_11->pic->linesize[VAR_23], VAR_26,
                                      VAR_11->hblock);
                    break;
                }
                if (VAR_11->got_error || VAR_12->got_error) {
                    FUNC_1(VAR_5, VAR_1, "Error decoding block %d,%d\n",
                           VAR_21, VAR_22);
                    VAR_11->got_error = 1;
                    return VAR_0;
                }
            }
        }
        VAR_14[0] += VAR_11->pic->linesize[0] * 16;
        VAR_14[1] += VAR_11->pic->linesize[1] * 8;
        VAR_14[2] += VAR_11->pic->linesize[2] * 8;
    }

    if ((VAR_28 = FUNC_0(VAR_6, VAR_11->pic)) < 0)
        return VAR_28;

    *VAR_7 = 1;

    return VAR_10;
}
