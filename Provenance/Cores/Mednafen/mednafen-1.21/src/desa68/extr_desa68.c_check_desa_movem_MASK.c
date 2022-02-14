
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int w; int adrmode0; int mode3; int reg0; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (char) ;
 int FUNC_1 (char) ;
 int FUNC_2 (int,int,int ) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 () ;

__attribute__((used)) static int FUNC_5()
{
  int VAR_2, VAR_3;
  int VAR_4, VAR_5, VAR_6;
  if((VAR_1.w&05600)!=04200)
    return 0;
  VAR_2 = !(VAR_1.w&02000) ? 00764 : 03754;
  if(!(VAR_2&(1<<VAR_1.adrmode0)))
    return 0;

  FUNC_0('MOVE');
  FUNC_0('M.');
  FUNC_1 (!(VAR_1.w&0100)?'W':'L');
  FUNC_1 (' ');

  VAR_6 = VAR_1.w;
  VAR_4 = VAR_1.mode3;
  VAR_5 = VAR_1.reg0;
  VAR_3 = FUNC_4();


  if(VAR_6&02000)
    {
      FUNC_2(VAR_4, VAR_5, 0);
      FUNC_1(',');
      FUNC_3(VAR_3,0);
    }

  else
    {
      FUNC_3(VAR_3, (VAR_4==VAR_0) ? 15 : 0);
      FUNC_1(',');
      FUNC_2(VAR_4, VAR_5, 0);
    }
  return 1;
}
