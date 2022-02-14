
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void u8 ;
struct ocrdma_eqe {int dummy; } ;
struct TYPE_2__ {int tail; scalar_t__ va; } ;
struct ocrdma_eq {TYPE_1__ q; } ;



__attribute__((used)) static inline void *FUNC_0(struct ocrdma_eq *VAR_0)
{
 return (u8 *)VAR_0->q.va + (VAR_0->q.tail * sizeof(struct ocrdma_eqe));
}
