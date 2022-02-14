
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct tlbe {int dummy; } ;
struct kvmppc_vcpu_e500 {scalar_t__* guest_tlb_nv; } ;
typedef int gfn_t ;


 int FUNC_0 (struct kvmppc_vcpu_e500*,int ,int ,struct tlbe*,int,unsigned int) ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct kvmppc_vcpu_e500 *VAR_0,
  u64 VAR_1, gfn_t VAR_2, struct tlbe *VAR_3)
{
 unsigned int VAR_4;

 VAR_4 = VAR_0->guest_tlb_nv[1]++;

 if (FUNC_2(VAR_0->guest_tlb_nv[1] >= FUNC_1()))
  VAR_0->guest_tlb_nv[1] = 0;

 FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, 1, VAR_4);

 return VAR_4;
}
