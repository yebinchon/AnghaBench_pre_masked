
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct e1000_adapter {int flags; int pdev; int * msix_entries; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

void FUNC_3(struct e1000_adapter *VAR_1)
{
 if (VAR_1->msix_entries) {
  FUNC_2(VAR_1->pdev);
  FUNC_0(VAR_1->msix_entries);
  VAR_1->msix_entries = ((void*)0);
 } else if (VAR_1->flags & VAR_0) {
  FUNC_1(VAR_1->pdev);
  VAR_1->flags &= ~VAR_0;
 }
}
