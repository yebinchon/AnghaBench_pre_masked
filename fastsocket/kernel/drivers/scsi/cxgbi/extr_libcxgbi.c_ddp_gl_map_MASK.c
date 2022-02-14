
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
struct cxgbi_gather_list {int nelem; int * pages; int * phys_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct pci_dev*,struct cxgbi_gather_list*) ;
 int FUNC_1 (int *,int ,int ,int ,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int,char*,int,int ,struct pci_dev*) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static inline int FUNC_5(struct pci_dev *VAR_4,
        struct cxgbi_gather_list *VAR_5)
{
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_5->nelem; VAR_6++) {
  VAR_5->phys_addr[VAR_6] = FUNC_1(&VAR_4->dev, VAR_5->pages[VAR_6], 0,
      VAR_2,
      VAR_3);
  if (FUNC_4(FUNC_2(&VAR_4->dev, VAR_5->phys_addr[VAR_6]))) {
   FUNC_3(1 << VAR_0,
    "page %d 0x%p, 0x%p dma mapping err.\n",
    VAR_6, VAR_5->pages[VAR_6], VAR_4);
   goto unmap;
  }
 }
 return VAR_6;
unmap:
 if (VAR_6) {
  unsigned int VAR_7 = VAR_5->nelem;

  VAR_5->nelem = VAR_6;
  FUNC_0(VAR_4, VAR_5);
  VAR_5->nelem = VAR_7;
 }
 return -VAR_1;
}
