
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ const uint8_t ;
typedef int uint16_t ;



__attribute__((used)) static uint16_t FUNC_0(uint8_t *VAR_0, int VAR_1, const uint8_t *VAR_2, int VAR_3)
{
 int VAR_4, VAR_5;

 for (VAR_4 = 0; VAR_4 <= (VAR_1 - VAR_3); VAR_4++) {
  for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++)
   if (VAR_0[VAR_4 + VAR_5] != VAR_2[VAR_5])
    break;
  if (VAR_5 == VAR_3)
   return VAR_4;
 }

 return 0;
}
