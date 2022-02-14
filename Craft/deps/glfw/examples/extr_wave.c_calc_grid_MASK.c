
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 double VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 double** VAR_3 ;
 double** VAR_4 ;
 double VAR_5 ;
 double** VAR_6 ;
 double** VAR_7 ;
 double** VAR_8 ;

void FUNC_0(void)
{
    int VAR_9, VAR_10, VAR_11, VAR_12;
    double VAR_13 = VAR_5 * VAR_0;


    for (VAR_9 = 0; VAR_9 < VAR_2; VAR_9++)
    {
        VAR_11 = (VAR_9 + 1) % VAR_2;
        for(VAR_10 = 0; VAR_10 < VAR_1; VAR_10++)
            VAR_3[VAR_9][VAR_10] = VAR_6[VAR_9][VAR_10] - VAR_6[VAR_11][VAR_10];
    }

    for (VAR_10 = 0; VAR_10 < VAR_1; VAR_10++)
    {
        VAR_12 = (VAR_10 + 1) % VAR_1;
        for(VAR_9 = 0; VAR_9 < VAR_2; VAR_9++)
            VAR_4[VAR_9][VAR_10] = VAR_6[VAR_9][VAR_10] - VAR_6[VAR_9][VAR_12];
    }


    for (VAR_9 = 0; VAR_9 < VAR_2; VAR_9++)
    {
        for (VAR_10 = 0; VAR_10 < VAR_1; VAR_10++)
        {
            VAR_7[VAR_9][VAR_10] = VAR_7[VAR_9][VAR_10] + VAR_3[VAR_9][VAR_10] * VAR_13;
            VAR_8[VAR_9][VAR_10] = VAR_8[VAR_9][VAR_10] + VAR_4[VAR_9][VAR_10] * VAR_13;
        }
    }


    for (VAR_9 = 1; VAR_9 < VAR_2; VAR_9++)
    {
        VAR_11 = VAR_9 - 1;
        for (VAR_10 = 1; VAR_10 < VAR_1; VAR_10++)
        {
            VAR_12 = VAR_10 - 1;
            VAR_6[VAR_9][VAR_10] = VAR_6[VAR_9][VAR_10] + (VAR_7[VAR_11][VAR_10] - VAR_7[VAR_9][VAR_10] + VAR_8[VAR_9][VAR_12] - VAR_8[VAR_9][VAR_10]) * VAR_13;
        }
    }
}
