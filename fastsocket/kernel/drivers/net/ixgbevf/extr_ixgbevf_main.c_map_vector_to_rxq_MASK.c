
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int count; TYPE_2__* ring; } ;
struct ixgbevf_q_vector {TYPE_1__ rx; } ;
struct ixgbevf_adapter {TYPE_2__* rx_ring; struct ixgbevf_q_vector** q_vector; } ;
struct TYPE_4__ {struct TYPE_4__* next; } ;



__attribute__((used)) static inline void FUNC_0(struct ixgbevf_adapter *VAR_0, int VAR_1,
         int VAR_2)
{
 struct ixgbevf_q_vector *VAR_3 = VAR_0->q_vector[VAR_1];

 VAR_0->rx_ring[VAR_2].next = VAR_3->rx.ring;
 VAR_3->rx.ring = &VAR_0->rx_ring[VAR_2];
 VAR_3->rx.count++;
}
