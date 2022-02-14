
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_6__ {TYPE_1__* priv_data; } ;
struct TYPE_5__ {int width; int height; int* current; int* previous; } ;
typedef TYPE_1__ Hnm4VideoContext ;
typedef int GetByteContext ;
typedef TYPE_2__ AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,int ,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(AVCodecContext *VAR_2, uint8_t *VAR_3, uint32_t VAR_4)
{
    Hnm4VideoContext *VAR_5 = VAR_2->priv_data;
    GetByteContext VAR_6;
    uint32_t VAR_7 = 0;
    int VAR_8, VAR_9, VAR_10;
    uint8_t VAR_11, VAR_12, VAR_13, VAR_14, VAR_15;

    FUNC_3(&VAR_6, VAR_3, VAR_4);

    while (FUNC_6(&VAR_6) < VAR_4) {
        VAR_8 = FUNC_4(&VAR_6) & 0x1F;
        if (VAR_8 == 0) {
            VAR_11 = FUNC_1(&VAR_6) & 0xE0;
            VAR_11 = VAR_11 >> 5;

            if (VAR_11 == 0) {
                if (VAR_7 + 2 > VAR_5->width * VAR_5->height) {
                    FUNC_0(VAR_2, VAR_1, "writeoffset out of bounds\n");
                    return VAR_0;
                }
                VAR_5->current[VAR_7++] = FUNC_1(&VAR_6);
                VAR_5->current[VAR_7++] = FUNC_1(&VAR_6);
            } else if (VAR_11 == 1) {
                VAR_7 += FUNC_1(&VAR_6) * 2;
            } else if (VAR_11 == 2) {
                VAR_8 = FUNC_2(&VAR_6);
                VAR_8 *= 2;
                VAR_7 += VAR_8;
            } else if (VAR_11 == 3) {
                VAR_8 = FUNC_1(&VAR_6) * 2;
                if (VAR_7 + VAR_8 > VAR_5->width * VAR_5->height) {
                    FUNC_0(VAR_2, VAR_1, "writeoffset out of bounds\n");
                    return VAR_0;
                }
                while (VAR_8 > 0) {
                    VAR_5->current[VAR_7++] = FUNC_4(&VAR_6);
                    VAR_8--;
                }
                FUNC_5(&VAR_6, 1);
            } else {
                break;
            }
            if (VAR_7 > VAR_5->width * VAR_5->height) {
                FUNC_0(VAR_2, VAR_1, "writeoffset out of bounds\n");
                return VAR_0;
            }
        } else {
            VAR_12 = FUNC_4(&VAR_6) & 0x20;
            VAR_13 = FUNC_4(&VAR_6) & 0x40;
            VAR_14 = FUNC_4(&VAR_6) & 0x80;
            FUNC_5(&VAR_6, 1);
            VAR_15 = FUNC_4(&VAR_6) & 0x01;
            VAR_10 = FUNC_2(&VAR_6);
            VAR_10 = (VAR_10 >> 1) & 0x7FFF;
            VAR_10 = VAR_7 + (VAR_10 * 2) - 0x8000;

            VAR_9 = VAR_8;

            if (!VAR_14 && VAR_10 + 2*VAR_8 > VAR_5->width * VAR_5->height) {
                FUNC_0(VAR_2, VAR_1, "Attempting to read out of bounds\n");
                return VAR_0;
            } else if (VAR_14 && VAR_10 + 1 >= VAR_5->width * VAR_5->height) {
                FUNC_0(VAR_2, VAR_1, "Attempting to read out of bounds\n");
                return VAR_0;
            } else if (VAR_7 + 2*VAR_8 > VAR_5->width * VAR_5->height) {
                FUNC_0(VAR_2, VAR_1,
                       "Attempting to write out of bounds\n");
                return VAR_0;

            }
            if(VAR_14) {
                if (VAR_10 < (!!VAR_13)*(2 * VAR_5->width - 1) + 2*(VAR_9-1)) {
                    FUNC_0(VAR_2, VAR_1, "Attempting to read out of bounds\n");
                    return VAR_0;
                }
            } else {
                if (VAR_10 < (!!VAR_13)*(2 * VAR_5->width - 1)) {
                    FUNC_0(VAR_2, VAR_1, "Attempting to read out of bounds\n");
                    return VAR_0;
                }
            }

            if (VAR_12) {
                while (VAR_9 > 0) {
                    if (VAR_13) {
                        VAR_5->current[VAR_7++] = VAR_5->previous[VAR_10 - (2 * VAR_5->width) + 1];
                        VAR_5->current[VAR_7++] = VAR_5->previous[VAR_10++];
                        VAR_10++;
                    } else {
                        VAR_5->current[VAR_7++] = VAR_5->previous[VAR_10++];
                        VAR_5->current[VAR_7++] = VAR_5->previous[VAR_10++];
                    }
                    if (VAR_14)
                        VAR_10 -= 4;
                    VAR_9--;
                }
            } else {
                while (VAR_9 > 0) {
                    if (VAR_13) {
                        VAR_5->current[VAR_7++] = VAR_5->current[VAR_10 - (2 * VAR_5->width) + 1];
                        VAR_5->current[VAR_7++] = VAR_5->current[VAR_10++];
                        VAR_10++;
                    } else {
                        VAR_5->current[VAR_7++] = VAR_5->current[VAR_10++];
                        VAR_5->current[VAR_7++] = VAR_5->current[VAR_10++];
                    }
                    if (VAR_14)
                        VAR_10 -= 4;
                    VAR_9--;
                }
            }

            if (VAR_15) {
                VAR_9 = VAR_8;
                VAR_7 -= VAR_8 * 2;
                while (VAR_9 > 0) {
                    VAR_15 = VAR_5->current[VAR_7];
                    VAR_5->current[VAR_7] = VAR_5->current[VAR_7 + 1];
                    VAR_5->current[VAR_7 + 1] = VAR_15;
                    VAR_9--;
                    VAR_7 += 2;
                }
            }
        }
    }
    return 0;
}
