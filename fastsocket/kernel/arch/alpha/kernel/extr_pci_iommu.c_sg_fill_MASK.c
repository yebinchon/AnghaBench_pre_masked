
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scatterlist {long dma_length; scalar_t__ dma_address; long length; } ;
struct pci_iommu_arena {scalar_t__ dma_base; unsigned long* ptes; } ;
struct device {int dummy; } ;
typedef unsigned long dma_addr_t ;
struct TYPE_2__ {unsigned long pci_dac_offset; } ;


 int FUNC_0 (char*,int,long,unsigned long,...) ;
 unsigned long VAR_0 ;
 long VAR_1 ;
 unsigned long FUNC_1 (struct scatterlist*) ;
 long FUNC_2 (struct scatterlist*) ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int FUNC_3 (unsigned long) ;
 TYPE_1__ VAR_4 ;
 long FUNC_4 (struct device*,struct pci_iommu_arena*,long,int ) ;
 long FUNC_5 (unsigned long,long,long) ;
 int FUNC_6 (unsigned long) ;
 int FUNC_7 (struct device*,struct scatterlist*,struct scatterlist*,int ) ;

__attribute__((used)) static int
FUNC_8(struct device *VAR_5, struct scatterlist *VAR_6, struct scatterlist *VAR_7,
 struct scatterlist *VAR_8, struct pci_iommu_arena *VAR_9,
 dma_addr_t VAR_10, int VAR_11)
{
 unsigned long VAR_12 = FUNC_1(VAR_6);
 long VAR_13 = VAR_6->dma_length;
 struct scatterlist *VAR_14;
 unsigned long *VAR_15;
 long VAR_16, VAR_17, VAR_18;




 if (VAR_6->dma_address == 0
     && VAR_12 + VAR_13 + VAR_2 - 1 <= VAR_10
     && VAR_12 + VAR_13 <= VAR_3) {
  VAR_8->dma_address = VAR_12 + VAR_2;
  VAR_8->dma_length = VAR_13;

  FUNC_0("    sg_fill: [%p,%lx] -> direct %llx\n",
       FUNC_3(VAR_12), VAR_13, VAR_8->dma_address);

  return 0;
 }



 if (VAR_6->dma_address == 0 && VAR_11) {
  VAR_8->dma_address = VAR_12 + VAR_4.pci_dac_offset;
  VAR_8->dma_length = VAR_13;

  FUNC_0("    sg_fill: [%p,%lx] -> DAC %llx\n",
       FUNC_3(VAR_12), VAR_13, VAR_8->dma_address);

  return 0;
 }




 VAR_12 &= ~VAR_0;
 VAR_16 = FUNC_5(VAR_12, VAR_13, VAR_1);
 VAR_17 = FUNC_4(VAR_5, VAR_9, VAR_16, 0);
 if (VAR_17 < 0) {

  if (VAR_6->dma_address == 0)
   return -1;



  FUNC_7(VAR_5, VAR_6, VAR_7, 0);
  return FUNC_8(VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11);
 }

 VAR_8->dma_address = VAR_9->dma_base + VAR_17*VAR_1 + VAR_12;
 VAR_8->dma_length = VAR_13;

 FUNC_0("    sg_fill: [%p,%lx] -> sg %llx np %ld\n",
      FUNC_3(VAR_12), VAR_13, VAR_8->dma_address, VAR_16);



 VAR_15 = &VAR_9->ptes[VAR_17];
 VAR_14 = VAR_6;
 do {




  VAR_13 = VAR_14->length;
  VAR_12 = FUNC_1(VAR_14);

  while (VAR_14+1 < VAR_7 && (int) VAR_14[1].dma_address == -1) {
   VAR_13 += VAR_14[1].length;
   VAR_14++;
  }

  VAR_16 = FUNC_5(VAR_12, VAR_13, VAR_1);

  VAR_12 &= VAR_0;
  for (VAR_18 = 0; VAR_18 < VAR_16; ++VAR_18, VAR_12 += VAR_1)
   *VAR_15++ = FUNC_6(VAR_12);
 } while (++VAR_14 < VAR_7 && (int) VAR_14->dma_address < 0);

 return 1;
}
