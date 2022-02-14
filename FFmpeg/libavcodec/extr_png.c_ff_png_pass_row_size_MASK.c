
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int* VAR_0 ;
 int* VAR_1 ;

int FUNC_0(int VAR_2, int VAR_3, int VAR_4)
{
    int VAR_5, VAR_6, VAR_7;

    VAR_6 = VAR_0[VAR_2];
    if (VAR_4 <= VAR_6)
        return 0;
    VAR_5 = VAR_1[VAR_2];
    VAR_7 = (VAR_4 - VAR_6 + (1 << VAR_5) - 1) >> VAR_5;
    return (VAR_7 * VAR_3 + 7) >> 3;
}
