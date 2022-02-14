
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_5__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_6__ {int* buffer1; int buffer1_size; int* buffer2; int size; int* buf; int buffer2_size; TYPE_5__* avctx; } ;
typedef TYPE_1__ XanContext ;
struct TYPE_7__ {int width; int height; } ;
typedef int GetByteContext ;
typedef int AVFrame ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int*) ;
 int FUNC_1 (TYPE_5__*,int ,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *,int*,int) ;
 int FUNC_7 (int,int) ;
 int FUNC_8 (int*,int,int const*,int) ;
 int FUNC_9 (int*,int,int const*,int) ;
 int FUNC_10 (TYPE_1__*,int *,int,int,int,int,int) ;
 int FUNC_11 (TYPE_1__*,int *,int const*,int,int,int) ;

__attribute__((used)) static int FUNC_12(XanContext *VAR_2, AVFrame *VAR_3)
{

    int VAR_4 = VAR_2->avctx->width;
    int VAR_5 = VAR_2->avctx->height;
    int VAR_6 = VAR_4 * VAR_5;
    uint8_t VAR_7;
    uint8_t VAR_8 = 0;
    int VAR_9 = 0;
    int VAR_10, VAR_11;
    int VAR_12, VAR_13, VAR_14;

    uint8_t *VAR_15 = VAR_2->buffer1;
    uint8_t *VAR_16 = VAR_2->buffer1 + VAR_2->buffer1_size;
    int VAR_17 = VAR_2->buffer1_size;
    const uint8_t *VAR_18 = VAR_2->buffer2;


    const uint8_t *VAR_19;
    GetByteContext VAR_20;
    GetByteContext VAR_21;
    const uint8_t *VAR_22;
    int VAR_23, VAR_24, VAR_25, VAR_26,
        VAR_27;

    if (VAR_2->size < 8)
        return VAR_0;

    VAR_23 = FUNC_0(&VAR_2->buf[0]);
    VAR_24 = FUNC_0(&VAR_2->buf[2]);
    VAR_25 = FUNC_0(&VAR_2->buf[4]);
    VAR_26 = FUNC_0(&VAR_2->buf[6]);

    if (VAR_23 >= VAR_2->size ||
        VAR_24 >= VAR_2->size ||
        VAR_25 >= VAR_2->size ||
        VAR_26 >= VAR_2->size)
        return VAR_0;

    VAR_19 = VAR_2->buf + VAR_23;
    FUNC_6(&VAR_20, VAR_2->buf + VAR_24, VAR_2->size - VAR_24);
    FUNC_6(&VAR_21, VAR_2->buf + VAR_25, VAR_2->size - VAR_25);
    VAR_22 = VAR_2->buf + VAR_26;

    if ((VAR_14 = FUNC_8(VAR_15, VAR_17,
                                  VAR_19, VAR_2->size - VAR_23)) < 0)
        return VAR_0;
    VAR_16 = VAR_15 + VAR_14;

    if (VAR_22[0] == 2) {
        FUNC_9(VAR_2->buffer2, VAR_2->buffer2_size,
                   &VAR_22[1], VAR_2->size - VAR_26 - 1);
        VAR_27 = VAR_2->buffer2_size;
    } else {
        VAR_27 = VAR_2->size - VAR_26 - 1;
        VAR_18 = &VAR_22[1];
    }


    VAR_12 = VAR_13 = 0;
    while (VAR_6 && VAR_15 < VAR_16) {

        VAR_7 = *VAR_15++;
        VAR_9 = 0;

        switch (VAR_7) {

        case 0:
            VAR_8 ^= 1;
            continue;

        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
            VAR_9 = VAR_7;
            break;

        case 12:
        case 13:
        case 14:
        case 15:
        case 16:
        case 17:
        case 18:
            VAR_9 += (VAR_7 - 10);
            break;

        case 9:
        case 19:
            if (FUNC_5(&VAR_20) < 1) {
                FUNC_1(VAR_2->avctx, VAR_1, "size_segment overread\n");
                return VAR_0;
            }
            VAR_9 = FUNC_4(&VAR_20);
            break;

        case 10:
        case 20:
            if (FUNC_5(&VAR_20) < 2) {
                FUNC_1(VAR_2->avctx, VAR_1, "size_segment overread\n");
                return VAR_0;
            }
            VAR_9 = FUNC_2(&VAR_20);
            break;

        case 11:
        case 21:
            if (FUNC_5(&VAR_20) < 3) {
                FUNC_1(VAR_2->avctx, VAR_1, "size_segment overread\n");
                return VAR_0;
            }
            VAR_9 = FUNC_3(&VAR_20);
            break;
        }

        if (VAR_9 > VAR_6)
            break;

        if (VAR_7 < 12) {
            VAR_8 ^= 1;
            if (VAR_8) {

                FUNC_10(VAR_2, VAR_3, VAR_12, VAR_13, VAR_9, 0, 0);
            } else {

                if (VAR_27 < VAR_9)
                    break;
                FUNC_11(VAR_2, VAR_3, VAR_18, VAR_12, VAR_13, VAR_9);
                VAR_18 += VAR_9;
                VAR_27 -= VAR_9;
            }
        } else {
            uint8_t VAR_28;
            if (FUNC_5(&VAR_21) <= 0) {
                FUNC_1(VAR_2->avctx, VAR_1, "vector_segment overread\n");
                return VAR_0;
            }

            VAR_28 = FUNC_4(&VAR_21);
            VAR_10 = FUNC_7(VAR_28 >> 4, 4);
            VAR_11 = FUNC_7(VAR_28 & 0xF, 4);


            FUNC_10(VAR_2, VAR_3, VAR_12, VAR_13, VAR_9, VAR_10, VAR_11);

            VAR_8 = 0;
        }


        VAR_6 -= VAR_9;
        VAR_13 += (VAR_12 + VAR_9) / VAR_4;
        VAR_12 = (VAR_12 + VAR_9) % VAR_4;
    }
    return 0;
}
