
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
struct cxgbi_gather_list {int nelem; int * phys_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int ,int ) ;

__attribute__((used)) static inline void FUNC_1(struct pci_dev *VAR_2,
     struct cxgbi_gather_list *VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_3->nelem; VAR_4++)
  FUNC_0(&VAR_2->dev, VAR_3->phys_addr[VAR_4], VAR_0,
    VAR_1);
}
