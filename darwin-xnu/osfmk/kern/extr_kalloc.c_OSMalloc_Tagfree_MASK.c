
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int queue_entry_t ;
struct TYPE_3__ {int OSMT_refcnt; int OSMT_state; int OSMT_name; } ;
typedef TYPE_1__* OSMallocTag ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int *,int) ;
 int FUNC_3 (int,int,int *) ;
 int FUNC_4 (void*,int) ;
 int FUNC_5 (char*,int ,int ) ;
 int FUNC_6 (int ) ;

void
FUNC_7(
  OSMallocTag VAR_2)
{
 if (!FUNC_3(VAR_1, VAR_1|VAR_0, &VAR_2->OSMT_state))
  FUNC_5("OSMalloc_Tagfree():'%s' has bad state 0x%08X \n", VAR_2->OSMT_name, VAR_2->OSMT_state);

 if (FUNC_2(&VAR_2->OSMT_refcnt, 1) == 0) {
  FUNC_0();
  (void)FUNC_6((queue_entry_t)VAR_2);
  FUNC_1();
  FUNC_4((void*)VAR_2, sizeof(*VAR_2));
 }
}
