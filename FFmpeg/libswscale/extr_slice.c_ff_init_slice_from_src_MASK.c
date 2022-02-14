
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_5__ {int width; TYPE_1__* plane; } ;
struct TYPE_4__ {int sliceY; int available_lines; int sliceH; int ** line; } ;
typedef TYPE_2__ SwsSlice ;


 int FUNC_0 (int,int) ;

int FUNC_1(SwsSlice * VAR_0, uint8_t *VAR_1[4], int VAR_2[4], int VAR_3, int VAR_4, int VAR_5, int VAR_6, int VAR_7, int VAR_8)
{
    int VAR_9 = 0;

    const int VAR_10[4] = {VAR_4,
                          VAR_6,
                          VAR_6,
                          VAR_4};

    const int VAR_11[4] = {VAR_4 +VAR_5,
                        VAR_6 + VAR_7,
                        VAR_6 + VAR_7,
                        VAR_4 + VAR_5};

    uint8_t *const VAR_12[4] = {VAR_1[0] + (VAR_8 ? 0 : VAR_10[0]) * VAR_2[0],
                              VAR_1[1] + (VAR_8 ? 0 : VAR_10[1]) * VAR_2[1],
                              VAR_1[2] + (VAR_8 ? 0 : VAR_10[2]) * VAR_2[2],
                              VAR_1[3] + (VAR_8 ? 0 : VAR_10[3]) * VAR_2[3]};

    VAR_0->width = VAR_3;

    for (VAR_9 = 0; VAR_9 < 4; ++VAR_9) {
        int VAR_13;
        int VAR_14 = VAR_0->plane[VAR_9].sliceY;
        int VAR_15 = VAR_0->plane[VAR_9].available_lines;
        int VAR_16 = VAR_11[VAR_9] - VAR_10[VAR_9];
        int VAR_17 = VAR_11[VAR_9] - VAR_14;

        if (VAR_10[VAR_9] >= VAR_14 && VAR_15 >= VAR_17) {
            VAR_0->plane[VAR_9].sliceH = FUNC_0(VAR_17, VAR_0->plane[VAR_9].sliceH);
            for (VAR_13 = 0; VAR_13 < VAR_16; VAR_13+= 1)
                VAR_0->plane[VAR_9].line[VAR_10[VAR_9] - VAR_14 + VAR_13] = VAR_12[VAR_9] + VAR_13 * VAR_2[VAR_9];
        } else {
            VAR_0->plane[VAR_9].sliceY = VAR_10[VAR_9];
            VAR_16 = VAR_16 > VAR_15 ? VAR_15 : VAR_16;
            VAR_0->plane[VAR_9].sliceH = VAR_16;
            for (VAR_13 = 0; VAR_13 < VAR_16; VAR_13+= 1)
                VAR_0->plane[VAR_9].line[VAR_13] = VAR_12[VAR_9] + VAR_13 * VAR_2[VAR_9];
        }

    }

    return 0;
}
