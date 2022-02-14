
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tlbe {int dummy; } ;
struct kvmppc_vcpu_e500 {int* guest_tlb_size; struct tlbe** guest_tlb; } ;
typedef scalar_t__ gva_t ;


 scalar_t__ FUNC_0 (struct tlbe*) ;
 scalar_t__ FUNC_1 (struct tlbe*) ;
 unsigned int FUNC_2 (struct tlbe*) ;
 int FUNC_3 (struct tlbe*) ;
 int FUNC_4 (struct tlbe*) ;

__attribute__((used)) static int FUNC_5(struct kvmppc_vcpu_e500 *VAR_0,
  gva_t VAR_1, int VAR_2, unsigned int VAR_3, int VAR_4)
{
 int VAR_5;


 for (VAR_5 = 0; VAR_5 < VAR_0->guest_tlb_size[VAR_2]; VAR_5++) {
  struct tlbe *VAR_6 = &VAR_0->guest_tlb[VAR_2][VAR_5];
  unsigned int VAR_7;

  if (VAR_1 < FUNC_0(VAR_6))
   continue;

  if (VAR_1 > FUNC_1(VAR_6))
   continue;

  VAR_7 = FUNC_2(VAR_6);
  if (VAR_7 && (VAR_7 != VAR_3))
   continue;

  if (!FUNC_4(VAR_6))
   continue;

  if (FUNC_3(VAR_6) != VAR_4 && VAR_4 != -1)
   continue;

  return VAR_5;
 }

 return -1;
}
