
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int16_t ;


 size_t VAR_0 ;
 int*** VAR_1 ;
 int** VAR_2 ;

__attribute__((used)) static void FUNC_0(int16_t* VAR_3,
                                      int16_t* VAR_4[VAR_0 + 1],
                                      int VAR_5)
{
    int16_t* VAR_6 = VAR_4[VAR_0];
    int VAR_7,VAR_8;

    for (VAR_7 = 0; VAR_7 < 10; VAR_7++) {
        int VAR_9 = VAR_3[VAR_7] << 15;

        for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++)
            VAR_9 -= VAR_4[VAR_8][VAR_7] * VAR_1[VAR_5][VAR_8][VAR_7];

        VAR_6[VAR_7] = ((VAR_9 >> 15) * VAR_2[VAR_5][VAR_7]) >> 12;
    }
}
