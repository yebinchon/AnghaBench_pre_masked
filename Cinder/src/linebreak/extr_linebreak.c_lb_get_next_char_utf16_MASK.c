
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int utf32_t ;
typedef int utf16_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;

utf32_t FUNC_1(
  const utf16_t *VAR_1,
  size_t VAR_2,
  size_t *VAR_3)
{
 utf16_t VAR_4;

 FUNC_0(*VAR_3 <= VAR_2);
 if (*VAR_3 == VAR_2)
  return VAR_0;
 VAR_4 = VAR_1[(*VAR_3)++];

 if (VAR_4 < 0xD800 || VAR_4 > 0xDBFF)
 {
  return VAR_4;
 }
 if (*VAR_3 == VAR_2)
 {
  --(*VAR_3);
  return VAR_0;
 }
 if (VAR_1[*VAR_3] < 0xDC00 || VAR_1[*VAR_3] > 0xDFFF)
 {
  return VAR_4;
 }

 return (((utf32_t)VAR_4 & 0x3FF) << 10) + (VAR_1[(*VAR_3)++] & 0x3FF) + 0x10000;
}
