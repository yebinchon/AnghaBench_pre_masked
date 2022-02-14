
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*) ;

char *FUNC_1(int VAR_0, int VAR_1, char *VAR_2)
{
    if (VAR_2 == ((void*)0))
        return ((void*)0);

    if (VAR_0 != 0)
    {
        char VAR_3[34];
        int VAR_4;
        int VAR_5;
        int VAR_6;
        unsigned int VAR_7;

        VAR_5 = 32;
        VAR_3[33] = 0;

        if (VAR_1 == 10 && VAR_0 < 0)
        {
            VAR_4 = 1;
            VAR_7 = -VAR_0;
        }
        else
        {
            VAR_4 = 0;
            VAR_7 = (unsigned int)VAR_0;
        }

        while (VAR_7)
        {
            VAR_6 = VAR_7 % VAR_1;
            if (VAR_6 < 10)
                VAR_6 += '0';
            else
                VAR_6 += 'A' - 10;

            VAR_3[VAR_5] = VAR_6;
            VAR_7 /= VAR_1;
            VAR_5--;
        }

        if (VAR_4)
            VAR_3[VAR_5] = '-';
        else
            VAR_5++;

        FUNC_0(VAR_2, &VAR_3[VAR_5]);
    }
    else
    {
        VAR_2[0] = '0';
        VAR_2[1] = 0;
    }

    return VAR_2;
}
