
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int16_t ;


 int VAR_0 ;
 int FUNC_0 (int*,int const*,int) ;

void FUNC_1(int16_t* VAR_1, const int16_t* VAR_2, int VAR_3)
{
    int VAR_4;
    int VAR_5[VAR_0+1];
    int VAR_6[VAR_0+1];

    FUNC_0(VAR_5, VAR_2 , VAR_3);
    FUNC_0(VAR_6, VAR_2+1, VAR_3);


    VAR_1[0] = 4096;
    for(VAR_4=1; VAR_4<VAR_3+1; VAR_4++)
    {
        int VAR_7 = VAR_5[VAR_4] + VAR_5[VAR_4-1];
        int VAR_8 = VAR_6[VAR_4] - VAR_6[VAR_4-1];

        VAR_7 += 1 << 10;
        VAR_1[VAR_4] = (VAR_7 + VAR_8) >> 11;
        VAR_1[(VAR_3 << 1) + 1 - VAR_4] = (VAR_7 - VAR_8) >> 11;
    }
}
