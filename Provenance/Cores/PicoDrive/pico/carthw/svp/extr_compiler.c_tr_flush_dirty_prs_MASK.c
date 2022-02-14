
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int* r; } ;


 int FUNC_0 (int,int,int,int) ;
 int FUNC_1 (int,int,int,scalar_t__) ;
 int VAR_0 ;
 int FUNC_2 (int,int) ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static void FUNC_3(void)
{
 int VAR_2, VAR_3 = 0, VAR_4;
 int VAR_5 = VAR_0 >> 8;
 if ((VAR_5&7) == 7) {
  FUNC_2(8, VAR_1.r[0]|(VAR_1.r[1]<<8)|(VAR_1.r[2]<<16));
  VAR_5 &= ~7;
 }
 if ((VAR_5&0x70) == 0x70) {
  FUNC_2(9, VAR_1.r[4]|(VAR_1.r[5]<<8)|(VAR_1.r[6]<<16));
  VAR_5 &= ~0x70;
 }

 for (VAR_2 = 0; VAR_5 && VAR_2 < 8; VAR_2++, VAR_5 >>= 1)
 {
  if (!(VAR_5&1)) continue;
  switch (VAR_2&3) {
   case 0: VAR_3 = 0; break;
   case 1: VAR_3 = 24/2; break;
   case 2: VAR_3 = 16/2; break;
  }
  VAR_4 = (VAR_2 < 4) ? 8 : 9;
  FUNC_0(VAR_4,VAR_4,VAR_3,0xff);
  if (VAR_1.r[VAR_2] != 0)
   FUNC_1(VAR_4,VAR_4,VAR_3,VAR_1.r[VAR_2]);
 }
 VAR_0 &= ~0xff00;
}
