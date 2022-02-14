
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,char*) ;

uint64_t FUNC_1(uint64_t VAR_1)
{
    uint64_t VAR_2, VAR_3, VAR_4;
    uint32_t VAR_5;


    VAR_4 = VAR_1 / 1000000;
    VAR_5 = VAR_1 % 1000000;


    VAR_3 = VAR_5 * 0xFFFFFFFFULL;
    VAR_3 /= 1000000;

    if (VAR_4 > 0xFFFFFFFFULL)
        FUNC_0(((void*)0), VAR_0, "NTP time format roll over detected\n");

    VAR_2 = VAR_4 << 32;
    VAR_2 |= VAR_3;

    return VAR_2;
}
