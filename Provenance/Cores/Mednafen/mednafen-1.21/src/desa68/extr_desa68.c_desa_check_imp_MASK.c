
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int w; int adrmode0; unsigned int szchar; int reg0; int mode3; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (char) ;
 int FUNC_2 (int ,int ,unsigned int) ;

__attribute__((used)) static int FUNC_3(unsigned int VAR_1, int VAR_2)
{
  if((VAR_0.w&0400) || !(VAR_2&(1<<VAR_0.adrmode0)))
    return 0;
  FUNC_0(VAR_1);
  FUNC_0(VAR_0.szchar);
  FUNC_1 (' ');
  FUNC_2(VAR_0.mode3, VAR_0.reg0, VAR_0.szchar);
  return 1;
}
