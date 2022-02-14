
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocrdma_qp_hwq_info {void* va; int head; int entry_size; } ;



__attribute__((used)) static void *FUNC_0(struct ocrdma_qp_hwq_info *VAR_0)
{
 return VAR_0->va + (VAR_0->head * VAR_0->entry_size);
}
