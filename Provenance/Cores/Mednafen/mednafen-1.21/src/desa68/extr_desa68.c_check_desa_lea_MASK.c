
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int w; int adrmode0; char reg9; int reg0; int mode3; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (char) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_2()
{
  int VAR_1 = 03744;
  if((VAR_0.w&0700) != 0700 || !(VAR_1&(1<<VAR_0.adrmode0)))
    return 0;
  FUNC_0('LEA ');
  FUNC_1(VAR_0.mode3, VAR_0.reg0, 0);
  FUNC_0(',A0'+VAR_0.reg9);
  return 1;
}
