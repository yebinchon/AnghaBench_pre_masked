
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int OpusRangeCoder ;


 int FUNC_0 (int *,int,int,int,int ) ;

void FUNC_1(OpusRangeCoder *VAR_0, uint32_t VAR_1, int VAR_2)
{
    const uint32_t VAR_3 = VAR_1 <= VAR_2, VAR_4 = 2*VAR_3 + 1;
    VAR_2 = (VAR_2 + 1) << 1;
    VAR_1 = VAR_4*(VAR_1 + VAR_2) - 3*VAR_3*VAR_2;
    FUNC_0(VAR_0, VAR_1, VAR_1 + VAR_4, (VAR_2 << 1) - 1, 0);
}
