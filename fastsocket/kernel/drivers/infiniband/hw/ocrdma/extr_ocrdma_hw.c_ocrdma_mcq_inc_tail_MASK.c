
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int tail; } ;
struct TYPE_4__ {TYPE_1__ cq; } ;
struct ocrdma_dev {TYPE_2__ mq; } ;


 int VAR_0 ;

__attribute__((used)) static inline void FUNC_0(struct ocrdma_dev *VAR_1)
{
 VAR_1->mq.cq.tail = (VAR_1->mq.cq.tail + 1) & (VAR_0 - 1);
}
