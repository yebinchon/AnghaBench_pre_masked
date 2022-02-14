
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ tail; scalar_t__ head; } ;
struct ocrdma_qp {TYPE_1__ rq; } ;



__attribute__((used)) static int FUNC_0(struct ocrdma_qp *VAR_0)
{
 return (VAR_0->rq.tail == VAR_0->rq.head) ? 1 : 0;
}
