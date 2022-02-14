
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef scalar_t__ s32 ;


 unsigned char VAR_0 ;

__attribute__((used)) static void FUNC_0(u32 VAR_1, unsigned char *VAR_2, unsigned char *VAR_3,
      unsigned char *VAR_4)
{
 unsigned char VAR_5;
 unsigned char VAR_6;
 unsigned char VAR_7;
 u32 VAR_8;
 s32 VAR_9;
 s32 VAR_10 = 100000;

 *VAR_2 = *VAR_3 = *VAR_4 = 0;
 for (VAR_6 = 2; VAR_6 < 15; VAR_6++) {
  for (VAR_5 = 2; VAR_5; VAR_5++) {
   VAR_8 = VAR_0 * VAR_5 / VAR_6;
   if (VAR_8 >= 150000 && VAR_8 <= 300000) {
    for (VAR_7 = 0; VAR_7 < 5; VAR_7++, VAR_8 >>= 1) {
     VAR_9 = (VAR_1 > VAR_8) ? VAR_1 - VAR_8 : VAR_8 - VAR_1;
     if (VAR_9 < VAR_10) {
      VAR_10 = VAR_9;
      *VAR_2 = VAR_5;
      *VAR_3 = VAR_6;
      *VAR_4 = VAR_7;
     }
    }
   }
  }
 }
}
