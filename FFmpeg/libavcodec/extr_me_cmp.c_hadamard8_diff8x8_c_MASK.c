
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int ptrdiff_t ;
typedef int MpegEncContext ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (int,int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(MpegEncContext *VAR_0, uint8_t *VAR_1,
                               uint8_t *VAR_2, ptrdiff_t VAR_3, int VAR_4)
{
    int VAR_5, VAR_6[64], VAR_7 = 0;

    FUNC_3(VAR_4 == 8);

    for (VAR_5 = 0; VAR_5 < 8; VAR_5++) {

        FUNC_1(VAR_6[8 * VAR_5 + 0], VAR_6[8 * VAR_5 + 1],
                   VAR_2[VAR_3 * VAR_5 + 0] - VAR_1[VAR_3 * VAR_5 + 0],
                   VAR_2[VAR_3 * VAR_5 + 1] - VAR_1[VAR_3 * VAR_5 + 1]);
        FUNC_1(VAR_6[8 * VAR_5 + 2], VAR_6[8 * VAR_5 + 3],
                   VAR_2[VAR_3 * VAR_5 + 2] - VAR_1[VAR_3 * VAR_5 + 2],
                   VAR_2[VAR_3 * VAR_5 + 3] - VAR_1[VAR_3 * VAR_5 + 3]);
        FUNC_1(VAR_6[8 * VAR_5 + 4], VAR_6[8 * VAR_5 + 5],
                   VAR_2[VAR_3 * VAR_5 + 4] - VAR_1[VAR_3 * VAR_5 + 4],
                   VAR_2[VAR_3 * VAR_5 + 5] - VAR_1[VAR_3 * VAR_5 + 5]);
        FUNC_1(VAR_6[8 * VAR_5 + 6], VAR_6[8 * VAR_5 + 7],
                   VAR_2[VAR_3 * VAR_5 + 6] - VAR_1[VAR_3 * VAR_5 + 6],
                   VAR_2[VAR_3 * VAR_5 + 7] - VAR_1[VAR_3 * VAR_5 + 7]);

        FUNC_0(VAR_6[8 * VAR_5 + 0], VAR_6[8 * VAR_5 + 2]);
        FUNC_0(VAR_6[8 * VAR_5 + 1], VAR_6[8 * VAR_5 + 3]);
        FUNC_0(VAR_6[8 * VAR_5 + 4], VAR_6[8 * VAR_5 + 6]);
        FUNC_0(VAR_6[8 * VAR_5 + 5], VAR_6[8 * VAR_5 + 7]);

        FUNC_0(VAR_6[8 * VAR_5 + 0], VAR_6[8 * VAR_5 + 4]);
        FUNC_0(VAR_6[8 * VAR_5 + 1], VAR_6[8 * VAR_5 + 5]);
        FUNC_0(VAR_6[8 * VAR_5 + 2], VAR_6[8 * VAR_5 + 6]);
        FUNC_0(VAR_6[8 * VAR_5 + 3], VAR_6[8 * VAR_5 + 7]);
    }

    for (VAR_5 = 0; VAR_5 < 8; VAR_5++) {
        FUNC_0(VAR_6[8 * 0 + VAR_5], VAR_6[8 * 1 + VAR_5]);
        FUNC_0(VAR_6[8 * 2 + VAR_5], VAR_6[8 * 3 + VAR_5]);
        FUNC_0(VAR_6[8 * 4 + VAR_5], VAR_6[8 * 5 + VAR_5]);
        FUNC_0(VAR_6[8 * 6 + VAR_5], VAR_6[8 * 7 + VAR_5]);

        FUNC_0(VAR_6[8 * 0 + VAR_5], VAR_6[8 * 2 + VAR_5]);
        FUNC_0(VAR_6[8 * 1 + VAR_5], VAR_6[8 * 3 + VAR_5]);
        FUNC_0(VAR_6[8 * 4 + VAR_5], VAR_6[8 * 6 + VAR_5]);
        FUNC_0(VAR_6[8 * 5 + VAR_5], VAR_6[8 * 7 + VAR_5]);

        VAR_7 += FUNC_2(VAR_6[8 * 0 + VAR_5], VAR_6[8 * 4 + VAR_5]) +
               FUNC_2(VAR_6[8 * 1 + VAR_5], VAR_6[8 * 5 + VAR_5]) +
               FUNC_2(VAR_6[8 * 2 + VAR_5], VAR_6[8 * 6 + VAR_5]) +
               FUNC_2(VAR_6[8 * 3 + VAR_5], VAR_6[8 * 7 + VAR_5]);
    }
    return VAR_7;
}
