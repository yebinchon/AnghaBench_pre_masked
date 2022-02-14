
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int utf8_t ;
typedef int utf32_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;

utf32_t FUNC_1(
  const utf8_t *VAR_1,
  size_t VAR_2,
  size_t *VAR_3)
{
 utf8_t VAR_4;
 utf32_t VAR_5;

 FUNC_0(*VAR_3 <= VAR_2);
 if (*VAR_3 == VAR_2)
  return VAR_0;
 VAR_4 = VAR_1[*VAR_3];

 if (VAR_4 < 0xC2 || VAR_4 > 0xF4)
 {
  *VAR_3 += 1;
  return VAR_4;
 }
 else if (VAR_4 < 0xE0)
 {
  if (*VAR_3 + 2 > VAR_2)
   return VAR_0;
  VAR_5 = ((VAR_4 & 0x1F) << 6) + (VAR_1[*VAR_3 + 1] & 0x3F);
  *VAR_3 += 2;
  return VAR_5;
 }
 else if (VAR_4 < 0xF0)
 {
  if (*VAR_3 + 3 > VAR_2)
   return VAR_0;
  VAR_5 = ((VAR_4 & 0x0F) << 12) +
     ((VAR_1[*VAR_3 + 1] & 0x3F) << 6) +
     ((VAR_1[*VAR_3 + 2] & 0x3F));
  *VAR_3 += 3;
  return VAR_5;
 }
 else
 {
  if (*VAR_3 + 4 > VAR_2)
   return VAR_0;
  VAR_5 = ((VAR_4 & 0x07) << 18) +
     ((VAR_1[*VAR_3 + 1] & 0x3F) << 12) +
     ((VAR_1[*VAR_3 + 2] & 0x3F) << 6) +
     ((VAR_1[*VAR_3 + 3] & 0x3F));
  *VAR_3 += 4;
  return VAR_5;
 }
}
