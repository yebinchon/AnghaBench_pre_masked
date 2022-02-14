
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qlcnic_adapter {int flags; TYPE_1__* ahw; int * msix_entries; int pdev; } ;
struct TYPE_2__ {int * intr_tbl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct qlcnic_adapter *VAR_2)
{
 if (VAR_2->flags & VAR_0)
  FUNC_2(VAR_2->pdev);
 if (VAR_2->flags & VAR_1)
  FUNC_1(VAR_2->pdev);

 FUNC_0(VAR_2->msix_entries);
 VAR_2->msix_entries = ((void*)0);

 if (VAR_2->ahw->intr_tbl) {
  FUNC_3(VAR_2->ahw->intr_tbl);
  VAR_2->ahw->intr_tbl = ((void*)0);
 }
}
