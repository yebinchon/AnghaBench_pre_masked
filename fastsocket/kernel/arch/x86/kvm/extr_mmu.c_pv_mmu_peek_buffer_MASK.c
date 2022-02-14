
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_pv_mmu_op_buffer {unsigned int len; void* ptr; } ;



__attribute__((used)) static void *FUNC_0(struct kvm_pv_mmu_op_buffer *VAR_0,
    unsigned VAR_1)
{
 if (VAR_1 > VAR_0->len)
  return ((void*)0);
 return VAR_0->ptr;
}
