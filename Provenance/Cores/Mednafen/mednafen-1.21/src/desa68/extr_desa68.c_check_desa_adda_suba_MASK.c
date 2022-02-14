
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int opsz; char szchar; int w; int line; char reg9; int reg0; int mode3; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (char) ;
 int FUNC_1 (char) ;
 int FUNC_2 (int ,int ,char) ;

__attribute__((used)) static int FUNC_3(void)
{
  if(VAR_0.opsz!=3)
    return 0;

  VAR_0.szchar = (VAR_0.w&0400) ? '.L' : '.W';
  FUNC_0((VAR_0.line==0xD) ? 'ADDA' : 'SUBA');
  FUNC_0(VAR_0.szchar);
  FUNC_1 (' ');
  FUNC_2(VAR_0.mode3, VAR_0.reg0, VAR_0.szchar);
  FUNC_0(',A0'+VAR_0.reg9);
  return 1;
}
