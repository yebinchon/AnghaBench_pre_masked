
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocrdma_qp_hwq_info {int tail; int max_wqe_idx; } ;



__attribute__((used)) static void FUNC_0(struct ocrdma_qp_hwq_info *VAR_0)
{
 VAR_0->tail = (VAR_0->tail + 1) & VAR_0->max_wqe_idx;
}
