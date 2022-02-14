
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_sriov {int ctrl; int mstate; int mtask; scalar_t__ pos; } ;
struct pci_dev {struct pci_sriov* sriov; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct pci_dev*,scalar_t__,int) ;

__attribute__((used)) static void FUNC_3(struct pci_dev *VAR_3)
{
 struct pci_sriov *VAR_4 = VAR_3->sriov;

 VAR_4->ctrl &= ~(VAR_2 | VAR_1);
 FUNC_2(VAR_3, VAR_4->pos + VAR_0, VAR_4->ctrl);

 FUNC_0(&VAR_4->mtask);
 FUNC_1(VAR_4->mstate);
}
