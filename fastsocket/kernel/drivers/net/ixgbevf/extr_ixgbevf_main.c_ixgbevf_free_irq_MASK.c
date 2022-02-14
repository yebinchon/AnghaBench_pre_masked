
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int ring; } ;
struct TYPE_4__ {int ring; } ;
struct ixgbevf_adapter {int num_msix_vectors; struct ixgbevf_adapter** q_vector; TYPE_3__* msix_entries; TYPE_2__ tx; TYPE_1__ rx; } ;
struct TYPE_6__ {int vector; } ;


 int FUNC_0 (int ,struct ixgbevf_adapter*) ;
 int FUNC_1 (struct ixgbevf_adapter*) ;

__attribute__((used)) static void FUNC_2(struct ixgbevf_adapter *VAR_0)
{
 int VAR_1, VAR_2;

 VAR_2 = VAR_0->num_msix_vectors;
 VAR_1 = VAR_2 - 1;

 FUNC_0(VAR_0->msix_entries[VAR_1].vector, VAR_0);
 VAR_1--;

 for (; VAR_1 >= 0; VAR_1--) {

  if (!VAR_0->q_vector[VAR_1]->rx.ring &&
      !VAR_0->q_vector[VAR_1]->tx.ring)
   continue;

  FUNC_0(VAR_0->msix_entries[VAR_1].vector,
    VAR_0->q_vector[VAR_1]);
 }

 FUNC_1(VAR_0);
}
