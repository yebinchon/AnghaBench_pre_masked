
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tlbe {int dummy; } ;
struct page {int dummy; } ;
struct kvmppc_vcpu_e500 {struct page*** shadow_pages; struct tlbe** shadow_tlb; } ;


 scalar_t__ FUNC_0 (struct tlbe*) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;
 scalar_t__ FUNC_3 (struct tlbe*) ;

__attribute__((used)) static void FUNC_4(struct kvmppc_vcpu_e500 *VAR_0,
  int VAR_1, int VAR_2)
{
 struct tlbe *VAR_3 = &VAR_0->shadow_tlb[VAR_1][VAR_2];
 struct page *VAR_4 = VAR_0->shadow_pages[VAR_1][VAR_2];

 if (VAR_4) {
  VAR_0->shadow_pages[VAR_1][VAR_2] = ((void*)0);

  if (FUNC_0(VAR_3)) {
   if (FUNC_3(VAR_3))
    FUNC_2(VAR_4);
   else
    FUNC_1(VAR_4);
  }
 }
}
