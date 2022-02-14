
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ toggle; } ;
struct ibmveth_adapter {TYPE_1__ rx_queue; } ;


 scalar_t__ FUNC_0 (struct ibmveth_adapter*) ;

__attribute__((used)) static inline int FUNC_1(struct ibmveth_adapter *VAR_0)
{
 return FUNC_0(VAR_0) == VAR_0->rx_queue.toggle;
}
