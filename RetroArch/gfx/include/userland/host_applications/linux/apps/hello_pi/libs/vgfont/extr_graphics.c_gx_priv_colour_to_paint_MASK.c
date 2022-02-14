
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int VGfloat ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

void FUNC_0(uint32_t VAR_4, VGfloat *VAR_5)
{

   VAR_5[0] = ((VGfloat)((VAR_4 & VAR_3) >> 16 )) / 0xff;
   VAR_5[1] = ((VGfloat)((VAR_4 & VAR_2) >> 8 )) / 0xff;
   VAR_5[2] = ((VGfloat)((VAR_4 & VAR_1) >> 0 )) / 0xff;
   VAR_5[3] = ((VGfloat)((VAR_4 & VAR_0) >> 24)) / 0xff;
}
