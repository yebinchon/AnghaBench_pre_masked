
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mode6; int reg9; int adrmode0; int w; int status; int branch; int szchar; int reg0; int mode3; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_0 (char) ;
 int FUNC_1 (char) ;
 int FUNC_2 (char,int) ;
 int FUNC_3 (int ,int ,char) ;

__attribute__((used)) static int FUNC_4(void)
{
  if (VAR_2.mode6 != 3) {
    return 0;
  }

  switch(VAR_2.reg9)
    {

    case 0:
      {
 int VAR_3 = 00775;
 if(!(VAR_3&(1<<VAR_2.adrmode0)))
   break;
 FUNC_0('MOVE');
 FUNC_0(' SR,');
 FUNC_3(VAR_2.mode3, VAR_2.reg0, 'W');
 return 1;
      }

    case 1:
      break;

    case 2:
      {
 int VAR_4 = 07775;
 if(!(VAR_4&(1<<VAR_2.adrmode0)))
   break;
 FUNC_0('MOVE');
 FUNC_1 (' ');
 FUNC_3(VAR_2.mode3, VAR_2.reg0, 'B');
 FUNC_0(',CCR');
 return 1;
      }

    case 3:
      {
 int VAR_5 = 07775;
 if(!(VAR_5&(1<<VAR_2.adrmode0)))
   break;
 FUNC_0('MOVE');
 FUNC_1 (' ');
 FUNC_3(VAR_2.mode3, VAR_2.reg0, 'W');
 FUNC_0(',SR');
 return 1;
      }

    case 4:
      break;

    case 5:
      {
 VAR_2.szchar = 0;
 if(FUNC_2('TAS', 00775)) {
   return 1;
 } else if(VAR_2.w == 0x4AFC) {
   FUNC_0('ILLE');
   FUNC_0('GAL');
   VAR_2.status = VAR_0 | VAR_1;
   VAR_2.branch = 0x10;
   return 1;
 }
      }
      break;

    case 6:
      break;

    case 7:
      break;
    }
  return 0;
}
