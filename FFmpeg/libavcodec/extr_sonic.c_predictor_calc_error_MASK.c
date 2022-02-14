
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ) ;

__attribute__((used)) static int FUNC_1(int *VAR_2, int *VAR_3, int VAR_4, int VAR_5)
{
    int VAR_6, VAR_7 = VAR_5 - FUNC_0(VAR_2[VAR_4-1] * VAR_3[VAR_4-1], VAR_0);


    int *VAR_8 = &(VAR_2[VAR_4-2]),
        *VAR_9 = &(VAR_3[VAR_4-2]);
    for (VAR_6 = VAR_4-2; VAR_6 >= 0; VAR_6--, VAR_8--, VAR_9--)
    {
        int VAR_10 = *VAR_8, VAR_11 = *VAR_9;
        VAR_7 -= FUNC_0(VAR_10 * VAR_11, VAR_0);
        VAR_9[1] = VAR_11 + FUNC_0(VAR_10 * VAR_7, VAR_0);
    }
    if (VAR_7 > (VAR_1<<16)) VAR_7 = (VAR_1<<16);
    if (VAR_7 < -(VAR_1<<16)) VAR_7 = -(VAR_1<<16);

    VAR_3[0] = VAR_7;

    return VAR_7;
}
