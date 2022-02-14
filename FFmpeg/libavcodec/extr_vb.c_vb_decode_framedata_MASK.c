
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {int* prev_frame; int* frame; TYPE_3__* avctx; int stream; } ;
typedef TYPE_1__ VBDecContext ;
struct TYPE_5__ {int width; int const height; } ;
typedef int GetByteContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*,int ,char*,...) ;
 int FUNC_1 (int *,int*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int*,int*,int*) ;
 int FUNC_5 (int*,int*,int*) ;
 int FUNC_6 (int*,int*,int) ;
 int FUNC_7 (int*,int,int) ;
 int* VAR_2 ;

__attribute__((used)) static int FUNC_8(VBDecContext *VAR_3, int VAR_4)
{
    GetByteContext VAR_5;
    uint8_t *VAR_6, *VAR_7;
    int VAR_8, VAR_9, VAR_10, VAR_11;
    int VAR_12 = 0;
    int VAR_13, VAR_14, VAR_15, VAR_16;
    int VAR_17, VAR_18;
    const int VAR_19 = VAR_3->avctx->width;
    uint8_t *VAR_20 = VAR_3->prev_frame;
    uint8_t *VAR_21 = VAR_3->prev_frame + VAR_19*VAR_3->avctx->height;

    VAR_5 = VAR_3->stream;

    VAR_6 = VAR_3->prev_frame + VAR_4;
    VAR_7 = VAR_3->frame;

    VAR_9 = (VAR_3->avctx->width >> 2) * (VAR_3->avctx->height >> 2);
    VAR_11 = 0;
    for (VAR_8 = 0; VAR_8 < VAR_9; VAR_8++) {
        if (!(VAR_8 & 3)) {
            if (FUNC_3(&VAR_5) < 1) {
                FUNC_0(VAR_3->avctx, VAR_1, "Insufficient data\n");
                return VAR_0;
            }
            VAR_12 = FUNC_2(&VAR_5);
        }
        switch (VAR_12 & 0xC0) {
        case 0x00:
            for (VAR_14 = 0; VAR_14 < 4; VAR_14++)
                if (FUNC_4(VAR_6 + VAR_14*VAR_19, VAR_20, VAR_21))
                    FUNC_6(VAR_7 + VAR_14*VAR_19, VAR_6 + VAR_14*VAR_19, 4);
                else
                    FUNC_7(VAR_7 + VAR_14*VAR_19, 0, 4);
            break;
        case 0x40:
            VAR_10 = FUNC_2(&VAR_5);
            if (!VAR_10) {
                if (FUNC_3(&VAR_5) < 16) {
                    FUNC_0(VAR_3->avctx, VAR_1, "Insufficient data\n");
                    return VAR_0;
                }
                for (VAR_14 = 0; VAR_14 < 4; VAR_14++)
                    FUNC_1(&VAR_5, VAR_7 + VAR_14 * VAR_19, 4);
            } else {
                VAR_13 = ((VAR_10 & 0xF)^8) - 8;
                VAR_14 = ((VAR_10 >> 4) ^8) - 8;
                VAR_10 = VAR_13 + VAR_14*VAR_19;
                for (VAR_14 = 0; VAR_14 < 4; VAR_14++)
                    if (FUNC_4(VAR_6 + VAR_10 + VAR_14*VAR_19, VAR_20, VAR_21))
                        FUNC_6(VAR_7 + VAR_14*VAR_19, VAR_6 + VAR_10 + VAR_14*VAR_19, 4);
                    else
                        FUNC_7(VAR_7 + VAR_14*VAR_19, 0, 4);
            }
            break;
        case 0x80:
            VAR_10 = FUNC_2(&VAR_5);
            for (VAR_14 = 0; VAR_14 < 4; VAR_14++)
                FUNC_7(VAR_7 + VAR_14*VAR_19, VAR_10, 4);
            break;
        case 0xC0:
            VAR_10 = FUNC_2(&VAR_5);
            VAR_17 = VAR_10 >> 6;
            VAR_18 = VAR_2[VAR_10 & 0x3F];
            switch (VAR_17) {
            case 0:
                VAR_15 = FUNC_2(&VAR_5);
                VAR_16 = FUNC_2(&VAR_5);
                for (VAR_14 = 0; VAR_14 < 4; VAR_14++)
                    for (VAR_13 = 0; VAR_13 < 4; VAR_13++, VAR_18 >>= 1)
                        VAR_7[VAR_13 + VAR_14*VAR_19] = (VAR_18 & 1) ? VAR_16 : VAR_15;
                break;
            case 1:
                VAR_18 = ~VAR_18;
            case 2:
                VAR_15 = FUNC_2(&VAR_5);
                for (VAR_14 = 0; VAR_14 < 4; VAR_14++)
                    for (VAR_13 = 0; VAR_13 < 4; VAR_13++, VAR_18 >>= 1)
                        if (VAR_18 & 1 && FUNC_5(VAR_6 + VAR_13 + VAR_14*VAR_19, VAR_20, VAR_21))
                            VAR_7[VAR_13 + VAR_14*VAR_19] = VAR_6[VAR_13 + VAR_14*VAR_19];
                        else
                            VAR_7[VAR_13 + VAR_14*VAR_19] = VAR_15;
                break;
            case 3:
                FUNC_0(VAR_3->avctx, VAR_1, "Invalid opcode seen @%d\n", VAR_8);
                return VAR_0;
            }
            break;
        }
        VAR_12 <<= 2;
        VAR_7 += 4;
        VAR_6 += 4;
        VAR_11++;
        if (VAR_11 == (VAR_19 >> 2)) {
            VAR_11 = 0;
            VAR_7 += VAR_19 * 3;
            VAR_6 += VAR_19 * 3;
        }
    }
    return 0;
}
