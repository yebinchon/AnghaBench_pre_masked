
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_pv_mmu_op_buffer {int processed; int len; int ptr; } ;


 void* FUNC_0 (struct kvm_pv_mmu_op_buffer*,unsigned int) ;

__attribute__((used)) static void *FUNC_1(struct kvm_pv_mmu_op_buffer *VAR_0,
    unsigned VAR_1)
{
 void *VAR_2;

 VAR_2 = FUNC_0(VAR_0, VAR_1);
 if (!VAR_2)
  return VAR_2;
 VAR_0->ptr += VAR_1;
 VAR_0->len -= VAR_1;
 VAR_0->processed += VAR_1;
 return VAR_2;
}
