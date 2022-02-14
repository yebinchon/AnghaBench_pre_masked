
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char szchar; int w; int reg9; int reg0; int mode3; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (char) ;
 int FUNC_1 (char) ;
 int FUNC_2 (int ,int ,char) ;

__attribute__((used)) static void FUNC_3(int VAR_1)
{
  FUNC_0(VAR_1);
  FUNC_0(VAR_0.szchar);
  FUNC_1 (' ');

  if(VAR_0.w&0400)
    {
      FUNC_0('D0,' + (VAR_0.reg9<<8));
      FUNC_2(VAR_0.mode3, VAR_0.reg0, VAR_0.szchar);
    }


  else
    {
      FUNC_2(VAR_0.mode3, VAR_0.reg0, VAR_0.szchar);
      FUNC_0(',D0'+VAR_0.reg9);
    }
}
