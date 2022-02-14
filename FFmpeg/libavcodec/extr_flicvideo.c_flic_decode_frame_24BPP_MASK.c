
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_13__ {unsigned char** data; unsigned int* linesize; } ;
struct TYPE_12__ {TYPE_2__* priv_data; } ;
struct TYPE_11__ {TYPE_6__* frame; TYPE_1__* avctx; } ;
struct TYPE_10__ {unsigned int height; int width; } ;
typedef int GetByteContext ;
typedef TYPE_2__ FlicDecodeContext ;
typedef TYPE_3__ AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned char*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (void*,TYPE_6__*) ;
 int FUNC_4 (TYPE_3__*,int ,char*,...) ;
 int FUNC_5 (int *,unsigned char*,int) ;
 void* FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 void* FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 unsigned int FUNC_10 (int *) ;
 int FUNC_11 (int *,int const*,int) ;
 int FUNC_12 (int *,int) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (TYPE_3__*,char*,int) ;
 int FUNC_15 (TYPE_3__*,TYPE_6__*,int ) ;
 int FUNC_16 (unsigned char*,int,int) ;
 int FUNC_17 (void*,int) ;

__attribute__((used)) static int FUNC_18(AVCodecContext *VAR_3,
                                   void *VAR_4, int *VAR_5,
                                   const uint8_t *VAR_6, int VAR_7)
{
    FlicDecodeContext *VAR_8 = VAR_3->priv_data;

    GetByteContext VAR_9;
    int VAR_10;
    unsigned char VAR_11;

    unsigned int VAR_12;
    int VAR_13;

    unsigned int VAR_14;
    int VAR_15;

    int VAR_16, VAR_17, VAR_18;

    int VAR_19;
    int VAR_20;
    int VAR_21;
    int VAR_22;
    int VAR_23;
    int VAR_24;
    int VAR_25;
    unsigned char *VAR_26;
    int VAR_27;
    unsigned int VAR_28;

    FUNC_11(&VAR_9, VAR_6, VAR_7);

    if ((VAR_18 = FUNC_15(VAR_3, VAR_8->frame, 0)) < 0)
        return VAR_18;

    VAR_26 = VAR_8->frame->data[0];
    VAR_28 = VAR_8->avctx->height * VAR_8->frame->linesize[0];

    VAR_12 = FUNC_10(&VAR_9);
    FUNC_12(&VAR_9, 2);
    VAR_13 = FUNC_8(&VAR_9);
    FUNC_12(&VAR_9, 8);
    if (VAR_12 > VAR_7)
        VAR_12 = VAR_7;

    if (VAR_12 < 16)
        return VAR_0;
    VAR_12 -= 16;


    while ((VAR_12 > 0) && (VAR_13 > 0) &&
            FUNC_7(&VAR_9) >= 4) {
        int VAR_29;
        VAR_14 = FUNC_10(&VAR_9);
        if (VAR_14 > VAR_12) {
            FUNC_4(VAR_3, VAR_2,
                   "Invalid chunk_size = %u > frame_size = %u\n", VAR_14, VAR_12);
            VAR_14 = VAR_12;
        }
        VAR_29 = FUNC_13(&VAR_9) - 4 + VAR_14;

        VAR_15 = FUNC_8(&VAR_9);


        switch (VAR_15) {
        case 138:
        case 135:



            FUNC_14(VAR_3,
                    "Unexpected Palette chunk %d in non-palettized FLC\n",
                    VAR_15);
            FUNC_12(&VAR_9, VAR_14 - 6);
            break;

        case 133:
        case 130:
            VAR_22 = 0;
            VAR_20 = FUNC_8(&VAR_9);
            while (VAR_20 > 0) {
                if (FUNC_13(&VAR_9) + 2 > VAR_29)
                    break;
                if (VAR_22 > VAR_28)
                    return VAR_0;
                VAR_21 = FUNC_17(FUNC_8(&VAR_9), 16);
                if (VAR_21 < 0) {
                    VAR_21 = -VAR_21;
                    if (VAR_21 > VAR_8->avctx->height)
                        return VAR_0;
                    VAR_22 += VAR_21 * VAR_8->frame->linesize[0];
                } else {
                    VAR_20--;
                    VAR_10 = VAR_22;
                    FUNC_1(0);
                    VAR_25 = VAR_8->avctx->width;
                    for (VAR_16 = 0; VAR_16 < VAR_21; VAR_16++) {

                        if (FUNC_13(&VAR_9) + 2 > VAR_29)
                            break;
                        VAR_24 = FUNC_6(&VAR_9);
                        VAR_10 += (VAR_24*3);
                        VAR_25 -= VAR_24;
                        VAR_23 = FUNC_17(FUNC_6(&VAR_9), 8);
                        if (VAR_23 < 0) {
                            VAR_23 = -VAR_23;
                            VAR_27 = FUNC_9(&VAR_9);
                            FUNC_1(3 * VAR_23);
                            for (VAR_17 = 0; VAR_17 < VAR_23; VAR_17++, VAR_25 -= 1) {
                                FUNC_0(&VAR_26[VAR_10], VAR_27);
                                VAR_10 += 3;
                            }
                        } else {
                            if (FUNC_13(&VAR_9) + 2*VAR_23 > VAR_29)
                                break;
                            FUNC_1(3 * VAR_23);
                            for (VAR_17 = 0; VAR_17 < VAR_23; VAR_17++, VAR_25--) {
                                VAR_27 = FUNC_9(&VAR_9);
                                FUNC_0(&VAR_26[VAR_10], VAR_27);
                                VAR_10 += 3;
                            }
                        }
                    }

                    VAR_22 += VAR_8->frame->linesize[0];
                }
            }
            break;

        case 129:
            FUNC_4(VAR_3, VAR_1, "Unexpected FLI_LC chunk in non-palettized FLC\n");
            FUNC_12(&VAR_9, VAR_14 - 6);
            break;

        case 137:

            FUNC_16(VAR_26, 0x00,
                   VAR_8->frame->linesize[0] * VAR_8->avctx->height);
            break;

        case 136:
            VAR_22 = 0;
            for (VAR_19 = 0; VAR_19 < VAR_8->avctx->height; VAR_19++) {
                VAR_10 = VAR_22;


                FUNC_12(&VAR_9, 1);
                VAR_25 = (VAR_8->avctx->width * 3);

                while (VAR_25 > 0) {
                    if (FUNC_13(&VAR_9) + 1 > VAR_29)
                        break;
                    VAR_23 = FUNC_17(FUNC_6(&VAR_9), 8);
                    if (VAR_23 > 0) {
                        VAR_11 = FUNC_6(&VAR_9);
                        FUNC_1(VAR_23);
                        for (VAR_17 = 0; VAR_17 < VAR_23; VAR_17++) {
                            VAR_26[VAR_10++] = VAR_11;
                            VAR_25--;
                            if (VAR_25 < 0)
                                FUNC_4(VAR_3, VAR_1, "pixel_countdown < 0 (%d) (linea%d)\n",
                                       VAR_25, VAR_19);
                        }
                    } else {
                        VAR_23 = -VAR_23;
                        if (FUNC_13(&VAR_9) + VAR_23 > VAR_29)
                            break;
                        FUNC_1(VAR_23);
                        for (VAR_17 = 0; VAR_17 < VAR_23; VAR_17++) {
                            VAR_11 = FUNC_6(&VAR_9);
                            VAR_26[VAR_10++] = VAR_11;
                            VAR_25--;
                            if (VAR_25 < 0)
                                FUNC_4(VAR_3, VAR_1, "pixel_countdown < 0 (%d) at line %d\n",
                                       VAR_25, VAR_19);
                        }
                    }
                }

                VAR_22 += VAR_8->frame->linesize[0];
            }
            break;

        case 132:
            VAR_22 = 0;
            for (VAR_19 = 0; VAR_19 < VAR_8->avctx->height; VAR_19++) {
                VAR_10 = VAR_22;


                FUNC_12(&VAR_9, 1);
                VAR_25 = VAR_8->avctx->width;

                while (VAR_25 > 0) {
                    if (FUNC_13(&VAR_9) + 1 > VAR_29)
                        break;
                    VAR_23 = FUNC_17(FUNC_6(&VAR_9), 8);
                    if (VAR_23 > 0) {
                        VAR_27 = FUNC_9(&VAR_9);
                        FUNC_1(3 * VAR_23);
                        for (VAR_17 = 0; VAR_17 < VAR_23; VAR_17++) {
                            FUNC_0(VAR_26 + VAR_10, VAR_27);
                            VAR_10 += 3;
                            VAR_25--;
                            if (VAR_25 < 0)
                                FUNC_4(VAR_3, VAR_1, "pixel_countdown < 0 (%d)\n",
                                       VAR_25);
                        }
                    } else {
                        VAR_23 = -VAR_23;
                        if (FUNC_13(&VAR_9) + 3 * VAR_23 > VAR_29)
                            break;
                        FUNC_1(3 * VAR_23);
                        for (VAR_17 = 0; VAR_17 < VAR_23; VAR_17++) {
                            VAR_27 = FUNC_9(&VAR_9);
                            FUNC_0(VAR_26 + VAR_10, VAR_27);
                            VAR_10 += 3;
                            VAR_25--;
                            if (VAR_25 < 0)
                                FUNC_4(VAR_3, VAR_1, "pixel_countdown < 0 (%d)\n",
                                       VAR_25);
                        }
                    }
                }

                VAR_22 += VAR_8->frame->linesize[0];
            }
            break;

        case 134:
        case 131:

            if (VAR_14 - 6 > (unsigned int)(FUNC_2(VAR_8->avctx->width, 2) * VAR_8->avctx->height)*3) {
                FUNC_4(VAR_3, VAR_1, "In chunk FLI_COPY : source data (%d bytes) " "bigger than image, skipping chunk\n", VAR_14 - 6);

                FUNC_12(&VAR_9, VAR_14 - 6);
            } else {
                for (VAR_22 = 0; VAR_22 < VAR_8->frame->linesize[0] * VAR_8->avctx->height;
                     VAR_22 += VAR_8->frame->linesize[0]) {

                    FUNC_5(&VAR_9, VAR_26 + VAR_22, 3*VAR_8->avctx->width);
                    if (VAR_8->avctx->width & 1)
                        FUNC_12(&VAR_9, 3);
                }
            }
            break;

        case 128:

            FUNC_12(&VAR_9, VAR_14 - 6);
            break;

        default:
            FUNC_4(VAR_3, VAR_1, "Unrecognized chunk type: %d\n", VAR_15);
            break;
        }

        if (VAR_29 - FUNC_13(&VAR_9) >= 0) {
            FUNC_12(&VAR_9, VAR_29 - FUNC_13(&VAR_9));
        } else {
            FUNC_4(VAR_3, VAR_1, "Chunk overread\n");
            break;
        }

        VAR_12 -= VAR_14;
        VAR_13--;
    }



    if ((FUNC_7(&VAR_9) != 0) && (FUNC_7(&VAR_9) != 1))
        FUNC_4(VAR_3, VAR_1, "Processed FLI chunk where chunk size = %d " "and final chunk ptr = %d\n", VAR_7, FUNC_13(&VAR_9));


    if ((VAR_18 = FUNC_3(VAR_4, VAR_8->frame)) < 0)
        return VAR_18;

    *VAR_5 = 1;

    return VAR_7;
}
