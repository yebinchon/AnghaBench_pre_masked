
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_5__ {int** frame; int width; int frame_size; int* dirty; size_t current_frame; int video_size; int height; int gb; } ;
typedef TYPE_1__ PAFVideoDecContext ;


 int VAR_0 ;
 int** VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int*,int const*,int,int,int) ;
 int FUNC_8 (int*,int,int,int) ;
 int FUNC_9 (int*,int,int,int const*) ;
 int FUNC_10 (TYPE_1__*,int*,int) ;
 int FUNC_11 (TYPE_1__*,int const**,int const**) ;

__attribute__((used)) static int FUNC_12(PAFVideoDecContext *VAR_2, uint8_t *VAR_3, uint8_t VAR_4)
{
    uint32_t VAR_5, VAR_6;
    uint8_t *VAR_7, *VAR_8, VAR_9 = 0, VAR_10 = 0;
    const uint8_t *VAR_11, *VAR_12, *VAR_13;
    int VAR_14, VAR_15, VAR_16 = 0;

    VAR_14 = FUNC_1(&VAR_2->gb);
    if (VAR_14) {
        if (VAR_4 & 0x10) {
            int VAR_17;

            VAR_17 = FUNC_6(&VAR_2->gb) & 3;
            if (VAR_17)
                FUNC_4(&VAR_2->gb, 4 - VAR_17);
        }
        do {
            int VAR_18, VAR_19, VAR_20, VAR_21;
            VAR_19 = FUNC_0(&VAR_2->gb);
            VAR_18 = VAR_19 >> 14;
            VAR_20 = (VAR_19 & 0x7F) * 2;
            VAR_21 = ((VAR_19 >> 7) & 0x7F) * 2;
            VAR_7 = VAR_2->frame[VAR_18] + VAR_20 + VAR_21 * VAR_2->width;
            VAR_8 = VAR_2->frame[VAR_18] + VAR_2->frame_size;
            VAR_6 = (VAR_20 & 0x7F) * 2;
            VAR_15 = FUNC_3(&VAR_2->gb) + VAR_6;
            if (FUNC_2(&VAR_2->gb) < (VAR_15 - VAR_6) * 16)
                return VAR_0;
            VAR_2->dirty[VAR_18] = 1;
            do {
                VAR_6++;
                if (VAR_7 + 3 * VAR_2->width + 4 > VAR_8)
                    return VAR_0;
                FUNC_10(VAR_2, VAR_7, VAR_2->width);
                if ((VAR_6 & 0x3F) == 0)
                    VAR_7 += VAR_2->width * 3;
                VAR_7 += 4;
            } while (VAR_6 < VAR_15);
        } while (--VAR_14);
    }

    VAR_7 = VAR_2->frame[VAR_2->current_frame];
    VAR_8 = VAR_2->frame[VAR_2->current_frame] + VAR_2->frame_size;
    do {
        FUNC_11(VAR_2, &VAR_11, &VAR_12);
        if ((VAR_11 + 3 * VAR_2->width + 4 > VAR_12) ||
            (VAR_7 + 3 * VAR_2->width + 4 > VAR_8) ||
            FUNC_2(&VAR_2->gb) < 4)
            return VAR_0;
        FUNC_7(VAR_7, VAR_11, VAR_2->width, VAR_2->width, 4);
        VAR_14++;
        if ((VAR_14 & 0x3F) == 0)
            VAR_7 += VAR_2->width * 3;
        VAR_7 += 4;
    } while (VAR_14 < VAR_2->video_size / 16);

    VAR_5 = FUNC_3(&VAR_2->gb);
    FUNC_4(&VAR_2->gb, 2);

    if (FUNC_2(&VAR_2->gb) < VAR_5)
        return VAR_0;

    VAR_13 = VAR_3 + FUNC_6(&VAR_2->gb);
    FUNC_5(&VAR_2->gb, VAR_5);

    VAR_7 = VAR_2->frame[VAR_2->current_frame];

    for (VAR_14 = 0; VAR_14 < VAR_2->height; VAR_14 += 4, VAR_7 += VAR_2->width * 3)
        for (VAR_15 = 0; VAR_15 < VAR_2->width; VAR_15 += 4, VAR_7 += 4) {
            int VAR_22, VAR_23 = 0;
            if (VAR_16 > VAR_5)
                return VAR_0;
            if (VAR_15 & 4) {
                VAR_22 = VAR_13[VAR_16] & 15;
                VAR_16++;
            } else {
                VAR_22 = VAR_13[VAR_16] >> 4;
            }

            while (VAR_1[VAR_22][VAR_23]) {
                VAR_6 = VAR_2->width * 2;
                VAR_4 = VAR_1[VAR_22][VAR_23++];

                switch (VAR_4) {
                case 2:
                    VAR_6 = 0;
                case 3:
                    VAR_10 = FUNC_1(&VAR_2->gb);
                case 4:
                    VAR_9 = FUNC_1(&VAR_2->gb);
                    FUNC_8(VAR_7 + VAR_6, VAR_2->width, VAR_9, VAR_10);
                    break;
                case 5:
                    VAR_6 = 0;
                case 6:
                    FUNC_11(VAR_2, &VAR_11, &VAR_12);
                case 7:
                    if (VAR_11 + VAR_6 + VAR_2->width + 4 > VAR_12)
                        return VAR_0;
                    VAR_9 = FUNC_1(&VAR_2->gb);
                    FUNC_9(VAR_7 + VAR_6, VAR_2->width, VAR_9, VAR_11 + VAR_6);
                    break;
                }
            }
        }

    return 0;
}
