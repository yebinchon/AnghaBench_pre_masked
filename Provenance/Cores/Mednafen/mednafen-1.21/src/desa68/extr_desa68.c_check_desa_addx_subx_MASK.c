
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int w; int line; int szchar; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (char,int ) ;

__attribute__((used)) static int FUNC_1()
{
  if((VAR_0.w&0460)!=0400 )
    return 0;
  FUNC_0((VAR_0.line==0xD) ? 'ADDX' : 'SUBX', VAR_0.szchar);
  return 1;
}
