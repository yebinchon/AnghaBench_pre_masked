
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;



u32 FUNC_0(u32 VAR_0)
{
    u32 VAR_1;

    int VAR_2, VAR_3, VAR_4, VAR_5, VAR_6;
    int VAR_7;
    int VAR_8;
    int VAR_9;

    VAR_6 = VAR_0 / 100000000;
    VAR_5 = (VAR_0 - VAR_6*100000000) /1000000;
    VAR_4 = (VAR_0 - VAR_6*100000000 - VAR_5*1000000) /10000;
    VAR_3 = (VAR_0 - VAR_6*100000000 - VAR_5*1000000 - VAR_4*10000) /100;
    VAR_2 = (VAR_0 - VAR_6*100000000 - VAR_5*1000000 - VAR_4*10000 - VAR_3*100);

    VAR_8 = VAR_6;
    VAR_9 = 0;
    VAR_7 = 0;
    while (((VAR_7+1)*(VAR_9+1)) <= VAR_8)
    {
     VAR_9++;
     VAR_7++;
    }

    VAR_1 = VAR_7 * 10000;
    VAR_8 = (VAR_8-(VAR_7*VAR_9))*100 + VAR_5;

    VAR_9 = 0;
    VAR_7 = 2 * VAR_7 * 10;
    while (((VAR_7+1)*(VAR_9+1)) <= VAR_8)
    {
        VAR_9++;
     VAR_7++;
    }

    VAR_1 = VAR_1 + VAR_9 * 1000;
    VAR_8 = (VAR_8 - VAR_7 * VAR_9) * 100 + VAR_4;
    VAR_7 = (VAR_7 + VAR_9) * 10;
    VAR_9 = 0;
    while (((VAR_7+1)*(VAR_9+1)) <= VAR_8)
    {
        VAR_9++;
     VAR_7++;
    }

    VAR_1 = VAR_1 + VAR_9 * 100;
    VAR_8 = (VAR_8 - VAR_7 * VAR_9) * 100 + VAR_3;
    VAR_7 = (VAR_7 + VAR_9) * 10;
    VAR_9 = 0;

    while (((VAR_7+1)*(VAR_9+1)) <= VAR_8)
    {
        VAR_9++;
     VAR_7++;
    }

    VAR_1 = VAR_1 + VAR_9 * 10;
    VAR_8 = (VAR_8 - VAR_7* VAR_9) * 100 + VAR_2;
    VAR_7 = (VAR_7 + VAR_9) * 10;
    VAR_9 = 0;

    while (((VAR_7+1)*(VAR_9+1)) <= VAR_8)
    {
        VAR_9++;
     VAR_7++;
    }

    VAR_1 = VAR_1 + VAR_9;

    return VAR_1;
}
