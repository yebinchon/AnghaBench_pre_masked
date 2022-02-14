
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;
typedef int u8 ;
typedef int u64 ;


 int FUNC_0 (int) ;
 int FUNC_1 (int*) ;

__attribute__((used)) static void FUNC_2(u8 *VAR_0)
{
 u64 *VAR_1, VAR_2;
 uint VAR_3, VAR_4;

 for (VAR_4 = 0; VAR_4 < 32; ++VAR_4) {

  if (VAR_4 & 0x3)
   VAR_0[(VAR_4 >> 3) + 3] = VAR_0[(VAR_4 >> 2) & 0x3];

  switch (VAR_4 & 0x3) {
  case 0x3:
   VAR_0[2] += VAR_0[3] * 4 + VAR_0[4] + VAR_0[5];
   VAR_0[4] += VAR_0[(VAR_4 & 0x1) * 2] * 9 + 9;
   break;
  case 0x1:
   VAR_0[0] *= 8;
   VAR_0[0] += 7*VAR_4 + 4;
   VAR_0[6] += VAR_0[3] * 3;
   break;
  case 0x0:
   VAR_0[3 - (VAR_4 >> 3)] = VAR_0[VAR_4 >> 2];
   VAR_0[5] += VAR_0[6] * 3;
   for (VAR_3 = 0; VAR_3 < 3; VAR_3++)
    VAR_0[3] *= VAR_0[3] + 1;
   break;
  case 0x2:
   for (VAR_3 = 0; VAR_3 < 3; VAR_3++)
    VAR_0[1] *= VAR_0[6] + 1;
   for (VAR_3 = 0; VAR_3 < 3; VAR_3++) {
    VAR_1 = (u64 *)VAR_0;
    VAR_2 = FUNC_1(VAR_1);
    VAR_2 <<= VAR_0[7] & 0x0f;
    *VAR_1 += FUNC_0(VAR_2);
   }
   break;
  }
 }
}
