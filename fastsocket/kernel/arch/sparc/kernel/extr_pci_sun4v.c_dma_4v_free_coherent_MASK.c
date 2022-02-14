
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct pci_pbm_info {int devhandle; } ;
struct iommu {unsigned long page_table_map_base; int lock; } ;
struct TYPE_2__ {struct pci_pbm_info* host_controller; struct iommu* iommu; } ;
struct device {TYPE_1__ archdata; } ;
typedef unsigned long dma_addr_t ;


 int FUNC_0 (int ,unsigned long) ;
 unsigned long FUNC_1 (size_t) ;
 unsigned long VAR_0 ;
 int FUNC_2 (unsigned long,unsigned long) ;
 unsigned long FUNC_3 (size_t) ;
 int FUNC_4 (struct iommu*,unsigned long,unsigned long) ;
 unsigned long FUNC_5 (int ,int ,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_8(struct device *VAR_1, size_t VAR_2, void *VAR_3,
     dma_addr_t VAR_4)
{
 struct pci_pbm_info *VAR_5;
 struct iommu *VAR_6;
 unsigned long VAR_7, VAR_8, VAR_9, VAR_10;
 u32 VAR_11;

 VAR_9 = FUNC_1(VAR_2) >> VAR_0;
 VAR_6 = VAR_1->archdata.iommu;
 VAR_5 = VAR_1->archdata.host_controller;
 VAR_11 = VAR_5->devhandle;
 VAR_10 = ((VAR_4 - VAR_6->page_table_map_base) >> VAR_0);

 FUNC_6(&VAR_6->lock, VAR_7);

 FUNC_4(VAR_6, VAR_4, VAR_9);

 do {
  unsigned long VAR_12;

  VAR_12 = FUNC_5(VAR_11, FUNC_0(0, VAR_10),
         VAR_9);
  VAR_10 += VAR_12;
  VAR_9 -= VAR_12;
 } while (VAR_9 != 0);

 FUNC_7(&VAR_6->lock, VAR_7);

 VAR_8 = FUNC_3(VAR_2);
 if (VAR_8 < 10)
  FUNC_2((unsigned long)VAR_3, VAR_8);
}
