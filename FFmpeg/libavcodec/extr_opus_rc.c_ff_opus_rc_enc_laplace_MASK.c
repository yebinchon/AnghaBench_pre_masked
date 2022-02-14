
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int OpusRangeCoder ;


 int FUNC_0 (int) ;
 void* FUNC_1 (int,int) ;
 int const FUNC_2 (int) ;
 int FUNC_3 (int *,int,int,int,int) ;

void FUNC_4(OpusRangeCoder *VAR_0, int *VAR_1, uint32_t VAR_2, int VAR_3)
{
    uint32_t VAR_4 = VAR_2;
    int VAR_5 = 1, VAR_6 = FUNC_0(*VAR_1), VAR_7 = *VAR_1 > 0;
    if (!VAR_6) {
        FUNC_3(VAR_0, 0, VAR_2, 1 << 15, 1);
        return;
    }
    VAR_2 = ((32768 - 32 - VAR_2)*(16384 - VAR_3)) >> 15;
    for (; VAR_5 < VAR_6 && VAR_2; VAR_5++) {
        VAR_4 += (VAR_2 << 1) + 2;
        VAR_2 = (VAR_2*VAR_3) >> 14;
    }
    if (VAR_2) {
        VAR_4 += (++VAR_2)*VAR_7;
    } else {
        const int VAR_8 = FUNC_1(VAR_6 - VAR_5, (((32768 - VAR_4) - !VAR_7) >> 1) - 1);
        VAR_4 += VAR_7 + (VAR_8 << 1);
        VAR_2 = FUNC_1(1, 32768 - VAR_4);
        *VAR_1 = FUNC_2(*VAR_1)*(VAR_8 + VAR_5);
    }
    FUNC_3(VAR_0, VAR_4, VAR_4 + VAR_2, 1 << 15, 1);
}
