
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u16 ;
struct protection_domain {int id; } ;
struct pci_dev {int devfn; TYPE_1__* bus; } ;
struct dma_ops_domain {struct protection_domain domain; } ;
struct device {int * bus; } ;
struct amd_iommu {struct dma_ops_domain* default_dom; } ;
struct TYPE_2__ {int number; } ;


 int FUNC_0 (char*,int ,int ) ;
 size_t* VAR_0 ;
 size_t VAR_1 ;
 struct amd_iommu** VAR_2 ;
 int FUNC_1 (struct amd_iommu*,struct protection_domain*,size_t) ;
 size_t FUNC_2 (int ,int ) ;
 int FUNC_3 (struct device*) ;
 struct protection_domain* FUNC_4 (size_t) ;
 struct dma_ops_domain* FUNC_5 (size_t) ;
 int VAR_3 ;
 struct pci_dev* FUNC_6 (struct device*) ;

__attribute__((used)) static int FUNC_7(struct device *VAR_4,
    struct amd_iommu **VAR_5,
    struct protection_domain **VAR_6,
    u16 *VAR_7)
{
 struct dma_ops_domain *VAR_8;
 struct pci_dev *VAR_9;
 u16 VAR_10;

 *VAR_5 = ((void*)0);
 *VAR_6 = ((void*)0);
 *VAR_7 = 0xffff;

 if (VAR_4->bus != &VAR_3)
  return 0;

 VAR_9 = FUNC_6(VAR_4);
 VAR_10 = FUNC_2(VAR_9->bus->number, VAR_9->devfn);


 if (VAR_10 > VAR_1)
  return 0;

 *VAR_7 = VAR_0[VAR_10];

 *VAR_5 = VAR_2[*VAR_7];
 if (*VAR_5 == ((void*)0))
  return 0;
 *VAR_6 = FUNC_4(*VAR_7);
 if (*VAR_6 == ((void*)0)) {
  VAR_8 = FUNC_5(*VAR_7);
  if (!VAR_8)
   VAR_8 = (*VAR_5)->default_dom;
  *VAR_6 = &VAR_8->domain;
  FUNC_1(*VAR_5, *VAR_6, *VAR_7);
  FUNC_0("Using protection domain %d for device %s\n",
       (*VAR_6)->id, FUNC_3(VAR_4));
 }

 if (FUNC_4(VAR_10) == ((void*)0))
  FUNC_1(*VAR_5, *VAR_6, VAR_10);

 return 1;
}
