
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int (* dtih_func ) (uintptr_t,uintptr_t*,uintptr_t) ;struct TYPE_3__* dtih_next; } ;
typedef TYPE_1__ dtrace_invop_hdlr_t ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (uintptr_t,uintptr_t*,uintptr_t) ;

int
FUNC_1(uintptr_t VAR_1, uintptr_t *VAR_2, uintptr_t VAR_3)
{
 dtrace_invop_hdlr_t *VAR_4;
 int VAR_5;

 for (VAR_4 = VAR_0; VAR_4 != ((void*)0); VAR_4 = VAR_4->dtih_next) {
  if ((VAR_5 = VAR_4->dtih_func(VAR_1, VAR_2, VAR_3)) != 0)
   return (VAR_5);
 }

 return (0);
}
