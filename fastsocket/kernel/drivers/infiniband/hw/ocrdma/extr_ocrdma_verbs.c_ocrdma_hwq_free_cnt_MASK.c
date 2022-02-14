
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocrdma_qp_hwq_info {int head; int tail; int max_cnt; } ;



__attribute__((used)) static int FUNC_0(struct ocrdma_qp_hwq_info *VAR_0)
{
 int VAR_1;
 if (VAR_0->head >= VAR_0->tail)
  VAR_1 = (VAR_0->max_cnt - VAR_0->head) + VAR_0->tail;
 else
  VAR_1 = VAR_0->tail - VAR_0->head;
 return VAR_1;
}
