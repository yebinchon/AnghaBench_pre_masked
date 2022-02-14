
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 float VAR_0 ;
 float VAR_1 ;
 float VAR_2 ;
 float VAR_3 ;
 int VAR_4 ;
 float VAR_5 ;
 int FUNC_0 (float*,int,int) ;

__attribute__((used)) static void FUNC_1(float *VAR_6, int VAR_7, int VAR_8)
{
    int VAR_9;

    if (VAR_8 <= VAR_7 + 1) {
        if (VAR_7 == 1)
            VAR_6[1] *= VAR_4/2;
        else
            VAR_6[0] *= VAR_5;
        return;
    }

    FUNC_0(VAR_6, VAR_7, VAR_8);

    for (VAR_9 = (VAR_7 >> 1) - 1; VAR_9 < (VAR_8 >> 1) + 2; VAR_9++)
        VAR_6[2 * VAR_9] -= VAR_2 * (VAR_6[2 * VAR_9 - 1] + VAR_6[2 * VAR_9 + 1]);

    for (VAR_9 = (VAR_7 >> 1) - 1; VAR_9 < (VAR_8 >> 1) + 1; VAR_9++)
        VAR_6[2 * VAR_9 + 1] -= VAR_3 * (VAR_6[2 * VAR_9] + VAR_6[2 * VAR_9 + 2]);

    for (VAR_9 = (VAR_7 >> 1); VAR_9 < (VAR_8 >> 1) + 1; VAR_9++)
        VAR_6[2 * VAR_9] += VAR_1 * (VAR_6[2 * VAR_9 - 1] + VAR_6[2 * VAR_9 + 1]);

    for (VAR_9 = (VAR_7 >> 1); VAR_9 < (VAR_8 >> 1); VAR_9++)
        VAR_6[2 * VAR_9 + 1] += VAR_0 * (VAR_6[2 * VAR_9] + VAR_6[2 * VAR_9 + 2]);
}
