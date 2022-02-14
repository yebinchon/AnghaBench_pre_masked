
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UBYTE ;
typedef int SWORD ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(UBYTE *VAR_1, SWORD *VAR_2, int VAR_3, int VAR_4)
{
 SWORD VAR_5, VAR_6;
 int VAR_7;

 while (VAR_3--) {
  VAR_5 = *VAR_2;
  VAR_5 = VAR_5*VAR_4/128;
  VAR_6 = ((int)(*VAR_1) - 0x80)*256;
  VAR_2++;
  VAR_7 = VAR_5 + VAR_6;
  if (VAR_7 > 32767) VAR_7 = 32767;
  if (VAR_7 < -32768) VAR_7 = -32768;
  *VAR_1++ = (UBYTE)((VAR_7/256) + 0x80);
  if (VAR_0 == 2) {
   VAR_1++;
  }
 }
}
