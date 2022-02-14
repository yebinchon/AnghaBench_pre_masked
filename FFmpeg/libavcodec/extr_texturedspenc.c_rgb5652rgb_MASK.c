
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;


 int * VAR_0 ;
 int * VAR_1 ;

__attribute__((used)) static inline void FUNC_0(uint8_t *VAR_2, uint16_t VAR_3)
{
    int VAR_4 = (VAR_3 & 0xf800) >> 11;
    int VAR_5 = (VAR_3 & 0x07e0) >> 5;
    int VAR_6 = (VAR_3 & 0x001f) >> 0;

    VAR_2[0] = VAR_0[VAR_4];
    VAR_2[1] = VAR_1[VAR_5];
    VAR_2[2] = VAR_0[VAR_6];
    VAR_2[3] = 0;
}
