
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int OSMT_state; int OSMT_refcnt; int OSMT_name; } ;
typedef TYPE_1__* OSMallocTag ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (char*,int ,int) ;

void
FUNC_2(
  OSMallocTag VAR_2)
{
 if (!((VAR_2->OSMT_state & VAR_1) == VAR_0))
  FUNC_1("OSMalloc_Tagref():'%s' has bad state 0x%08X\n", VAR_2->OSMT_name, VAR_2->OSMT_state);

 (void)FUNC_0(&VAR_2->OSMT_refcnt, 1);
}
