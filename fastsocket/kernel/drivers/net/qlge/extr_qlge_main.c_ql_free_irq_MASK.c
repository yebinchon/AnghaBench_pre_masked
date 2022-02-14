
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ql_adapter {int intr_count; int * rx_ring; TYPE_2__* pdev; TYPE_1__* msi_x_entry; int flags; struct intr_context* intr_context; } ;
struct intr_context {scalar_t__ hooked; } ;
struct TYPE_4__ {int irq; } ;
struct TYPE_3__ {int vector; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct ql_adapter*) ;
 scalar_t__ FUNC_2 (int ,int *) ;

__attribute__((used)) static void FUNC_3(struct ql_adapter *VAR_1)
{
 int VAR_2;
 struct intr_context *VAR_3 = &VAR_1->intr_context[0];

 for (VAR_2 = 0; VAR_2 < VAR_1->intr_count; VAR_2++, VAR_3++) {
  if (VAR_3->hooked) {
   if (FUNC_2(VAR_0, &VAR_1->flags)) {
    FUNC_0(VAR_1->msi_x_entry[VAR_2].vector,
      &VAR_1->rx_ring[VAR_2]);
   } else {
    FUNC_0(VAR_1->pdev->irq, &VAR_1->rx_ring[0]);
   }
  }
 }
 FUNC_1(VAR_1);
}
