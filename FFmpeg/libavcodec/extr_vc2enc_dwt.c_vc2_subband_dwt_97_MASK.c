
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ptrdiff_t ;
typedef int dwtcoef ;
struct TYPE_3__ {int* buffer; } ;
typedef TYPE_1__ VC2TransformContext ;


 int FUNC_0 (int*,int,int,int,int*) ;

__attribute__((used)) static void FUNC_1(VC2TransformContext *VAR_0, dwtcoef *VAR_1,
                               ptrdiff_t VAR_2, int VAR_3, int VAR_4)
{
    int VAR_5, VAR_6;
    dwtcoef *VAR_7 = VAR_1, *VAR_8 = VAR_0->buffer, *VAR_9 = VAR_8;
    const ptrdiff_t VAR_10 = VAR_3 << 1;
    const ptrdiff_t VAR_11 = VAR_4 << 1;





    for (VAR_6 = 0; VAR_6 < VAR_11; VAR_6++) {
        for (VAR_5 = 0; VAR_5 < VAR_10; VAR_5++)
            VAR_9[VAR_5] = VAR_7[VAR_5] * 2;
        VAR_9 += VAR_10;
        VAR_7 += VAR_2;
    }


    VAR_9 = VAR_8;
    for (VAR_6 = 0; VAR_6 < VAR_11; VAR_6++) {

        VAR_9[1] -= (8*VAR_9[0] + 9*VAR_9[2] - VAR_9[4] + 8) >> 4;
        for (VAR_5 = 1; VAR_5 < VAR_3 - 2; VAR_5++)
            VAR_9[2*VAR_5 + 1] -= (9*VAR_9[2*VAR_5] + 9*VAR_9[2*VAR_5 + 2] - VAR_9[2*VAR_5 + 4] -
                                VAR_9[2 * VAR_5 - 2] + 8) >> 4;
        VAR_9[VAR_10 - 1] -= (17*VAR_9[VAR_10 - 2] -
                                    VAR_9[VAR_10 - 4] + 8) >> 4;
        VAR_9[VAR_10 - 3] -= (8*VAR_9[VAR_10 - 2] +
                                    9*VAR_9[VAR_10 - 4] -
                                    VAR_9[VAR_10 - 6] + 8) >> 4;

        VAR_9[0] += (VAR_9[1] + VAR_9[1] + 2) >> 2;
        for (VAR_5 = 1; VAR_5 < VAR_3 - 1; VAR_5++)
            VAR_9[2*VAR_5] += (VAR_9[2*VAR_5 - 1] + VAR_9[2*VAR_5 + 1] + 2) >> 2;

        VAR_9[VAR_10 - 2] += (VAR_9[VAR_10 - 3] +
                                    VAR_9[VAR_10 - 1] + 2) >> 2;
        VAR_9 += VAR_10;
    }


    VAR_9 = VAR_8 + VAR_10;
    for (VAR_5 = 0; VAR_5 < VAR_10; VAR_5++)
        VAR_9[VAR_5] -= (8*VAR_9[VAR_5 - VAR_10] + 9*VAR_9[VAR_5 + VAR_10] -
                      VAR_9[VAR_5 + 3 * VAR_10] + 8) >> 4;

    VAR_9 = VAR_8 + (VAR_10 << 1);
    for (VAR_6 = 1; VAR_6 < VAR_4 - 2; VAR_6++) {
        for (VAR_5 = 0; VAR_5 < VAR_10; VAR_5++)
            VAR_9[VAR_5 + VAR_10] -= (9*VAR_9[VAR_5] +
                                        9*VAR_9[VAR_5 + 2 * VAR_10] -
                                        VAR_9[VAR_5 - 2 * VAR_10] -
                                        VAR_9[VAR_5 + 4 * VAR_10] + 8) >> 4;
        VAR_9 += VAR_10 << 1;
    }

    VAR_9 = VAR_8 + (VAR_11 - 1) * VAR_10;
    for (VAR_5 = 0; VAR_5 < VAR_10; VAR_5++) {
        VAR_9[VAR_5] -= (17*VAR_9[VAR_5 - VAR_10] -
                      VAR_9[VAR_5 - 3*VAR_10] + 8) >> 4;
                      VAR_9[VAR_5 - 2*VAR_10] -= (9*VAR_9[VAR_5 - 3*VAR_10] +
                      8*VAR_9[VAR_5 - 1*VAR_10] - VAR_9[VAR_5 - 5*VAR_10] + 8) >> 4;
    }


    VAR_9 = VAR_8;
    for (VAR_5 = 0; VAR_5 < VAR_10; VAR_5++)
        VAR_9[VAR_5] += (VAR_9[VAR_5 + VAR_10] + VAR_9[VAR_5 + VAR_10] + 2) >> 2;

    VAR_9 = VAR_8 + (VAR_10 << 1);
    for (VAR_6 = 1; VAR_6 < VAR_4 - 1; VAR_6++) {
        for (VAR_5 = 0; VAR_5 < VAR_10; VAR_5++)
            VAR_9[VAR_5] += (VAR_9[VAR_5 - VAR_10] + VAR_9[VAR_5 + VAR_10] + 2) >> 2;
        VAR_9 += VAR_10 << 1;
    }

    VAR_9 = VAR_8 + (VAR_11 - 2) * VAR_10;
    for (VAR_5 = 0; VAR_5 < VAR_10; VAR_5++)
        VAR_9[VAR_5] += (VAR_9[VAR_5 - VAR_10] + VAR_9[VAR_5 + VAR_10] + 2) >> 2;

    FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, VAR_8);
}
