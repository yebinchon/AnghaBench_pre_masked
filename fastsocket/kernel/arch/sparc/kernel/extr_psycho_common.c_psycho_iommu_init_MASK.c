
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct pci_pbm_info {int numa_node; scalar_t__ controller_regs; struct iommu* iommu; } ;
struct iommu {scalar_t__ iommu_control; scalar_t__ iommu_tsbbase; int page_table; scalar_t__ iommu_ctxflush; scalar_t__ write_complete_reg; scalar_t__ iommu_tags; scalar_t__ iommu_flush; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct iommu*,int,int ,int ,int ) ;
 int FUNC_2 (struct pci_pbm_info*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int,scalar_t__) ;

int FUNC_5(struct pci_pbm_info *VAR_11, int VAR_12,
        u32 VAR_13, u32 VAR_14,
        unsigned long VAR_15)
{
 struct iommu *VAR_16 = VAR_11->iommu;
 u64 VAR_17;
 int VAR_18;

 VAR_16->iommu_control = VAR_11->controller_regs + VAR_1;
 VAR_16->iommu_tsbbase = VAR_11->controller_regs + VAR_8;
 VAR_16->iommu_flush = VAR_11->controller_regs + VAR_6;
 VAR_16->iommu_tags = VAR_11->controller_regs + VAR_7;
 VAR_16->write_complete_reg = (VAR_11->controller_regs +
         VAR_15);

 VAR_16->iommu_ctxflush = 0;

 VAR_17 = FUNC_3(VAR_16->iommu_control);
 VAR_17 |= VAR_2;
 FUNC_4(VAR_17, VAR_16->iommu_control);

 FUNC_2(VAR_11);


 VAR_18 = FUNC_1(VAR_16, VAR_12 * 1024 * 8,
          VAR_13, VAR_14, VAR_11->numa_node);
 if (VAR_18)
  return VAR_18;

 FUNC_4(FUNC_0(VAR_16->page_table), VAR_16->iommu_tsbbase);

 VAR_17 = FUNC_3(VAR_16->iommu_control);
 VAR_17 &= ~(VAR_5 | VAR_4);
 VAR_17 |= VAR_3;

 switch (VAR_12) {
 case 64:
  VAR_17 |= VAR_10;
  break;
 case 128:
  VAR_17 |= VAR_9;
  break;
 default:
  return -VAR_0;
 }

 FUNC_4(VAR_17, VAR_16->iommu_control);

 return 0;

}
