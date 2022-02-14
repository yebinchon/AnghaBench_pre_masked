
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef char u16 ;
struct TYPE_2__ {int opsz; int reg9; int adrmode0; int w; char reg0; char szchar; int mode3; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (char) ;
 int FUNC_1 (char) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,char,int ) ;

__attribute__((used)) static void FUNC_4(void)
{
  static u16 VAR_1[4] = { 'AS', 'LS', 'RO', 'RO' };


  if(VAR_0.opsz==3)
    {
      const int VAR_2 = 00774;
      int VAR_3 = VAR_0.reg9;
      if (!(VAR_2 & (1<<VAR_0.adrmode0)) || (VAR_3&4)) {
 FUNC_2();
 return;
      }
      FUNC_0(VAR_1[VAR_3]);
      FUNC_1 ((VAR_0.w&0400) ? 'L' :'R');
      if(VAR_3==2) FUNC_1('X');
      FUNC_1 (' ');
      FUNC_3(VAR_0.mode3, VAR_0.reg0, 0);
    }


  else
    {
      int VAR_4 = (VAR_0.w>>3)&3;
      FUNC_0 (VAR_1[VAR_4]);
      FUNC_1 ((VAR_0.w&0400) ? 'L' :'R');
      if(VAR_4==2) FUNC_1('X');
      FUNC_0(VAR_0.szchar);

      if(VAR_0.w&(1<<5))
 FUNC_0(' D0'+VAR_0.reg9);

      else
 FUNC_0(' #1'+((VAR_0.reg9-1)&7));
      FUNC_0(',D0'+VAR_0.reg0);
    }
}
