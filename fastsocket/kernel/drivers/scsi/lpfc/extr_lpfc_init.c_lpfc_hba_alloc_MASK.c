
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
struct lpfc_hba {scalar_t__ brd_no; int ct_ev_waiters; int ct_ev_lock; struct pci_dev* pcidev; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct lpfc_hba*) ;
 struct lpfc_hba* FUNC_3 (int,int ) ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (int *) ;

__attribute__((used)) static struct lpfc_hba *
FUNC_6(struct pci_dev *VAR_1)
{
 struct lpfc_hba *VAR_2;


 VAR_2 = FUNC_3(sizeof(struct lpfc_hba), VAR_0);
 if (!VAR_2) {
  FUNC_1(&VAR_1->dev, "failed to allocate hba struct\n");
  return ((void*)0);
 }


 VAR_2->pcidev = VAR_1;


 VAR_2->brd_no = FUNC_4();
 if (VAR_2->brd_no < 0) {
  FUNC_2(VAR_2);
  return ((void*)0);
 }

 FUNC_5(&VAR_2->ct_ev_lock);
 FUNC_0(&VAR_2->ct_ev_waiters);

 return VAR_2;
}
