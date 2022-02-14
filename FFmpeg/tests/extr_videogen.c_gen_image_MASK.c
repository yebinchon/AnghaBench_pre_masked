
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int x; int y; int w; int h; int r; int g; int b; } ;
typedef TYPE_1__ VObj ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (unsigned int*,int) ;
 TYPE_1__* VAR_6 ;
 int FUNC_2 (int,int,int,int,int) ;
 unsigned int VAR_7 ;

__attribute__((used)) static void FUNC_3(int VAR_8, int VAR_9, int VAR_10)
{
    int VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_17, VAR_18, VAR_19, VAR_20;
    unsigned int VAR_21;

    if (VAR_8 == 0) {
        for (VAR_16 = 0; VAR_16 < VAR_2; VAR_16++) {
            VAR_6[VAR_16].x = FUNC_1(&VAR_7, VAR_9);
            VAR_6[VAR_16].y = FUNC_1(&VAR_7, VAR_10);
            VAR_6[VAR_16].w = FUNC_1(&VAR_7, VAR_9 / 4) + 10;
            VAR_6[VAR_16].h = FUNC_1(&VAR_7, VAR_10 / 4) + 10;
            VAR_6[VAR_16].r = FUNC_1(&VAR_7, 256);
            VAR_6[VAR_16].g = FUNC_1(&VAR_7, 256);
            VAR_6[VAR_16].b = FUNC_1(&VAR_7, 256);
        }
    }



    VAR_17 = FUNC_0(VAR_8 * VAR_1 / 50) * 35;
    VAR_18 = FUNC_0(VAR_8 * VAR_1 / 50 + VAR_1 / 10) * 30;
    for (VAR_15 = 0; VAR_15 < VAR_10; VAR_15++) {
        for (VAR_14 = 0; VAR_14 < VAR_9; VAR_14++) {
            VAR_19 = (VAR_14 << VAR_0) + VAR_17;
            VAR_20 = (VAR_15 << VAR_0) + VAR_18;
            VAR_11 = ((VAR_20 * 7) >> VAR_0) & 0xff;
            VAR_12 = (((VAR_19 + VAR_20) * 9) >> VAR_0) & 0xff;
            VAR_13 = ((VAR_19 * 5) >> VAR_0) & 0xff;
            FUNC_2(VAR_14, VAR_15, VAR_11, VAR_12, VAR_13);
        }
    }


    VAR_21 = VAR_8;
    for (VAR_15 = 0; VAR_15 < VAR_3; VAR_15++) {
        for (VAR_14 = 0; VAR_14 < VAR_3; VAR_14++) {
            VAR_11 = FUNC_1(&VAR_21, 256);
            VAR_12 = FUNC_1(&VAR_21, 256);
            VAR_13 = FUNC_1(&VAR_21, 256);
            FUNC_2(VAR_14 + VAR_4, VAR_15 + VAR_5, VAR_11, VAR_12, VAR_13);
        }
    }


    for (VAR_16 = 0; VAR_16 < VAR_2; VAR_16++) {
        VObj *VAR_22 = &VAR_6[VAR_16];
        VAR_21 = VAR_16;
        for (VAR_15 = 0; VAR_15 < VAR_22->h; VAR_15++) {
            for (VAR_14 = 0; VAR_14 < VAR_22->w; VAR_14++) {
                VAR_11 = VAR_22->r;
                VAR_12 = VAR_22->g;
                VAR_13 = VAR_22->b;

                VAR_11 += FUNC_1(&VAR_21, 50);
                VAR_12 += FUNC_1(&VAR_21, 50);
                VAR_13 += FUNC_1(&VAR_21, 50);
                FUNC_2(VAR_14 + VAR_22->x, VAR_15 + VAR_22->y, VAR_11, VAR_12, VAR_13);
            }
        }
        VAR_22->x += FUNC_1(&VAR_7, 21) - 10;
        VAR_22->y += FUNC_1(&VAR_7, 21) - 10;
    }
}
