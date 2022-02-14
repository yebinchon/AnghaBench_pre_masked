
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int queue_entry_t ;
struct TYPE_3__ {int OSMT_state; int OSMT_name; int OSMT_refcnt; } ;
typedef TYPE_1__* OSMallocTag ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int *,int) ;
 scalar_t__ FUNC_3 (int,int,int*) ;
 int FUNC_4 (void*,int) ;
 int FUNC_5 (char*,int ,...) ;
 int FUNC_6 (int ) ;

void
FUNC_7(
  OSMallocTag VAR_3)
{
 if (!((VAR_3->OSMT_state & VAR_2) == VAR_1))
  FUNC_5("OSMalloc_Tagref():'%s' has bad state 0x%08X\n", VAR_3->OSMT_name, VAR_3->OSMT_state);

 if (FUNC_2(&VAR_3->OSMT_refcnt, 1) == 0) {
  if (FUNC_3(VAR_1|VAR_0, VAR_1|VAR_0, &VAR_3->OSMT_state)) {
   FUNC_0();
   (void)FUNC_6((queue_entry_t)VAR_3);
   FUNC_1();
   FUNC_4((void*)VAR_3, sizeof(*VAR_3));
  } else
   FUNC_5("OSMalloc_Tagrele():'%s' has refcnt 0\n", VAR_3->OSMT_name);
 }
}
