
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct pci_dev {int dev; } ;
struct lpfc_hba {struct pci_dev* pcidev; } ;
struct lpfc_dmabuf {scalar_t__ virt; int phys; int list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,int ,int *,int ) ;
 int FUNC_2 (struct lpfc_dmabuf*) ;
 struct lpfc_dmabuf* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,int ,int ) ;

__attribute__((used)) static struct lpfc_dmabuf *
FUNC_5(struct lpfc_hba *VAR_2)
{
 struct lpfc_dmabuf *VAR_3;
 struct pci_dev *VAR_4 = VAR_2->pcidev;


 VAR_3 = FUNC_3(sizeof(struct lpfc_dmabuf), VAR_1);
 if (!VAR_3)
  return ((void*)0);

 FUNC_0(&VAR_3->list);


 VAR_3->virt = FUNC_1(&VAR_4->dev, VAR_0,
       &(VAR_3->phys), VAR_1);

 if (!VAR_3->virt) {
  FUNC_2(VAR_3);
  return ((void*)0);
 }
 FUNC_4((uint8_t *)VAR_3->virt, 0, VAR_0);

 return VAR_3;
}
