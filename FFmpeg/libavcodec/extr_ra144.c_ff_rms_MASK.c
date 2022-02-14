
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (unsigned int) ;

unsigned int FUNC_1(const int *VAR_1)
{
    int VAR_2;
    unsigned int VAR_3 = 0x10000;
    int VAR_4 = VAR_0;

    for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
        VAR_3 = (((0x1000000 - VAR_1[VAR_2]*VAR_1[VAR_2]) >> 12) * VAR_3) >> 12;

        if (VAR_3 == 0)
            return 0;

        while (VAR_3 <= 0x3fff) {
            VAR_4++;
            VAR_3 <<= 2;
        }
    }

    return FUNC_0(VAR_3) >> VAR_4;
}
