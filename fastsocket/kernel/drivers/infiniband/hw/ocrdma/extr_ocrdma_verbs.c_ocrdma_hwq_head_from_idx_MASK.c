
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ocrdma_qp_hwq_info {void* va; int entry_size; } ;



__attribute__((used)) static void *FUNC_0(struct ocrdma_qp_hwq_info *VAR_0,
          u32 VAR_1)
{
 return VAR_0->va + (VAR_1 * VAR_0->entry_size);
}
