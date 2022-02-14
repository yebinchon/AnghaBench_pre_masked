
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct pci_pbm_info {int devhandle; } ;
struct iommu {size_t page_table_map_base; int lock; } ;
struct dma_attrs {int dummy; } ;
struct TYPE_2__ {struct pci_pbm_info* host_controller; struct iommu* iommu; } ;
struct device {TYPE_1__ archdata; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;
typedef size_t dma_addr_t ;


 int VAR_0 ;
 int FUNC_0 (int ,long) ;
 size_t FUNC_1 (size_t) ;
 size_t VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct iommu*,size_t,unsigned long) ;
 unsigned long FUNC_4 (int ,int ,unsigned long) ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static void FUNC_9(struct device *VAR_3, dma_addr_t VAR_4,
         size_t VAR_5, enum dma_data_direction VAR_6,
         struct dma_attrs *VAR_7)
{
 struct pci_pbm_info *VAR_8;
 struct iommu *VAR_9;
 unsigned long VAR_10, VAR_11;
 long VAR_12;
 u32 VAR_13;

 if (FUNC_8(VAR_6 == VAR_0)) {
  if (FUNC_5())
   FUNC_2(1);
  return;
 }

 VAR_9 = VAR_3->archdata.iommu;
 VAR_8 = VAR_3->archdata.host_controller;
 VAR_13 = VAR_8->devhandle;

 VAR_11 = FUNC_1(VAR_4 + VAR_5) - (VAR_4 & VAR_1);
 VAR_11 >>= VAR_2;
 VAR_4 &= VAR_1;

 FUNC_6(&VAR_9->lock, VAR_10);

 FUNC_3(VAR_9, VAR_4, VAR_11);

 VAR_12 = (VAR_4 - VAR_9->page_table_map_base) >> VAR_2;
 do {
  unsigned long VAR_14;

  VAR_14 = FUNC_4(VAR_13, FUNC_0(0, VAR_12),
         VAR_11);
  VAR_12 += VAR_14;
  VAR_11 -= VAR_14;
 } while (VAR_11 != 0);

 FUNC_7(&VAR_9->lock, VAR_10);
}
