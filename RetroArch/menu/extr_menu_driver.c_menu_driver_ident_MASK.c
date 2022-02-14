
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char const* ident; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 () ;

const char *FUNC_1(void)
{
   if (!FUNC_0())
      return ((void*)0);
   if (!VAR_0 || !VAR_0->ident)
      return ((void*)0);
  return VAR_0->ident;
}
