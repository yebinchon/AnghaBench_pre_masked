
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__* r; } ;


 int FUNC_0 (int,int,int,int) ;
 int FUNC_1 (int,int,int,scalar_t__) ;
 int VAR_0 ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static void FUNC_2(int VAR_2)
{
 int VAR_3 = 0, VAR_4;

 if (!(VAR_0 & (1 << (VAR_2+8)))) return;

 switch (VAR_2&3) {
  case 0: VAR_3 = 0; break;
  case 1: VAR_3 = 24/2; break;
  case 2: VAR_3 = 16/2; break;
 }
 VAR_4 = (VAR_2 < 4) ? 8 : 9;
 FUNC_0(VAR_4,VAR_4,VAR_3,0xff);
 if (VAR_1.r[VAR_2] != 0)
  FUNC_1(VAR_4,VAR_4,VAR_3,VAR_1.r[VAR_2]);
 VAR_0 &= ~(1 << (VAR_2+8));
}
