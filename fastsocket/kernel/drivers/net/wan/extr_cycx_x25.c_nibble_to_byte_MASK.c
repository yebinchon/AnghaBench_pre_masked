
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;



__attribute__((used)) static void FUNC_0(u8 *VAR_0, u8 *VAR_1, u8 VAR_2, u8 VAR_3)
{
 if (VAR_3) {
  *VAR_1++ = '0' + (*VAR_0++ & 0x0F);
  --VAR_2;
 }

 while (VAR_2) {
  *VAR_1++ = '0' + (*VAR_0 >> 4);

  if (--VAR_2) {
   *VAR_1++ = '0' + (*VAR_0 & 0x0F);
   --VAR_2;
  } else break;

  ++VAR_0;
 }

 *VAR_1 = '\0';
}
