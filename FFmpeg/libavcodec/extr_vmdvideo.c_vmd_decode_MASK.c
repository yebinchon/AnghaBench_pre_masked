
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_15__ ;


struct TYPE_18__ {int* buf; int x_off; int y_off; int size; int* unpack_buffer; TYPE_1__* prev_frame; TYPE_15__* avctx; int unpack_buffer_size; scalar_t__ palette; } ;
typedef TYPE_2__ VmdVideoContext ;
struct TYPE_20__ {unsigned char** data; unsigned char* linesize; } ;
struct TYPE_19__ {int buffer; } ;
struct TYPE_17__ {unsigned char** data; int* linesize; } ;
struct TYPE_16__ {int width; int height; } ;
typedef TYPE_3__ GetByteContext ;
typedef TYPE_4__ AVFrame ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int*) ;
 int VAR_2 ;
 int FUNC_1 (TYPE_15__*,int ,char*,...) ;
 int FUNC_2 (TYPE_3__*,unsigned char*,unsigned char) ;
 int FUNC_3 (TYPE_3__*,unsigned char*,unsigned char) ;
 unsigned char FUNC_4 (TYPE_3__*) ;
 unsigned char FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (TYPE_3__*,int*,int) ;
 int FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (TYPE_3__*,unsigned char) ;
 int FUNC_10 (int ,unsigned char,int*,int ) ;
 int FUNC_11 (unsigned char*,unsigned char*,unsigned char) ;
 unsigned char FUNC_12 (int ,unsigned char*,unsigned char,unsigned char,int) ;

__attribute__((used)) static int FUNC_13(VmdVideoContext *VAR_3, AVFrame *VAR_4)
{
    int VAR_5;
    unsigned int *VAR_6;
    unsigned char VAR_7, VAR_8, VAR_9;

    GetByteContext VAR_10;

    unsigned char VAR_11;
    unsigned char *VAR_12;
    unsigned char *VAR_13;
    unsigned char VAR_14;
    int VAR_15;

    int VAR_16, VAR_17;
    int VAR_18, VAR_19;

    VAR_16 = FUNC_0(&VAR_3->buf[6]);
    VAR_17 = FUNC_0(&VAR_3->buf[8]);
    VAR_18 = FUNC_0(&VAR_3->buf[10]) - VAR_16 + 1;
    VAR_19 = FUNC_0(&VAR_3->buf[12]) - VAR_17 + 1;

    if ((VAR_18 == VAR_3->avctx->width && VAR_19 == VAR_3->avctx->height) &&
        (VAR_16 || VAR_17)) {

        VAR_3->x_off = VAR_16;
        VAR_3->y_off = VAR_17;
    }
    VAR_16 -= VAR_3->x_off;
    VAR_17 -= VAR_3->y_off;

    if (VAR_16 < 0 || VAR_18 < 0 ||
        VAR_16 >= VAR_3->avctx->width ||
        VAR_18 > VAR_3->avctx->width ||
        VAR_16 + VAR_18 > VAR_3->avctx->width) {
        FUNC_1(VAR_3->avctx, VAR_1,
               "Invalid horizontal range %d-%d\n",
               VAR_16, VAR_18);
        return VAR_0;
    }
    if (VAR_17 < 0 || VAR_19 < 0 ||
        VAR_17 >= VAR_3->avctx->height ||
        VAR_19 > VAR_3->avctx->height ||
        VAR_17 + VAR_19 > VAR_3->avctx->height) {
        FUNC_1(VAR_3->avctx, VAR_1,
               "Invalid vertical range %d-%d\n",
               VAR_17, VAR_19);
        return VAR_0;
    }



    if (VAR_3->prev_frame->data[0] &&
        (VAR_16 || VAR_17 || (VAR_18 != VAR_3->avctx->width) ||
        (VAR_19 != VAR_3->avctx->height))) {

        FUNC_11(VAR_4->data[0], VAR_3->prev_frame->data[0],
            VAR_3->avctx->height * VAR_4->linesize[0]);
    }


    FUNC_7(&VAR_10, VAR_3->buf + 16, VAR_3->size - 16);
    if (VAR_3->buf[15] & 0x02) {
        FUNC_9(&VAR_10, 2);
        VAR_6 = (unsigned int *)VAR_3->palette;
        if (FUNC_5(&VAR_10) >= VAR_2 * 3) {
            for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
                VAR_7 = FUNC_6(&VAR_10) * 4;
                VAR_8 = FUNC_6(&VAR_10) * 4;
                VAR_9 = FUNC_6(&VAR_10) * 4;
                VAR_6[VAR_5] = 0xFFU << 24 | (VAR_7 << 16) | (VAR_8 << 8) | (VAR_9);
                VAR_6[VAR_5] |= VAR_6[VAR_5] >> 6 & 0x30303;
            }
        } else {
            FUNC_1(VAR_3->avctx, VAR_1, "Incomplete palette\n");
            return VAR_0;
        }
    }

    if (!VAR_3->size)
        return 0;


    if (FUNC_5(&VAR_10) < 1)
        return VAR_0;
    VAR_11 = FUNC_6(&VAR_10);
    if (VAR_11 & 0x80) {
        int VAR_20;
        if (!VAR_3->unpack_buffer_size) {
            FUNC_1(VAR_3->avctx, VAR_1,
                   "Trying to unpack LZ-compressed frame with no LZ buffer\n");
            return VAR_0;
        }
        VAR_20 = FUNC_10(VAR_10.buffer, FUNC_5(&VAR_10),
                         VAR_3->unpack_buffer, VAR_3->unpack_buffer_size);
        if (VAR_20 < 0)
            return VAR_20;
        VAR_11 &= 0x7F;
        FUNC_7(&VAR_10, VAR_3->unpack_buffer, VAR_20);
    }

    VAR_12 = &VAR_4->data[0][VAR_17 * VAR_4->linesize[0] + VAR_16];
    VAR_13 = &VAR_3->prev_frame->data[0][VAR_17 * VAR_3->prev_frame->linesize[0] + VAR_16];
    switch (VAR_11) {
    case 1:
        for (VAR_5 = 0; VAR_5 < VAR_19; VAR_5++) {
            VAR_15 = 0;
            do {
                VAR_14 = FUNC_4(&VAR_10);
                if (VAR_14 & 0x80) {
                    VAR_14 = (VAR_14 & 0x7F) + 1;
                    if (VAR_15 + VAR_14 > VAR_18 ||
                        FUNC_5(&VAR_10) < VAR_14)
                        return VAR_0;
                    FUNC_3(&VAR_10, &VAR_12[VAR_15], VAR_14);
                    VAR_15 += VAR_14;
                } else {

                    if (VAR_15 + VAR_14 + 1 > VAR_18 || !VAR_3->prev_frame->data[0])
                        return VAR_0;
                    FUNC_11(&VAR_12[VAR_15], &VAR_13[VAR_15], VAR_14 + 1);
                    VAR_15 += VAR_14 + 1;
                }
            } while (VAR_15 < VAR_18);
            if (VAR_15 > VAR_18) {
                FUNC_1(VAR_3->avctx, VAR_1,
                       "offset > width (%d > %d)\n",
                       VAR_15, VAR_18);
                return VAR_0;
            }
            VAR_12 += VAR_4->linesize[0];
            VAR_13 += VAR_3->prev_frame->linesize[0];
        }
        break;

    case 2:
        for (VAR_5 = 0; VAR_5 < VAR_19; VAR_5++) {
            FUNC_2(&VAR_10, VAR_12, VAR_18);
            VAR_12 += VAR_4->linesize[0];
            VAR_13 += VAR_3->prev_frame->linesize[0];
        }
        break;

    case 3:
        for (VAR_5 = 0; VAR_5 < VAR_19; VAR_5++) {
            VAR_15 = 0;
            do {
                VAR_14 = FUNC_4(&VAR_10);
                if (VAR_14 & 0x80) {
                    VAR_14 = (VAR_14 & 0x7F) + 1;
                    if (FUNC_8(&VAR_10) == 0xFF) {
                        int VAR_21 = VAR_14;
                        FUNC_4(&VAR_10);
                        VAR_14 = FUNC_12(VAR_10.buffer, &VAR_12[VAR_15],
                                         VAR_14, FUNC_5(&VAR_10),
                                         VAR_18 - VAR_15);
                        VAR_15 += VAR_21;
                        FUNC_9(&VAR_10, VAR_14);
                    } else {
                        if (VAR_15 + VAR_14 > VAR_18 ||
                            FUNC_5(&VAR_10) < VAR_14)
                            return VAR_0;
                        FUNC_2(&VAR_10, &VAR_12[VAR_15], VAR_14);
                        VAR_15 += VAR_14;
                    }
                } else {

                    if (VAR_15 + VAR_14 + 1 > VAR_18 || !VAR_3->prev_frame->data[0])
                        return VAR_0;
                    FUNC_11(&VAR_12[VAR_15], &VAR_13[VAR_15], VAR_14 + 1);
                    VAR_15 += VAR_14 + 1;
                }
            } while (VAR_15 < VAR_18);
            if (VAR_15 > VAR_18) {
                FUNC_1(VAR_3->avctx, VAR_1,
                       "offset > width (%d > %d)\n",
                       VAR_15, VAR_18);
                return VAR_0;
            }
            VAR_12 += VAR_4->linesize[0];
            VAR_13 += VAR_3->prev_frame->linesize[0];
        }
        break;
    }
    return 0;
}
