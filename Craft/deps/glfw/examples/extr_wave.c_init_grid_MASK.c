
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 double VAR_2 ;
 double FUNC_0 (double) ;
 double** VAR_3 ;
 double FUNC_1 (double) ;
 double** VAR_4 ;
 double** VAR_5 ;

void FUNC_2(void)
{
    int VAR_6, VAR_7;
    double VAR_8, VAR_9, VAR_10;

    for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++)
    {
        for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++)
        {
            VAR_8 = (double) (VAR_6 - VAR_1 / 2);
            VAR_9 = (double) (VAR_7 - VAR_0 / 2);
            VAR_10 = FUNC_1(VAR_8 * VAR_8 + VAR_9 * VAR_9);
            if (VAR_10 < 0.1 * (double) (VAR_1 / 2))
            {
                VAR_10 = VAR_10 * 10.0;
                VAR_3[VAR_6][VAR_7] = -FUNC_0(VAR_10 * (VAR_2 / (double)(VAR_1 * 4))) * 100.0;
            }
            else
                VAR_3[VAR_6][VAR_7] = 0.0;

            VAR_4[VAR_6][VAR_7] = 0.0;
            VAR_5[VAR_6][VAR_7] = 0.0;
        }
    }
}
