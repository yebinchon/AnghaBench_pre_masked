
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef int uint16_t ;


 scalar_t__* VAR_0 ;
 scalar_t__* VAR_1 ;
 int* VAR_2 ;

void FUNC_0(uint16_t* VAR_3, float* VAR_4, size_t VAR_5)
{
 int VAR_6;
 uint32_t* VAR_7 = (uint32_t*)VAR_4;
 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++)
  VAR_7[VAR_6] = VAR_1[VAR_2[VAR_3[VAR_6] >> 10] + (VAR_3[VAR_6] & 0x3ff)] + VAR_0[VAR_3[VAR_6] >> 10];
}
