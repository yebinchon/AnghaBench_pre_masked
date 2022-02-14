
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int SRes ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static SRes FUNC_1(uint8_t VAR_3, uint8_t *VAR_4)
{
   uint32_t VAR_5;
   if (VAR_3 > 40)
      return VAR_1;
   VAR_5 = (VAR_3 == 40) ? 0xFFFFFFFF : FUNC_0(VAR_3);
   VAR_4[0] = (uint8_t)VAR_0;
   VAR_4[1] = (uint8_t)(VAR_5);
   VAR_4[2] = (uint8_t)(VAR_5 >> 8);
   VAR_4[3] = (uint8_t)(VAR_5 >> 16);
   VAR_4[4] = (uint8_t)(VAR_5 >> 24);
   return VAR_2;
}
