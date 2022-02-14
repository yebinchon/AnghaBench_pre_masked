
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmb_entry {struct pmb_entry* next; } ;


 struct pmb_entry* VAR_0 ;

__attribute__((used)) static inline void FUNC_0(struct pmb_entry *VAR_1)
{
 struct pmb_entry **VAR_2, *VAR_3;

 for (VAR_2 = &VAR_0; (VAR_3 = *VAR_2); VAR_2 = &VAR_3->next)
  if (VAR_3 == VAR_1) {
   *VAR_2 = VAR_3->next;
   return;
  }
}
