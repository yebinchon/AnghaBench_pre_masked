
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct e1000_hw {int dummy; } ;
struct igb_adapter {int eims_enable_mask; int num_q_vectors; TYPE_2__* pdev; TYPE_1__* msix_entries; struct e1000_hw hw; } ;
struct TYPE_4__ {int irq; } ;
struct TYPE_3__ {int vector; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 () ;

__attribute__((used)) static void FUNC_4(struct igb_adapter *VAR_5)
{
 struct e1000_hw *VAR_6 = &VAR_5->hw;





 if (VAR_5->msix_entries) {
  u32 VAR_7 = FUNC_0(VAR_1);
  FUNC_2(VAR_1, VAR_7 & ~VAR_5->eims_enable_mask);
  FUNC_2(VAR_2, VAR_5->eims_enable_mask);
  VAR_7 = FUNC_0(VAR_0);
  FUNC_2(VAR_0, VAR_7 & ~VAR_5->eims_enable_mask);
 }

 FUNC_2(VAR_3, 0);
 FUNC_2(VAR_4, ~0);
 FUNC_3();
 if (VAR_5->msix_entries) {
  int VAR_8;
  for (VAR_8 = 0; VAR_8 < VAR_5->num_q_vectors; VAR_8++)
   FUNC_1(VAR_5->msix_entries[VAR_8].vector);
 } else {
  FUNC_1(VAR_5->pdev->irq);
 }
}
