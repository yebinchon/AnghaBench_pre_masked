
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;
typedef int AVIOContext ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int) ;

void FUNC_2(AVIOContext *VAR_0, uint64_t VAR_1)
{
    int VAR_2 = FUNC_1(VAR_1);

    while (--VAR_2 > 0)
        FUNC_0(VAR_0, 128 | (uint8_t)(VAR_1 >> (7*VAR_2)));

    FUNC_0(VAR_0, VAR_1 & 127);
}
