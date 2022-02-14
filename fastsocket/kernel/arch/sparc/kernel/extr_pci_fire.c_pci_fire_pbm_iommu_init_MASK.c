
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct pci_pbm_info {int numa_node; scalar_t__ controller_regs; scalar_t__ pbm_regs; struct iommu* iommu; } ;
struct iommu {scalar_t__ iommu_control; scalar_t__ iommu_tsbbase; int page_table; scalar_t__ iommu_flushinv; scalar_t__ write_complete_reg; scalar_t__ iommu_flush; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct iommu*,int,int,int,int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct pci_pbm_info *VAR_4)
{
 struct iommu *VAR_5 = VAR_4->iommu;
 u32 VAR_6[2], VAR_7;
 u64 VAR_8;
 int VAR_9, VAR_10;


 VAR_6[0] = 0xc0000000;
 VAR_6[1] = 0x40000000;
 VAR_7 = 0xffffffff;
 VAR_9 = 128;


 VAR_5->iommu_control = VAR_4->pbm_regs + VAR_0;
 VAR_5->iommu_tsbbase = VAR_4->pbm_regs + VAR_3;
 VAR_5->iommu_flush = VAR_4->pbm_regs + VAR_1;
 VAR_5->iommu_flushinv = VAR_4->pbm_regs + VAR_2;




 VAR_5->write_complete_reg = VAR_4->controller_regs + 0x410000UL;




 FUNC_3(~(u64)0, VAR_5->iommu_flushinv);

 VAR_10 = FUNC_1(VAR_5, VAR_9 * 8 * 1024, VAR_6[0], VAR_7,
          VAR_4->numa_node);
 if (VAR_10)
  return VAR_10;

 FUNC_3(FUNC_0(VAR_5->page_table) | 0x7UL, VAR_5->iommu_tsbbase);

 VAR_8 = FUNC_2(VAR_5->iommu_control);
 VAR_8 |= (0x00000400 |
      0x00000300 |
      0x00000002 |
      0x00000001 );
 FUNC_3(VAR_8, VAR_5->iommu_control);

 return 0;
}
