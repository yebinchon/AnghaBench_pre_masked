
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvmppc_vcpu_e500 {scalar_t__* guest_tlb_nv; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static inline unsigned int FUNC_1(
  struct kvmppc_vcpu_e500 *VAR_1)
{
 unsigned int VAR_2;

 VAR_2 = VAR_1->guest_tlb_nv[0]++;
 if (FUNC_0(VAR_1->guest_tlb_nv[0] >= VAR_0))
  VAR_1->guest_tlb_nv[0] = 0;

 return VAR_2;
}
