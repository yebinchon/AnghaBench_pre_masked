
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct igb_adapter {int num_q_vectors; TYPE_1__* pdev; struct igb_adapter** q_vector; TYPE_2__* msix_entries; } ;
struct TYPE_4__ {int vector; } ;
struct TYPE_3__ {int irq; } ;


 int FUNC_0 (int ,struct igb_adapter*) ;

__attribute__((used)) static void FUNC_1(struct igb_adapter *VAR_0)
{
 if (VAR_0->msix_entries) {
  int VAR_1 = 0, VAR_2;

  FUNC_0(VAR_0->msix_entries[VAR_1++].vector, VAR_0);

  for (VAR_2 = 0; VAR_2 < VAR_0->num_q_vectors; VAR_2++)
   FUNC_0(VAR_0->msix_entries[VAR_1++].vector,
     VAR_0->q_vector[VAR_2]);
 } else {
  FUNC_0(VAR_0->pdev->irq, VAR_0);
 }
}
