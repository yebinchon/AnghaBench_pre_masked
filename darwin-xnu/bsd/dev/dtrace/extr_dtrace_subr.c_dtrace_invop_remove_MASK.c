
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* dtih_func ) (uintptr_t,uintptr_t*,uintptr_t) ;struct TYPE_4__* dtih_next; } ;
typedef TYPE_1__ dtrace_invop_hdlr_t ;


 int FUNC_0 (int) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (char*) ;

void
FUNC_3(int (*VAR_1)(uintptr_t, uintptr_t *, uintptr_t))
{
 dtrace_invop_hdlr_t *VAR_2 = VAR_0, *VAR_3 = ((void*)0);

 for (;;) {
  if (VAR_2 == ((void*)0))
   FUNC_2("attempt to remove non-existent invop handler");

  if (VAR_2->dtih_func == VAR_1)
   break;

  VAR_3 = VAR_2;
  VAR_2 = VAR_2->dtih_next;
 }

 if (VAR_3 == ((void*)0)) {
  FUNC_0(VAR_0 == VAR_2);
  VAR_0 = VAR_2->dtih_next;
 } else {
  FUNC_0(VAR_0 != VAR_2);
  VAR_3->dtih_next = VAR_2->dtih_next;
 }

 FUNC_1(VAR_2, sizeof (dtrace_invop_hdlr_t));
}
