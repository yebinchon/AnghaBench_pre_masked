
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int int32_t ;
typedef int int16_t ;


 int VAR_0 ;
 int FUNC_0 (int*,unsigned int*) ;
 int FUNC_1 (int*,int*,int ) ;

__attribute__((used)) static void FUNC_2(int16_t *VAR_1, int16_t *VAR_2)
{
    int32_t VAR_3[2][6];
    int16_t VAR_4[10];
    int32_t VAR_5;
    int VAR_6;

    FUNC_1(VAR_2, VAR_4, VAR_0);

    FUNC_0(&VAR_4[0], VAR_3[0]);
    FUNC_0(&VAR_4[1], VAR_3[1]);

    for (VAR_6 = 5; VAR_6 > 0; VAR_6--) {
        VAR_3[0][VAR_6] += (unsigned)VAR_3[0][VAR_6 - 1];
        VAR_3[1][VAR_6] -= (unsigned)VAR_3[1][VAR_6 - 1];
    }

    VAR_1[0] = 4096;
    for (VAR_6 = 5; VAR_6 > 0; VAR_6--) {
        VAR_5 = VAR_3[0][6 - VAR_6] + (unsigned)VAR_3[1][6 - VAR_6] + 4096;
        VAR_1[6 - VAR_6] = VAR_5 >> 13;

        VAR_5 = VAR_3[0][6 - VAR_6] - (unsigned)VAR_3[1][6 - VAR_6] + 4096;
        VAR_1[5 + VAR_6] = VAR_5 >> 13;
    }
}
