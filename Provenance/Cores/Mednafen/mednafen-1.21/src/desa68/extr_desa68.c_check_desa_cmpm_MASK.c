
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int w; char reg0; int reg9; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (char) ;

__attribute__((used)) static int FUNC_1()
{
  if((VAR_0.w&0470)!=0410 )
    return 0;
  FUNC_0('CMPM');
  FUNC_0(' (A0' + VAR_0.reg0);
  FUNC_0(')+,(');
  FUNC_0('A0)+' + (VAR_0.reg9<<16));
  return 1;
}
