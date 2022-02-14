
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ count; int * ring; } ;
struct TYPE_4__ {scalar_t__ count; int * ring; } ;
struct ixgbevf_q_vector {TYPE_1__ tx; TYPE_2__ rx; } ;
struct ixgbevf_adapter {int num_msix_vectors; struct ixgbevf_q_vector** q_vector; } ;


 int VAR_0 ;

__attribute__((used)) static inline void FUNC_0(struct ixgbevf_adapter *VAR_1)
{
 int VAR_2, VAR_3 = VAR_1->num_msix_vectors - VAR_0;

 for (VAR_2 = 0; VAR_2 < VAR_3; VAR_2++) {
  struct ixgbevf_q_vector *VAR_4 = VAR_1->q_vector[VAR_2];
  VAR_4->rx.ring = ((void*)0);
  VAR_4->tx.ring = ((void*)0);
  VAR_4->rx.count = 0;
  VAR_4->tx.count = 0;
 }
}
