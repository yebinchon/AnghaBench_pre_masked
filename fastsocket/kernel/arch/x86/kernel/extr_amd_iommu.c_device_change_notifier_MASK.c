
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u16 ;
struct protection_domain {int dummy; } ;
struct pci_dev {int devfn; TYPE_1__* bus; } ;
struct notifier_block {int dummy; } ;
struct dma_ops_domain {size_t target_dev; int list; } ;
struct TYPE_4__ {int * dma_ops; } ;
struct device {TYPE_2__ archdata; } ;
struct amd_iommu {int dummy; } ;
struct TYPE_3__ {int number; } ;




 size_t* VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 struct amd_iommu** VAR_3 ;
 int FUNC_0 (struct amd_iommu*,int ,size_t) ;
 size_t FUNC_1 (int ,int ) ;
 int FUNC_2 (struct protection_domain*,size_t) ;
 struct dma_ops_domain* FUNC_3 (struct amd_iommu*) ;
 struct protection_domain* FUNC_4 (size_t) ;
 struct dma_ops_domain* FUNC_5 (size_t) ;
 int FUNC_6 (struct amd_iommu*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_7 (struct amd_iommu*,size_t) ;
 int FUNC_8 (int *,int *) ;
 int VAR_7 ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,unsigned long) ;
 struct pci_dev* FUNC_11 (struct device*) ;

__attribute__((used)) static int FUNC_12(struct notifier_block *VAR_8,
      unsigned long VAR_9, void *VAR_10)
{
 struct device *VAR_11 = VAR_10;
 struct pci_dev *VAR_12 = FUNC_11(VAR_11);
 u16 VAR_13 = FUNC_1(VAR_12->bus->number, VAR_12->devfn);
 struct protection_domain *VAR_14;
 struct dma_ops_domain *VAR_15;
 struct amd_iommu *VAR_16;
 unsigned long VAR_17;

 if (VAR_13 > VAR_2)
  goto out;

 VAR_13 = VAR_0[VAR_13];

 VAR_16 = VAR_3[VAR_13];
 if (VAR_16 == ((void*)0))
  goto out;

 VAR_14 = FUNC_4(VAR_13);

 switch (VAR_9) {
 case 128:
  if (!VAR_14)
   goto out;
  if (VAR_4)
   break;
  FUNC_2(VAR_14, VAR_13);
  break;
 case 129:

  if (VAR_4) {
   FUNC_0(VAR_16, VAR_7, VAR_13);
   break;
  }


  VAR_15 = FUNC_5(VAR_13);
  if (VAR_15)
   goto out;
  VAR_15 = FUNC_3(VAR_16);
  if (!VAR_15)
   goto out;
  VAR_15->target_dev = VAR_13;

  FUNC_9(&VAR_6, VAR_17);
  FUNC_8(&VAR_15->list, &VAR_5);
  FUNC_10(&VAR_6, VAR_17);

  VAR_11->archdata.dma_ops = &VAR_1;

  break;
 default:
  goto out;
 }

 FUNC_7(VAR_16, VAR_13);
 FUNC_6(VAR_16);

out:
 return 0;
}
