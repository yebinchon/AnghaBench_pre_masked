
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int mask; scalar_t__ var; } ;
typedef TYPE_1__ menu_entry ;



__attribute__((used)) static void FUNC_0(menu_entry *VAR_0)
{

 if (VAR_0->mask & 0xffff0000)
  *(unsigned int *)VAR_0->var ^= VAR_0->mask;
 else if (VAR_0->mask & 0xff00)
  *(unsigned short *)VAR_0->var ^= VAR_0->mask;
 else
  *(unsigned char *)VAR_0->var ^= VAR_0->mask;
}
