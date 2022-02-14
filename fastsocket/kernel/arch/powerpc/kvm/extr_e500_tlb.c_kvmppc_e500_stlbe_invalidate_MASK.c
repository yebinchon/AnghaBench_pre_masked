
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tlbe {int mas7; int mas3; int mas2; scalar_t__ mas1; } ;
struct kvmppc_vcpu_e500 {struct tlbe** shadow_tlb; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (struct kvmppc_vcpu_e500*,int,int) ;
 int FUNC_2 (int ,scalar_t__,int ,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct kvmppc_vcpu_e500 *VAR_0,
  int VAR_1, int VAR_2)
{
 struct tlbe *VAR_3 = &VAR_0->shadow_tlb[VAR_1][VAR_2];

 FUNC_1(VAR_0, VAR_1, VAR_2);
 VAR_3->mas1 = 0;
 FUNC_2(FUNC_0(VAR_1, VAR_2), VAR_3->mas1, VAR_3->mas2,
        VAR_3->mas3, VAR_3->mas7);
}
