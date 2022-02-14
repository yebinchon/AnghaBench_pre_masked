
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tlbe {scalar_t__ mas1; } ;
struct kvmppc_vcpu_e500 {struct tlbe** guest_tlb; } ;


 int FUNC_0 (struct tlbe*) ;
 int FUNC_1 (struct tlbe*) ;
 int FUNC_2 (struct tlbe*) ;
 int FUNC_3 (struct tlbe*) ;
 int FUNC_4 (struct kvmppc_vcpu_e500*,int,int) ;
 int FUNC_5 (struct kvmppc_vcpu_e500*,int ,int ,int ) ;
 scalar_t__ FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct kvmppc_vcpu_e500 *VAR_0,
  int VAR_1, int VAR_2)
{
 struct tlbe *VAR_3 = &VAR_0->guest_tlb[VAR_1][VAR_2];

 if (FUNC_6(FUNC_2(VAR_3)))
  return -1;

 if (VAR_1 == 1) {
  FUNC_5(VAR_0, FUNC_0(VAR_3),
    FUNC_1(VAR_3),
    FUNC_3(VAR_3));
 } else {
  FUNC_4(VAR_0, VAR_1, VAR_2);
 }

 VAR_3->mas1 = 0;

 return 0;
}
