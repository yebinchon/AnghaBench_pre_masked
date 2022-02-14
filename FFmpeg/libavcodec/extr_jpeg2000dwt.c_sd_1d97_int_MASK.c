
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int*,int,int) ;

__attribute__((used)) static void FUNC_1(int *VAR_6, int VAR_7, int VAR_8)
{
    int VAR_9;

    if (VAR_8 <= VAR_7 + 1) {
        if (VAR_7 == 1)
            VAR_6[1] = (VAR_6[1] * VAR_5 + (1<<14)) >> 15;
        else
            VAR_6[0] = (VAR_6[0] * VAR_4 + (1<<15)) >> 16;
        return;
    }

    FUNC_0(VAR_6, VAR_7, VAR_8);
    VAR_7++; VAR_8++;

    for (VAR_9 = (VAR_7>>1) - 2; VAR_9 < (VAR_8>>1) + 1; VAR_9++)
        VAR_6[2 * VAR_9 + 1] -= (VAR_0 * (VAR_6[2 * VAR_9] + VAR_6[2 * VAR_9 + 2]) + (1 << 15)) >> 16;
    for (VAR_9 = (VAR_7>>1) - 1; VAR_9 < (VAR_8>>1) + 1; VAR_9++)
        VAR_6[2 * VAR_9] -= (VAR_1 * (VAR_6[2 * VAR_9 - 1] + VAR_6[2 * VAR_9 + 1]) + (1 << 15)) >> 16;
    for (VAR_9 = (VAR_7>>1) - 1; VAR_9 < (VAR_8>>1); VAR_9++)
        VAR_6[2 * VAR_9 + 1] += (VAR_3 * (VAR_6[2 * VAR_9] + VAR_6[2 * VAR_9 + 2]) + (1 << 15)) >> 16;
    for (VAR_9 = (VAR_7>>1); VAR_9 < (VAR_8>>1); VAR_9++)
        VAR_6[2 * VAR_9] += (VAR_2 * (VAR_6[2 * VAR_9 - 1] + VAR_6[2 * VAR_9 + 1]) + (1 << 15)) >> 16;
}
