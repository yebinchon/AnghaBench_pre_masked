
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

uint32_t FUNC_0(void)
{
    uint32_t VAR_4 = VAR_1;
    VAR_4 ^= VAR_4 << 11;
    VAR_4 ^= VAR_4 >> 8;
    VAR_1 = VAR_2; VAR_2 = VAR_3; VAR_3 = VAR_0;
    VAR_0 ^= VAR_0 >> 19;
    VAR_0 ^= VAR_4;
    return VAR_0;
}
