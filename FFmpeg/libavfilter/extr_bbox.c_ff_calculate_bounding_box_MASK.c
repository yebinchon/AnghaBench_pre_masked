
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int x1; int y1; int x2; int y2; } ;
typedef TYPE_1__ FFBoundingBox ;



int FUNC_0(FFBoundingBox *VAR_0,
                              const uint8_t *VAR_1, int VAR_2, int VAR_3, int VAR_4,
                              int VAR_5)
{
    int VAR_6, VAR_7;
    int VAR_8;
    int VAR_9;
    int VAR_10;
    int VAR_11;
    const uint8_t *VAR_12;


    for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++)
        for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++)
            if ((VAR_1[VAR_7 * VAR_2 + VAR_8] > VAR_5))
                goto outl;
outl:
    if (VAR_8 == VAR_3)
        return 0;


    for (VAR_10 = VAR_3 - 1; VAR_10 >= VAR_8; VAR_10--)
        for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++)
            if ((VAR_1[VAR_7 * VAR_2 + VAR_10] > VAR_5))
                goto outr;
outr:


    VAR_12 = VAR_1;
    for (VAR_9 = 0; VAR_9 < VAR_4; VAR_9++) {
        for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++)
            if (VAR_12[VAR_6] > VAR_5)
                goto outt;
        VAR_12 += VAR_2;
    }
outt:


    VAR_12 = VAR_1 + (VAR_4-1)*VAR_2;
    for (VAR_11 = VAR_4 - 1; VAR_11 >= VAR_9; VAR_11--) {
        for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++)
            if (VAR_12[VAR_6] > VAR_5)
                goto outb;
        VAR_12 -= VAR_2;
    }
outb:

    VAR_0->x1 = VAR_8;
    VAR_0->y1 = VAR_9;
    VAR_0->x2 = VAR_10;
    VAR_0->y2 = VAR_11;
    return 1;
}
