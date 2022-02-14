
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int INTFLOAT ;
typedef int INT64FLOAT ;


 int FUNC_0 (int const,int) ;

__attribute__((used)) static void FUNC_1(INTFLOAT (*VAR_0)[2], INTFLOAT (*VAR_1)[32][2], const INTFLOAT VAR_2[8], int VAR_3, int VAR_4)
{
    int VAR_5, VAR_6;
    for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++, VAR_0++) {
        INT64FLOAT VAR_7 = FUNC_0(VAR_2[6], VAR_0[6][0]);
        INT64FLOAT VAR_8 = 0.0f;
        INT64FLOAT VAR_9 = FUNC_0(VAR_2[6], VAR_0[6][1]);
        INT64FLOAT VAR_10 = 0.0f;
        for (VAR_6 = 0; VAR_6 < 6; VAR_6 += 2) {
            VAR_8 += (INT64FLOAT)VAR_2[VAR_6+1] * (VAR_0[VAR_6+1][0] + VAR_0[12-VAR_6-1][0]);
            VAR_10 += (INT64FLOAT)VAR_2[VAR_6+1] * (VAR_0[VAR_6+1][1] + VAR_0[12-VAR_6-1][1]);
        }






        VAR_1[ VAR_4][VAR_5][0] = (INTFLOAT)(VAR_7 + VAR_8);
        VAR_1[ VAR_4][VAR_5][1] = (INTFLOAT)(VAR_9 + VAR_10);
        VAR_1[!VAR_4][VAR_5][0] = (INTFLOAT)(VAR_7 - VAR_8);
        VAR_1[!VAR_4][VAR_5][1] = (INTFLOAT)(VAR_9 - VAR_10);
    }
}
