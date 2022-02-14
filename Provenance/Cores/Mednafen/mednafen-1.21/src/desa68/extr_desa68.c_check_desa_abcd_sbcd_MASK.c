
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int w; int line; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (char,int ) ;

__attribute__((used)) static int FUNC_1(void)
{
  if((VAR_0.w&0x1f0)!=0x100)
    return 0;
  FUNC_0((VAR_0.line==0xC) ? 'ABCD' : 'SBCD', 0) ;
  return 1;
}
