
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned int*,int,int) ;

__attribute__((used)) static void FUNC_1(unsigned *VAR_0, int VAR_1, int VAR_2)
{
    int VAR_3;

    if (VAR_2 <= VAR_1 + 1) {
        if (VAR_1 == 1)
            VAR_0[1] = (int)VAR_0[1] >> 1;
        return;
    }

    FUNC_0(VAR_0, VAR_1, VAR_2);

    for (VAR_3 = (VAR_1 >> 1); VAR_3 < (VAR_2 >> 1) + 1; VAR_3++)
        VAR_0[2 * VAR_3] -= (int)(VAR_0[2 * VAR_3 - 1] + VAR_0[2 * VAR_3 + 1] + 2) >> 2;
    for (VAR_3 = (VAR_1 >> 1); VAR_3 < (VAR_2 >> 1); VAR_3++)
        VAR_0[2 * VAR_3 + 1] += (int)(VAR_0[2 * VAR_3] + VAR_0[2 * VAR_3 + 2]) >> 1;
}
