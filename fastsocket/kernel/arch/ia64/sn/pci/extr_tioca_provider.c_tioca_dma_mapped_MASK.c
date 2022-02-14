
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u64 ;
struct tioca_kernel {int ca_ap_pagesize; int ca_pcigart_entries; int ca_lock; void** ca_pcigart; int ca_dmamaps; scalar_t__ ca_pciap_base; void* ca_pcigart_pagemap; } ;
struct tioca_dmamap {int cad_gart_size; int cad_gart_entry; int cad_list; scalar_t__ cad_dma_addr; } ;
struct tioca_common {scalar_t__ ca_kernel_private; } ;
struct pcidev_info {scalar_t__ pdi_pcibus_info; } ;
struct pci_dev {int dummy; } ;
typedef scalar_t__ dma_addr_t ;


 int VAR_0 ;
 size_t FUNC_0 (unsigned long) ;
 struct pcidev_info* FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (void*,int) ;
 int FUNC_4 (void*,int,int) ;
 int FUNC_5 (void*,int,int) ;
 int FUNC_6 (struct tioca_dmamap*) ;
 struct tioca_dmamap* FUNC_7 (int,int ) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int,void*) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int *,unsigned long) ;
 void* FUNC_12 (size_t) ;
 int FUNC_13 (struct tioca_kernel*) ;

__attribute__((used)) static dma_addr_t
FUNC_14(struct pci_dev *VAR_1, unsigned long VAR_2, size_t VAR_3)
{
 int VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;
 u64 VAR_11, VAR_12;
 struct tioca_common *VAR_13;
 struct tioca_kernel *VAR_14;
 dma_addr_t VAR_15 = 0;
 struct tioca_dmamap *VAR_16;
 void *VAR_17;
 unsigned long VAR_18;
 struct pcidev_info *VAR_19 = FUNC_1(VAR_1);

 VAR_13 = (struct tioca_common *)VAR_19->pdi_pcibus_info;
 VAR_14 = (struct tioca_kernel *)VAR_13->ca_kernel_private;

 VAR_11 = FUNC_0(VAR_2);
 if (!VAR_11)
  return 0;

 FUNC_10(&VAR_14->ca_lock, VAR_18);





 VAR_16 = FUNC_7(sizeof(struct tioca_dmamap), VAR_0);
 if (!VAR_16)
  goto map_return;






 VAR_5 = VAR_14->ca_ap_pagesize;
 VAR_6 = FUNC_2(VAR_5) - 1;
 VAR_12 = VAR_11 + VAR_3 - 1;

 VAR_8 = (VAR_12 >> VAR_6) - (VAR_11 >> VAR_6) + 1;

 VAR_17 = VAR_14->ca_pcigart_pagemap;
 VAR_9 = VAR_14->ca_pcigart_entries;

 VAR_7 = FUNC_3(VAR_17, VAR_9);
 while (VAR_7 < VAR_9) {
  VAR_10 = FUNC_4(VAR_17, VAR_9, VAR_7);

  if (VAR_10 - VAR_7 >= VAR_8)
   break;

  VAR_7 = FUNC_5(VAR_17, VAR_9, VAR_10);
 }

 if (VAR_7 > VAR_9) {
  FUNC_6(VAR_16);
  goto map_return;
 }

 for (VAR_4 = 0; VAR_4 < VAR_8; VAR_4++)
  FUNC_9(VAR_7 + VAR_4, VAR_17);

 VAR_15 = VAR_14->ca_pciap_base + (VAR_7 * VAR_5);

 VAR_16->cad_dma_addr = VAR_15;
 VAR_16->cad_gart_size = VAR_8;
 VAR_16->cad_gart_entry = VAR_7;
 FUNC_8(&VAR_16->cad_list, &VAR_14->ca_dmamaps);

 if (VAR_11 % VAR_5) {
  VAR_14->ca_pcigart[VAR_7] = FUNC_12(VAR_11);
  VAR_15 += VAR_11 & (VAR_5 - 1);
  VAR_11 &= ~(VAR_5 - 1);
  VAR_11 += VAR_5;
  VAR_7++;
 }

 while (VAR_11 < VAR_12) {
  VAR_14->ca_pcigart[VAR_7] = FUNC_12(VAR_11);
  VAR_11 += VAR_5;
  VAR_7++;
 }

 FUNC_13(VAR_14);

map_return:
 FUNC_11(&VAR_14->ca_lock, VAR_18);
 return VAR_15;
}
