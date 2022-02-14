
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WK_word ;



__attribute__((used)) static WK_word*
FUNC_0(WK_word* VAR_0,
       WK_word* VAR_1,
       WK_word* VAR_2) {
   WK_word* VAR_3 = VAR_0;
   WK_word* VAR_4 = VAR_2;


   while (VAR_3 < VAR_1) {
     WK_word VAR_5 = VAR_3[0];
     VAR_5 |= (VAR_3[1] << 4);

     VAR_4[0] = VAR_5;
     VAR_4++;
     VAR_3 += 2;
   }

   return VAR_4;

}
