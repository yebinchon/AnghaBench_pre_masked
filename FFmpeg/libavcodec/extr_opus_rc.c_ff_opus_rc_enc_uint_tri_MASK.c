
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int OpusRangeCoder ;


 int FUNC_0 (int *,int,int,int,int ) ;

void FUNC_1(OpusRangeCoder *VAR_0, uint32_t VAR_1, int VAR_2)
{
    uint32_t VAR_3, VAR_4, VAR_5;

    VAR_5 = ((VAR_2>>1) + 1) * ((VAR_2>>1) + 1);

    if (VAR_1 <= VAR_2 >> 1) {
        VAR_4 = VAR_1 * (VAR_1 + 1) >> 1;
        VAR_3 = VAR_1 + 1;
    } else {
        VAR_4 = VAR_5 - ((VAR_2 + 1 - VAR_1) * (VAR_2 + 2 - VAR_1) >> 1);
        VAR_3 = VAR_2 + 1 - VAR_1;
    }

    FUNC_0(VAR_0, VAR_4, VAR_4 + VAR_3, VAR_5, 0);
}
