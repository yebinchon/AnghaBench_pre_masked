
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_para_state {scalar_t__ mmu_queue_len; int mmu_queue; } ;


 int FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct kvm_para_state *VAR_0)
{
 if (VAR_0->mmu_queue_len) {
  FUNC_0(VAR_0->mmu_queue, VAR_0->mmu_queue_len);
  VAR_0->mmu_queue_len = 0;
 }
}
