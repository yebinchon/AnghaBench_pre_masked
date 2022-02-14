
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u16 ;
struct pci_dev {int devfn; TYPE_1__* bus; } ;
struct dma_ops_domain {size_t target_dev; int list; int domain; } ;
struct amd_iommu {int dummy; } ;
struct TYPE_2__ {int number; } ;


 int VAR_0 ;
 size_t* VAR_1 ;
 size_t VAR_2 ;
 struct amd_iommu** VAR_3 ;
 int FUNC_0 (struct amd_iommu*,int *,size_t) ;
 size_t FUNC_1 (int ,int ) ;
 struct dma_ops_domain* FUNC_2 (struct amd_iommu*) ;
 scalar_t__ FUNC_3 (size_t) ;
 int FUNC_4 (struct dma_ops_domain*,size_t) ;
 int VAR_4 ;
 int FUNC_5 (int *,int *) ;
 struct pci_dev* FUNC_6 (int ,int ,struct pci_dev*) ;

__attribute__((used)) static void FUNC_7(void)
{
 struct pci_dev *VAR_5 = ((void*)0);
 struct dma_ops_domain *VAR_6;
 struct amd_iommu *VAR_7;
 u16 VAR_8, VAR_9;

 while ((VAR_5 = FUNC_6(VAR_0, VAR_0, VAR_5)) != ((void*)0)) {
  VAR_9 = VAR_8 = FUNC_1(VAR_5->bus->number, VAR_5->devfn);
  if (VAR_8 > VAR_2)
   continue;
  VAR_8 = VAR_1[VAR_8];
  if (FUNC_3(VAR_8))
   continue;
  VAR_7 = VAR_3[VAR_8];
  if (!VAR_7)
   continue;
  VAR_6 = FUNC_2(VAR_7);
  if (!VAR_6)
   continue;
  FUNC_4(VAR_6, VAR_8);
  VAR_6->target_dev = VAR_8;

  FUNC_0(VAR_7, &VAR_6->domain, VAR_8);
  if (VAR_9 != VAR_8)
   FUNC_0(VAR_7, &VAR_6->domain, VAR_9);

  FUNC_5(&VAR_6->list, &VAR_4);
 }
}
