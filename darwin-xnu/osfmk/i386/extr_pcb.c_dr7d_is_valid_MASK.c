
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;

__attribute__((used)) static boolean_t
FUNC_1(uint32_t *VAR_3)
{
 int VAR_4;
 uint32_t VAR_5, VAR_6;





 if (!(FUNC_0() & VAR_0))
  for (VAR_4 = 0, VAR_5 = 0x3<<16, VAR_6 = 0x2<<16; VAR_4 < 4;
    VAR_4++, VAR_5 <<= 4, VAR_6 <<= 4)
   if ((*VAR_3 & VAR_5) == VAR_6)
    return (VAR_1);






 for (VAR_4 = 0; VAR_4 < 4; VAR_4++)
  if (((((*VAR_3 >> (16 + VAR_4*4))) & 0x3) == 0) &&
    ((((*VAR_3 >> (18 + VAR_4*4))) & 0x3) != 0))
   return (VAR_1);




 *VAR_3 |= 0x1 << 10;
 *VAR_3 &= ~(0x1 << 11);
 *VAR_3 &= ~(0x1 << 12);
 *VAR_3 &= ~(0x1 << 14);
 *VAR_3 &= ~(0x1 << 15);





 if (*VAR_3 & 0x2)
  return (VAR_1);

 if (*VAR_3 & (0x2<<2))
  return (VAR_1);

 if (*VAR_3 & (0x2<<4))
  return (VAR_1);

 if (*VAR_3 & (0x2<<6))
  return (VAR_1);

 return (VAR_2);
}
