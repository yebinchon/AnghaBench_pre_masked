
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef scalar_t__ uint16_t ;


 scalar_t__* VAR_0 ;
 int* VAR_1 ;

void FUNC_0(float* VAR_2, uint16_t* VAR_3, size_t VAR_4)
{
 int VAR_5;
 uint32_t* VAR_6 = (uint32_t*)VAR_2;
 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++)
  VAR_3[VAR_5] = VAR_0[(VAR_6[VAR_5] >> 23) & 0x1ff] + ((VAR_6[VAR_5] & 0x007fffff) >> VAR_1[(VAR_6[VAR_5] >> 23) & 0x1ff]);
}
