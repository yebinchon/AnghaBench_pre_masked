
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int* r; } ;


 int FUNC_0 (int ,int ,int ,int) ;
 int FUNC_1 (int,int,int,int) ;
 int FUNC_2 (int,int,int,int) ;
 int FUNC_3 (int,int,int,int) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int,int,int) ;
 int FUNC_6 (int,int,int,int) ;
 int FUNC_7 (int ,int) ;
 int* VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;

__attribute__((used)) static void FUNC_10(int VAR_3)
{
 int VAR_4 = (VAR_3&3) | ((VAR_3>>6)&4);

 if ((VAR_4&3) == 3) {
  FUNC_8((VAR_3&0x100) | ((VAR_3>>2)&3));
 } else if (VAR_1 & (1 << (VAR_4+8))) {
  FUNC_8((VAR_3&0x100) | VAR_2.r[VAR_4]);
 } else {
  int VAR_5 = (VAR_4 < 4) ? 8 : 9;
  int VAR_6 = ((4 - (VAR_4&3))*8) & 0x1f;
  FUNC_3(1,VAR_5,VAR_6/2,0xff);
  if (VAR_4 >= 4)
   FUNC_6(1,1,((VAR_6-8)&0x1f)/2,1);
  if (VAR_4&3) FUNC_2(1,7,1, (VAR_4&3)*8-1);
  else FUNC_1(1,7,1,1);
  FUNC_4(0,1);
 }
 FUNC_5(2,7,0x48c);
 FUNC_1(2,2,0,1);
 FUNC_0(0,0,0,1);
 if ((VAR_4&3) == 3) {
  FUNC_9((VAR_3&0x100) | ((VAR_3>>2)&3));
 } else if (VAR_1 & (1 << (VAR_4+8))) {
  FUNC_9((VAR_3&0x100) | VAR_2.r[VAR_4]);
 } else {
  FUNC_7(0,1);
  VAR_0[1] = -1;
 }
 FUNC_4(0,2);
 VAR_0[0] = VAR_0[2] = -1;
}
