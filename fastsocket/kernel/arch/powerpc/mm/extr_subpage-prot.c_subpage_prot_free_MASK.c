
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct subpage_prot_table {unsigned long maxaddr; int *** protptrs; int ** low_prot; } ;
typedef int pgd_t ;


 scalar_t__ VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (unsigned long) ;
 struct subpage_prot_table* FUNC_1 (int *) ;

void FUNC_2(pgd_t *VAR_2)
{
 struct subpage_prot_table *VAR_3 = FUNC_1(VAR_2);
 unsigned long VAR_4, VAR_5, VAR_6;
 u32 **VAR_7;

 for (VAR_4 = 0; VAR_4 < 4; ++VAR_4) {
  if (VAR_3->low_prot[VAR_4]) {
   FUNC_0((unsigned long)VAR_3->low_prot[VAR_4]);
   VAR_3->low_prot[VAR_4] = ((void*)0);
  }
 }
 VAR_6 = 0;
 for (VAR_4 = 0; VAR_4 < 2; ++VAR_4) {
  VAR_7 = VAR_3->protptrs[VAR_4];
  if (!VAR_7)
   continue;
  VAR_3->protptrs[VAR_4] = ((void*)0);
  for (VAR_5 = 0; VAR_5 < VAR_1 && VAR_6 < VAR_3->maxaddr;
       ++VAR_5, VAR_6 += VAR_0)
   if (VAR_7[VAR_5])
    FUNC_0((unsigned long)VAR_7[VAR_5]);
  FUNC_0((unsigned long)VAR_7);
 }
 VAR_3->maxaddr = 0;
}
