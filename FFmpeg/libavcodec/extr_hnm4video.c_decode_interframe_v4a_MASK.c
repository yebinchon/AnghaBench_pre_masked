
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef size_t uint32_t ;
struct TYPE_6__ {TYPE_1__* priv_data; } ;
struct TYPE_5__ {size_t width; size_t height; size_t* current; size_t* previous; } ;
typedef TYPE_1__ Hnm4VideoContext ;
typedef int GetByteContext ;
typedef TYPE_2__ AVCodecContext ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ,char*) ;
 size_t FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,int*,size_t) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int) ;
 size_t FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(AVCodecContext *VAR_1, uint8_t *VAR_2,
                                  uint32_t VAR_3)
{
    Hnm4VideoContext *VAR_4 = VAR_1->priv_data;
    GetByteContext VAR_5;
    uint32_t VAR_6 = 0, VAR_7;
    uint8_t VAR_8, VAR_9, VAR_10, VAR_11;

    FUNC_3(&VAR_5, VAR_2, VAR_3);

    while (FUNC_6(&VAR_5) < VAR_3) {
        VAR_9 = FUNC_4(&VAR_5) & 0x3F;
        if (VAR_9 == 0) {
            VAR_8 = FUNC_1(&VAR_5) & 0xC0;
            VAR_8 = VAR_8 >> 6;
            if (VAR_8 == 0) {
                VAR_6 += FUNC_1(&VAR_5);
            } else if (VAR_8 == 1) {
                if (VAR_6 + VAR_4->width >= VAR_4->width * VAR_4->height) {
                    FUNC_0(VAR_1, VAR_0, "writeoffset out of bounds\n");
                    break;
                }
                VAR_4->current[VAR_6] = FUNC_1(&VAR_5);
                VAR_4->current[VAR_6 + VAR_4->width] = FUNC_1(&VAR_5);
                VAR_6++;
            } else if (VAR_8 == 2) {
                VAR_6 += VAR_4->width;
            } else if (VAR_8 == 3) {
                break;
            }
            if (VAR_6 > VAR_4->width * VAR_4->height) {
                FUNC_0(VAR_1, VAR_0, "writeoffset out of bounds\n");
                break;
            }
        } else {
            VAR_11 = FUNC_4(&VAR_5) & 0x80;
            VAR_10 = FUNC_4(&VAR_5) & 0x40;
            FUNC_5(&VAR_5, 1);

            VAR_7 = VAR_6;
            VAR_7 += FUNC_2(&VAR_5);

            if (VAR_11) {
                if (VAR_7 < 0x10000) {
                    FUNC_0(VAR_1, VAR_0, "Attempting to read out of bounds\n");
                    break;
                }
                VAR_7 -= 0x10000;
            }

            if (VAR_7 + VAR_4->width + VAR_9 >= VAR_4->width * VAR_4->height) {
                FUNC_0(VAR_1, VAR_0, "Attempting to read out of bounds\n");
                break;
            } else if (VAR_6 + VAR_4->width + VAR_9 >= VAR_4->width * VAR_4->height) {
                FUNC_0(VAR_1, VAR_0, "Attempting to write out of bounds\n");
                break;
            }

            if (VAR_10) {
                while (VAR_9 > 0) {
                    VAR_4->current[VAR_6] = VAR_4->previous[VAR_7];
                    VAR_4->current[VAR_6 + VAR_4->width] = VAR_4->previous[VAR_7 + VAR_4->width];
                    VAR_6++;
                    VAR_7++;
                    VAR_9--;
                }
            } else {
                while (VAR_9 > 0) {
                    VAR_4->current[VAR_6] = VAR_4->current[VAR_7];
                    VAR_4->current[VAR_6 + VAR_4->width] = VAR_4->current[VAR_7 + VAR_4->width];
                    VAR_6++;
                    VAR_7++;
                    VAR_9--;
                }
            }
        }
    }
}
