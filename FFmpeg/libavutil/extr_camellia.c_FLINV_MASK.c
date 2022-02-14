
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;

__attribute__((used)) static uint64_t FUNC_1(uint64_t VAR_1, uint64_t VAR_2)
{
    uint32_t VAR_3, VAR_4, VAR_5, VAR_6;
    VAR_3 = VAR_1 >> 32;
    VAR_4 = VAR_1 & VAR_0;
    VAR_5 = VAR_2 >> 32;
    VAR_6 = VAR_2 & VAR_0;
    VAR_3 = VAR_3 ^ (VAR_4 | VAR_6);
    VAR_4 = VAR_4 ^ FUNC_0((VAR_3 & VAR_5), 1);
    return ((uint64_t)VAR_3 << 32) | (uint64_t)VAR_4;
}
