
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 float VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (float*,int,int) ;

__attribute__((used)) static void FUNC_1(float *VAR_2, int VAR_3, int VAR_4)
{
    int VAR_5;

    if (VAR_4 <= VAR_3 + 1) {
        if (VAR_3 == 1)
            VAR_2[1] *= VAR_1 * 2;
        else
            VAR_2[0] *= VAR_0;
        return;
    }

    FUNC_0(VAR_2, VAR_3, VAR_4);
    VAR_3++; VAR_4++;

    for (VAR_5 = (VAR_3>>1) - 2; VAR_5 < (VAR_4>>1) + 1; VAR_5++)
        VAR_2[2*VAR_5+1] -= 1.586134 * (VAR_2[2*VAR_5] + VAR_2[2*VAR_5+2]);
    for (VAR_5 = (VAR_3>>1) - 1; VAR_5 < (VAR_4>>1) + 1; VAR_5++)
        VAR_2[2*VAR_5] -= 0.052980 * (VAR_2[2*VAR_5-1] + VAR_2[2*VAR_5+1]);
    for (VAR_5 = (VAR_3>>1) - 1; VAR_5 < (VAR_4>>1); VAR_5++)
        VAR_2[2*VAR_5+1] += 0.882911 * (VAR_2[2*VAR_5] + VAR_2[2*VAR_5+2]);
    for (VAR_5 = (VAR_3>>1); VAR_5 < (VAR_4>>1); VAR_5++)
        VAR_2[2*VAR_5] += 0.443506 * (VAR_2[2*VAR_5-1] + VAR_2[2*VAR_5+1]);
}
