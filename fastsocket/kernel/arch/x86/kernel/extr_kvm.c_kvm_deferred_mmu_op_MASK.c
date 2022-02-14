
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_para_state {int mmu_queue_len; int mmu_queue; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (void*,int) ;
 struct kvm_para_state* FUNC_1 () ;
 int FUNC_2 (int,void*,int) ;
 int FUNC_3 (struct kvm_para_state*) ;
 scalar_t__ FUNC_4 () ;

__attribute__((used)) static void FUNC_5(void *VAR_1, int VAR_2)
{
 struct kvm_para_state *VAR_3 = FUNC_1();

 if (FUNC_4() != VAR_0) {
  FUNC_0(VAR_1, VAR_2);
  return;
 }
 if (VAR_3->mmu_queue_len + VAR_2 > sizeof VAR_3->mmu_queue)
  FUNC_3(VAR_3);
 FUNC_2(VAR_3->mmu_queue + VAR_3->mmu_queue_len, VAR_1, VAR_2);
 VAR_3->mmu_queue_len += VAR_2;
}
