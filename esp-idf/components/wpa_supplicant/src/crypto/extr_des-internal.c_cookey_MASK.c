
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int dough ;


 int FUNC_0 (int*,int*,int) ;

__attribute__((used)) static void FUNC_1(const u32 *VAR_0, u32 *VAR_1)
{
 u32 *VAR_2;
 const u32 *VAR_3;
 u32 VAR_4[32];
 int VAR_5;

 VAR_2 = VAR_4;
 for (VAR_5 = 0; VAR_5 < 16; VAR_5++, VAR_0++) {
  VAR_3 = VAR_0++;
  *VAR_2 = (*VAR_3 & 0x00fc0000L) << 6;
  *VAR_2 |= (*VAR_3 & 0x00000fc0L) << 10;
  *VAR_2 |= (*VAR_0 & 0x00fc0000L) >> 10;
  *VAR_2++ |= (*VAR_0 & 0x00000fc0L) >> 6;
  *VAR_2 = (*VAR_3 & 0x0003f000L) << 12;
  *VAR_2 |= (*VAR_3 & 0x0000003fL) << 16;
  *VAR_2 |= (*VAR_0 & 0x0003f000L) >> 4;
  *VAR_2++ |= (*VAR_0 & 0x0000003fL);
 }

 FUNC_0(VAR_1, VAR_4, sizeof(VAR_4));
}
