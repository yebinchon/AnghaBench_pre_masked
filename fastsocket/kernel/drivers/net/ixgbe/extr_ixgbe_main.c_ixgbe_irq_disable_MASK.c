
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int type; } ;
struct TYPE_9__ {TYPE_1__ mac; } ;
struct ixgbe_adapter {int flags; int num_q_vectors; TYPE_3__* pdev; TYPE_2__* msix_entries; TYPE_4__ hw; } ;
struct TYPE_8__ {int irq; } ;
struct TYPE_7__ {int vector; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*,int ,int) ;



 int FUNC_3 (int ) ;

__attribute__((used)) static inline void FUNC_4(struct ixgbe_adapter *VAR_2)
{
 switch (VAR_2->hw.mac.type) {
 case 130:
  FUNC_2(&VAR_2->hw, VAR_0, ~0);
  break;
 case 129:
 case 128:
  FUNC_2(&VAR_2->hw, VAR_0, 0xFFFF0000);
  FUNC_2(&VAR_2->hw, FUNC_0(0), ~0);
  FUNC_2(&VAR_2->hw, FUNC_0(1), ~0);
  break;
 default:
  break;
 }
 FUNC_1(&VAR_2->hw);
 if (VAR_2->flags & VAR_1) {
  int VAR_3;

  for (VAR_3 = 0; VAR_3 < VAR_2->num_q_vectors; VAR_3++)
   FUNC_3(VAR_2->msix_entries[VAR_3].vector);

  FUNC_3(VAR_2->msix_entries[VAR_3++].vector);
 } else {
  FUNC_3(VAR_2->pdev->irq);
 }
}
