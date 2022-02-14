
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_10__ ;


typedef int uint8_t ;
struct TYPE_16__ {int width; int height; TYPE_1__* priv_data; } ;
struct TYPE_15__ {int size; int * data; } ;
struct TYPE_14__ {int quality; TYPE_10__* pic; int dc_cache; int prev_vec; int * quant_mat; } ;
struct TYPE_13__ {int key_frame; int* linesize; int ** data; int pict_type; } ;
typedef TYPE_1__ MSS4Context ;
typedef int GetByteContext ;
typedef int GetBitContext ;
typedef TYPE_2__ AVPacket ;
typedef TYPE_3__ AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

 int FUNC_0 (int,int) ;
 int VAR_4 ;

 int VAR_5 ;

 int VAR_6 ;
 int FUNC_1 (void*,TYPE_10__*) ;
 int FUNC_2 (TYPE_3__*,int ,char*,...) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int const*,int) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,int,int) ;
 int FUNC_10 (TYPE_3__*,TYPE_10__*,int ) ;
 int FUNC_11 (int *,int const*,int) ;
 int FUNC_12 (int ,int ,int) ;
 int FUNC_13 (TYPE_1__*,int *,int **,int,int) ;
 int FUNC_14 (TYPE_1__*,int *,int **,int,int) ;
 int FUNC_15 (TYPE_1__*,int) ;

__attribute__((used)) static int FUNC_16(AVCodecContext *VAR_7, void *VAR_8, int *VAR_9,
                             AVPacket *VAR_10)
{
    const uint8_t *VAR_11 = VAR_10->data;
    int VAR_12 = VAR_10->size;
    MSS4Context *VAR_13 = VAR_7->priv_data;
    GetBitContext VAR_14;
    GetByteContext VAR_15;
    uint8_t *VAR_16[3];
    int VAR_17, VAR_18, VAR_19, VAR_20;
    int VAR_21, VAR_22, VAR_23, VAR_24, VAR_25, VAR_26;
    int VAR_27;

    if (VAR_12 < VAR_4) {
        FUNC_2(VAR_7, VAR_1,
               "Frame should have at least %d bytes, got %d instead\n",
               VAR_4, VAR_12);
        return VAR_0;
    }

    FUNC_6(&VAR_15, VAR_11, VAR_12);
    VAR_17 = FUNC_3(&VAR_15);
    VAR_18 = FUNC_3(&VAR_15);
    FUNC_7(&VAR_15, 2);
    VAR_19 = FUNC_4(&VAR_15);
    VAR_20 = FUNC_4(&VAR_15);

    if (VAR_17 > VAR_7->width ||
        VAR_18 != VAR_7->height) {
        FUNC_2(VAR_7, VAR_1, "Invalid frame dimensions %dx%d\n",
               VAR_17, VAR_18);
        return VAR_0;
    }
    if (VAR_19 < 1 || VAR_19 > 100) {
        FUNC_2(VAR_7, VAR_1, "Invalid quality setting %d\n", VAR_19);
        return VAR_0;
    }
    if ((VAR_20 & ~3) || VAR_20 == 3) {
        FUNC_2(VAR_7, VAR_1, "Invalid frame type %d\n", VAR_20);
        return VAR_0;
    }

    if (VAR_20 != VAR_6 && !FUNC_5(&VAR_15)) {
        FUNC_2(VAR_7, VAR_1,
               "Empty frame found but it is not a skip frame.\n");
        return VAR_0;
    }
    VAR_24 = FUNC_0(VAR_17, 16) >> 4;
    VAR_25 = FUNC_0(VAR_18, 16) >> 4;

    if (VAR_20 != VAR_6 && 8*VAR_12 < 8*VAR_4 + VAR_24*VAR_25)
        return VAR_0;

    if ((VAR_27 = FUNC_10(VAR_7, VAR_13->pic, 0)) < 0)
        return VAR_27;
    VAR_13->pic->key_frame = (VAR_20 == VAR_5);
    VAR_13->pic->pict_type = (VAR_20 == VAR_5) ? VAR_2
                                                   : VAR_3;
    if (VAR_20 == VAR_6) {
        *VAR_9 = 1;
        if ((VAR_27 = FUNC_1(VAR_8, VAR_13->pic)) < 0)
            return VAR_27;

        return VAR_12;
    }

    if (VAR_13->quality != VAR_19) {
        VAR_13->quality = VAR_19;
        for (VAR_23 = 0; VAR_23 < 2; VAR_23++)
            FUNC_9(VAR_13->quant_mat[VAR_23], VAR_19, !VAR_23);
    }

    if ((VAR_27 = FUNC_11(&VAR_14, VAR_11 + VAR_4, VAR_12 - VAR_4)) < 0)
        return VAR_27;
    VAR_16[0] = VAR_13->pic->data[0];
    VAR_16[1] = VAR_13->pic->data[1];
    VAR_16[2] = VAR_13->pic->data[2];

    FUNC_12(VAR_13->prev_vec, 0, sizeof(VAR_13->prev_vec));
    for (VAR_22 = 0; VAR_22 < VAR_25; VAR_22++) {
        FUNC_12(VAR_13->dc_cache, 0, sizeof(VAR_13->dc_cache));
        for (VAR_21 = 0; VAR_21 < VAR_24; VAR_21++) {
            VAR_26 = FUNC_8(&VAR_14);
            switch (VAR_26) {
            case 130:
                if (FUNC_13(VAR_13, &VAR_14, VAR_16, VAR_21, VAR_22) < 0) {
                    FUNC_2(VAR_7, VAR_1,
                           "Error decoding DCT block %d,%d\n",
                           VAR_21, VAR_22);
                    return VAR_0;
                }
                break;
            case 129:
                if (FUNC_14(VAR_13, &VAR_14, VAR_16, VAR_21, VAR_22) < 0) {
                    FUNC_2(VAR_7, VAR_1,
                           "Error decoding VQ block %d,%d\n",
                           VAR_21, VAR_22);
                    return VAR_0;
                }
                break;
            case 128:
                if (VAR_20 == VAR_5) {
                    FUNC_2(VAR_7, VAR_1, "Skip block in intra frame\n");
                    return VAR_0;
                }
                break;
            }
            if (VAR_26 != 130)
                FUNC_15(VAR_13, VAR_21);
        }
        VAR_16[0] += VAR_13->pic->linesize[0] * 16;
        VAR_16[1] += VAR_13->pic->linesize[1] * 16;
        VAR_16[2] += VAR_13->pic->linesize[2] * 16;
    }

    if ((VAR_27 = FUNC_1(VAR_8, VAR_13->pic)) < 0)
        return VAR_27;

    *VAR_9 = 1;

    return VAR_12;
}
