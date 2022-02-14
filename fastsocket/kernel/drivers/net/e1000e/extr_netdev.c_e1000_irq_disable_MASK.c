
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct e1000_hw {int dummy; } ;
struct e1000_adapter {int num_vectors; TYPE_1__* pdev; TYPE_2__* msix_entries; struct e1000_hw hw; } ;
struct TYPE_4__ {int vector; } ;
struct TYPE_3__ {int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct e1000_adapter *VAR_2)
{
 struct e1000_hw *VAR_3 = &VAR_2->hw;

 FUNC_1(VAR_1, ~0);
 if (VAR_2->msix_entries)
  FUNC_1(VAR_0, 0);
 FUNC_0();

 if (VAR_2->msix_entries) {
  int VAR_4;
  for (VAR_4 = 0; VAR_4 < VAR_2->num_vectors; VAR_4++)
   FUNC_2(VAR_2->msix_entries[VAR_4].vector);
 } else {
  FUNC_2(VAR_2->pdev->irq);
 }
}
