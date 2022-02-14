
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tail; } ;
struct ocrdma_eq {TYPE_1__ q; } ;


 int VAR_0 ;

__attribute__((used)) static inline void FUNC_0(struct ocrdma_eq *VAR_1)
{
 VAR_1->q.tail = (VAR_1->q.tail + 1) & (VAR_0 - 1);
}
