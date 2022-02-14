
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int w; scalar_t__ opsz; int adrmode0; int line; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (char) ;

__attribute__((used)) static int FUNC_1(void)
{
  int VAR_2 = !(VAR_1.w&0400) ? 07777 : 00774;
  if(VAR_1.opsz==0)
    VAR_2 &= ~(1<<VAR_0);
  if(!(VAR_2 & (1<<VAR_1.adrmode0)))
    return 0;
  FUNC_0 (VAR_1.line==0xD ? 'ADD' : 'SUB');
  return 1;
}
