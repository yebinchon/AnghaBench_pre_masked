
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ptrdiff_t ;
typedef int INTFLOAT ;
typedef int INT64FLOAT ;



__attribute__((used)) static void FUNC_0(INTFLOAT (*VAR_0)[2], INTFLOAT (*VAR_1)[2],
                                 const INTFLOAT (*VAR_2)[8][2],
                                 ptrdiff_t VAR_3, int VAR_4)
{
    int VAR_5, VAR_6;

    for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
        INT64FLOAT VAR_7 = (INT64FLOAT)VAR_2[VAR_5][6][0] * VAR_1[6][0];
        INT64FLOAT VAR_8 = (INT64FLOAT)VAR_2[VAR_5][6][0] * VAR_1[6][1];

        for (VAR_6 = 0; VAR_6 < 6; VAR_6++) {
            INT64FLOAT VAR_9 = VAR_1[VAR_6][0];
            INT64FLOAT VAR_10 = VAR_1[VAR_6][1];
            INT64FLOAT VAR_11 = VAR_1[12-VAR_6][0];
            INT64FLOAT VAR_12 = VAR_1[12-VAR_6][1];
            VAR_7 += (INT64FLOAT)VAR_2[VAR_5][VAR_6][0] * (VAR_9 + VAR_11) -
                      (INT64FLOAT)VAR_2[VAR_5][VAR_6][1] * (VAR_10 - VAR_12);
            VAR_8 += (INT64FLOAT)VAR_2[VAR_5][VAR_6][0] * (VAR_10 + VAR_12) +
                      (INT64FLOAT)VAR_2[VAR_5][VAR_6][1] * (VAR_9 - VAR_11);
        }




        VAR_0[VAR_5 * VAR_3][0] = VAR_7;
        VAR_0[VAR_5 * VAR_3][1] = VAR_8;

    }
}
