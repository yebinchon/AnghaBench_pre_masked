
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UBYTE ;


 scalar_t__ VAR_0 ;
 scalar_t__* VAR_1 ;
 int* VAR_2 ;
 int* VAR_3 ;

int FUNC_0(int VAR_4, UBYTE *VAR_5)
{
 UBYTE VAR_6;
 UBYTE VAR_7;
 int VAR_8;
 if (VAR_1[VAR_4] == VAR_0)
  return 0;

 VAR_6 = 1;
 VAR_7 = 1;
 VAR_8 = VAR_2[VAR_4];

 if (VAR_8 % 40 == 0) {

  VAR_6 = 40;
  VAR_8 /= 40;
  if (VAR_8 > 26 && VAR_8 % 2 == 0) {

   VAR_7 = 2;
   VAR_8 >>= 1;
   if (VAR_8 > 26 && VAR_8 % 2 == 0) {

    VAR_6 = 80;
    VAR_8 >>= 1;
   }
  }
 }

 VAR_5[0] = VAR_6;
 VAR_5[1] = 1;
 VAR_5[2] = (UBYTE) (VAR_8 >> 8);
 VAR_5[3] = (UBYTE) VAR_8;
 VAR_5[4] = (UBYTE) (VAR_7 - 1);

 VAR_5[5] = (VAR_3[VAR_4] == 128 && VAR_2[VAR_4] <= 720) ? 0 : 4;
 VAR_5[6] = (UBYTE) (VAR_3[VAR_4] >> 8);
 VAR_5[7] = (UBYTE) VAR_3[VAR_4];
 VAR_5[8] = 1;
 VAR_5[9] = 192;
 VAR_5[10] = 0;
 VAR_5[11] = 0;
 return 'C';
}
