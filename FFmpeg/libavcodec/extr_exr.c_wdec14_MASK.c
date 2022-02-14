
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef int int16_t ;



__attribute__((used)) static inline void FUNC_0(uint16_t VAR_0, uint16_t VAR_1, uint16_t *VAR_2, uint16_t *VAR_3)
{
    int16_t VAR_4 = VAR_0;
    int16_t VAR_5 = VAR_1;
    int VAR_6 = VAR_5;
    int VAR_7 = VAR_4 + (VAR_6 & 1) + (VAR_6 >> 1);
    int16_t VAR_8 = VAR_7;
    int16_t VAR_9 = VAR_7 - VAR_6;

    *VAR_2 = VAR_8;
    *VAR_3 = VAR_9;
}
