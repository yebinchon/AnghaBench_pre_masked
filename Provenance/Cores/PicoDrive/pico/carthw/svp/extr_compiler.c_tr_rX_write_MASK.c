
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int* r; } ;


 int FUNC_0 (int,int,int,int) ;
 int FUNC_1 (int,int,int,int) ;
 int FUNC_2 (int,int,int,int) ;
 int FUNC_3 (int,int,int,int) ;
 int FUNC_4 (int ,int) ;
 int* VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_5 (int) ;
 int FUNC_6 (int,int,int ,int) ;

__attribute__((used)) static void FUNC_7(int VAR_3)
{
 if ((VAR_3&3) == 3)
 {
  int VAR_4 = (VAR_3>>2) & 3;
  FUNC_5((VAR_3 & 0x100) + VAR_4);
 }
 else
 {
  int VAR_5 = (VAR_3&3) | ((VAR_3>>6)&4);
  if (VAR_1 & (1 << (VAR_5 + 8))) {
   FUNC_5((VAR_3&0x100) | VAR_2.r[VAR_5]);
  } else {
   int VAR_6 = (VAR_5 < 4) ? 8 : 9;
   int VAR_7 = ((4 - (VAR_5&3))*8) & 0x1f;
   FUNC_2(1,VAR_6,VAR_7/2,0xff);
   if (VAR_5 >= 4)
    FUNC_3(1,1,((VAR_7-8)&0x1f)/2,1);
   if (VAR_5&3) FUNC_1(1,7,1, (VAR_5&3)*8-1);
   else FUNC_0(1,7,1,1);
   FUNC_4(0,1);
   VAR_0[1] = -1;
  }
  FUNC_6(VAR_5, (VAR_3>>2) & 3, 0, 1);
 }
}
