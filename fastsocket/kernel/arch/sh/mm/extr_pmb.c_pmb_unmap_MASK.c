
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmb_entry {unsigned long vpn; struct pmb_entry* next; } ;


 int FUNC_0 (struct pmb_entry*) ;
 struct pmb_entry* VAR_0 ;
 scalar_t__ FUNC_1 (int) ;

void FUNC_2(unsigned long VAR_1)
{
 struct pmb_entry **VAR_2, *VAR_3;

 for (VAR_2 = &VAR_0; (VAR_3 = *VAR_2); VAR_2 = &VAR_3->next)
  if (VAR_3->vpn == VAR_1)
   break;

 if (FUNC_1(!VAR_3))
  return;

 FUNC_0(VAR_3);
}
