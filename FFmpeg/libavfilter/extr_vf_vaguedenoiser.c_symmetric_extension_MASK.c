
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;

__attribute__((used)) static void FUNC_0(float *VAR_1, const int VAR_2, const int VAR_3, const int VAR_4)
{
    int VAR_5 = VAR_0;
    int VAR_6 = VAR_0 - 1 + VAR_2;
    const int VAR_7 = VAR_6;
    int VAR_8, VAR_9, VAR_10;

    if (VAR_3 == 2)
        VAR_1[--VAR_5] = VAR_1[VAR_0];
    if (VAR_4 == 2)
        VAR_1[++VAR_6] = VAR_1[VAR_7];


    VAR_9 = VAR_5;
    for (VAR_8 = 0; VAR_8 < VAR_9; VAR_8++)
        VAR_1[--VAR_5] = VAR_1[VAR_0 + 1 + VAR_8];

    VAR_10 = VAR_0 + VAR_0 - 1 + VAR_2;


    VAR_9 = VAR_10 - VAR_6;
    for (VAR_8 = 0; VAR_8 < VAR_9; VAR_8++)
        VAR_1[++VAR_6] = VAR_1[VAR_7 - 1 - VAR_8];
}
