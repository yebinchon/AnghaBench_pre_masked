
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 unsigned char VAR_0 ;
 unsigned char* VAR_1 ;

__attribute__((used)) static void
FUNC_0(unsigned char VAR_2, unsigned char *VAR_3, short VAR_4)
{
 union {
  unsigned char *charptr;
  unsigned short *shortptr;
  uint32_t *longptr;
 } VAR_5;
 unsigned char *VAR_6;
 int VAR_7;

 VAR_5.charptr = VAR_3;
 VAR_6 = VAR_1 + (VAR_2 * VAR_0);

 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
  unsigned char VAR_8 = 1;
  do {
   switch (VAR_4) {
   case 8:
    *VAR_5.charptr++ = (*VAR_6 & VAR_8) ? 0xFF : 0;
    break;
   case 16:
    *VAR_5.shortptr++ = (*VAR_6 & VAR_8) ? 0xFFFF : 0;
    break;

   case 30:
   case 32:
    *VAR_5.longptr++ = (*VAR_6 & VAR_8) ? 0xFFFFFFFF : 0;
    break;
   }
   VAR_8 <<= 1;
  } while (VAR_8);
  VAR_6++;
 }
}
