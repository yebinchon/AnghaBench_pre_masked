
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scatterlist {int dma_address; size_t dma_length; } ;
struct pci_iommu_arena {int dma_base; int size; int next_entry; int lock; } ;
struct pci_dev {int dma_mask; struct pci_controller* sysdata; } ;
struct pci_controller {struct pci_iommu_arena* sg_isa; struct pci_iommu_arena* sg_pci; } ;
typedef int dma_addr_t ;
typedef int dma64_addr_t ;
struct TYPE_2__ {int (* mv_pci_tbi ) (struct pci_controller*,int,int) ;} ;


 int FUNC_0 () ;
 int FUNC_1 (char*,int,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__ VAR_6 ;
 int FUNC_2 (struct pci_iommu_arena*,long,long) ;
 long FUNC_3 (int,size_t,int ) ;
 struct pci_controller* VAR_7 ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (struct pci_controller*,int,int) ;

void
FUNC_7(struct pci_dev *VAR_8, struct scatterlist *VAR_9, int VAR_10,
      int VAR_11)
{
 unsigned long VAR_12;
 struct pci_controller *VAR_13;
 struct pci_iommu_arena *VAR_14;
 struct scatterlist *VAR_15;
 dma_addr_t VAR_16;
 dma_addr_t VAR_17, VAR_18;

 if (VAR_11 == VAR_3)
  FUNC_0();

 if (! VAR_6.mv_pci_tbi)
  return;

 VAR_13 = VAR_8 ? VAR_8->sysdata : VAR_7;
 VAR_16 = VAR_8 ? VAR_8->dma_mask : VAR_0;
 VAR_14 = VAR_13->sg_pci;
 if (!VAR_14 || VAR_14->dma_base + VAR_14->size - 1 > VAR_16)
  VAR_14 = VAR_13->sg_isa;

 VAR_17 = -1, VAR_18 = 0;

 FUNC_4(&VAR_14->lock, VAR_12);

 for (VAR_15 = VAR_9 + VAR_10; VAR_9 < VAR_15; ++VAR_9) {
  dma64_addr_t VAR_19;
  size_t VAR_20;
  long VAR_21, VAR_22;
  dma_addr_t VAR_23;

  VAR_19 = VAR_9->dma_address;
  VAR_20 = VAR_9->dma_length;
  if (!VAR_20)
   break;

  if (VAR_19 > 0xffffffff) {

   FUNC_1("    (%ld) DAC [%llx,%zx]\n",
         VAR_9 - VAR_15 + VAR_10, VAR_19, VAR_20);
   continue;
  }

  if (VAR_19 >= VAR_4
      && VAR_19 < VAR_4 + VAR_5) {

   FUNC_1("    (%ld) direct [%llx,%zx]\n",
         VAR_9 - VAR_15 + VAR_10, VAR_19, VAR_20);
   continue;
  }

  FUNC_1("    (%ld) sg [%llx,%zx]\n",
       VAR_9 - VAR_15 + VAR_10, VAR_19, VAR_20);

  VAR_21 = FUNC_3(VAR_19, VAR_20, VAR_2);
  VAR_22 = (VAR_19 - VAR_14->dma_base) >> VAR_1;
  FUNC_2(VAR_14, VAR_22, VAR_21);

  VAR_23 = VAR_19 + VAR_20 - 1;
  if (VAR_17 > VAR_19) VAR_17 = VAR_19;
  if (VAR_18 < VAR_23) VAR_18 = VAR_23;
 }




 if ((VAR_18 - VAR_14->dma_base) >> VAR_1 >= VAR_14->next_entry)
  VAR_6.mv_pci_tbi(VAR_13, VAR_17, VAR_18);

 FUNC_5(&VAR_14->lock, VAR_12);

 FUNC_1("pci_unmap_sg: %ld entries\n", VAR_10 - (VAR_15 - VAR_9));
}
