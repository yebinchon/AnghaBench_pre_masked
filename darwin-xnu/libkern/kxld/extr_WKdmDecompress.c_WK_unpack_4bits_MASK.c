
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WK_word ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;

__attribute__((used)) static WK_word*
FUNC_1(WK_word *VAR_1,
                WK_word *VAR_2,
                WK_word *VAR_3) {

  WK_word *VAR_4 = VAR_1;
  WK_word *VAR_5 = VAR_3;
  WK_word VAR_6 = VAR_0;






  while (VAR_4 < VAR_2) {
    WK_word VAR_7 = VAR_4[0];
    FUNC_0("Unpacked dictionary indices word: %.8x\n", VAR_7);
    VAR_5[0] = VAR_7 & VAR_6;
    VAR_5[1] = (VAR_7 >> 4) & VAR_6;

    VAR_5 += 2;
    VAR_4++;
  }

  return VAR_5;

}
