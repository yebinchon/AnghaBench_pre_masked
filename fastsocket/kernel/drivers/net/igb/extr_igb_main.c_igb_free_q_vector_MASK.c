
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* ring; } ;
struct TYPE_8__ {TYPE_3__* ring; } ;
struct igb_q_vector {int napi; TYPE_2__ rx; TYPE_4__ tx; } ;
struct igb_adapter {struct igb_q_vector** q_vector; int ** tx_ring; } ;
struct TYPE_7__ {size_t queue_index; } ;
struct TYPE_5__ {size_t queue_index; } ;


 int FUNC_0 (struct igb_q_vector*,int ) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_2(struct igb_adapter *VAR_1, int VAR_2)
{
 struct igb_q_vector *VAR_3 = VAR_1->q_vector[VAR_2];

 if (VAR_3->tx.ring)
  VAR_1->tx_ring[VAR_3->tx.ring->queue_index] = ((void*)0);

 if (VAR_3->rx.ring)
  VAR_1->tx_ring[VAR_3->rx.ring->queue_index] = ((void*)0);

 VAR_1->q_vector[VAR_2] = ((void*)0);
 FUNC_1(&VAR_3->napi);




 FUNC_0(VAR_3, VAR_0);
}
