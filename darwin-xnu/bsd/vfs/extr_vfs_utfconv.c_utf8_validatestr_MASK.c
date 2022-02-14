
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
typedef int u_int32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 unsigned int VAR_7 ;
 size_t* VAR_8 ;

int
FUNC_0(const u_int8_t* VAR_9, size_t VAR_10)
{
 unsigned int VAR_11;
 u_int32_t VAR_12;
 unsigned int VAR_13;
 size_t VAR_14;

 while (VAR_10-- > 0 && (VAR_11 = *VAR_9++) != '\0') {
  if (VAR_11 < 0x80)
   continue;

  VAR_14 = VAR_8[VAR_11 >> 3];

  if (VAR_10 < VAR_14)
   goto invalid;
  VAR_10 -= VAR_14;

  switch (VAR_14) {
  case 1:
   VAR_12 = VAR_11; VAR_12 <<= 6;
   VAR_11 = *VAR_9++;
   if ((VAR_11 >> 6) != 2)
    goto invalid;
   VAR_12 += VAR_11;
   VAR_12 -= 0x00003080UL;
   if (VAR_12 < 0x0080)
    goto invalid;
   break;
  case 2:
   VAR_12 = VAR_11; VAR_12 <<= 6;
   VAR_11 = *VAR_9++;
   if ((VAR_11 >> 6) != 2)
    goto invalid;
   VAR_12 += VAR_11; VAR_12 <<= 6;
   VAR_11 = *VAR_9++;
   if ((VAR_11 >> 6) != 2)
    goto invalid;
   VAR_12 += VAR_11;
   VAR_12 -= 0x000E2080UL;
   if (VAR_12 < 0x0800)
    goto invalid;
   if (VAR_12 >= 0xD800) {
    if (VAR_12 <= 0xDFFF)
     goto invalid;
    if (VAR_12 == 0xFFFE || VAR_12 == 0xFFFF)
     goto invalid;
   }
   break;
  case 3:
   VAR_12 = VAR_11; VAR_12 <<= 6;
   VAR_11 = *VAR_9++;
   if ((VAR_11 >> 6) != 2)
    goto invalid;
   VAR_12 += VAR_11; VAR_12 <<= 6;
   VAR_11 = *VAR_9++;
   if ((VAR_11 >> 6) != 2)
    goto invalid;
   VAR_12 += VAR_11; VAR_12 <<= 6;
   VAR_11 = *VAR_9++;
   if ((VAR_11 >> 6) != 2)
    goto invalid;
   VAR_12 += VAR_11;
   VAR_12 -= 0x03C82080UL + VAR_1;
   VAR_13 = (VAR_12 >> VAR_3) + VAR_4;
   if (VAR_13 < VAR_4 || VAR_13 > VAR_5)
    goto invalid;
   VAR_13 = (VAR_12 & VAR_2) + VAR_6;
   if (VAR_13 < VAR_6 || VAR_13 > VAR_7)
    goto invalid;
   break;
  default:
   goto invalid;
  }

 }
 return (0);
invalid:
 return (VAR_0);
}
