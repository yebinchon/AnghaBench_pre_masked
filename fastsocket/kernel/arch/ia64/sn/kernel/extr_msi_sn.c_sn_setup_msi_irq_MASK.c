
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef void* u32 ;
struct sn_pcibus_provider {int (* dma_map_consistent ) (struct pci_dev*,int ,int,int) ;} ;
struct sn_irq_info {int irq_int_bit; int irq_xtalkaddr; void* irq_bridge; int irq_bridge_type; } ;
struct pcibus_bussoft {scalar_t__ bs_base; int bs_asic_type; } ;
struct pci_dev {int dummy; } ;
struct msi_msg {int data; void* address_lo; void* address_hi; } ;
struct TYPE_3__ {int is_64; } ;
struct msi_desc {TYPE_1__ msi_attrib; } ;
typedef int nasid_t ;
struct TYPE_4__ {int pci_addr; struct sn_irq_info* sn_irq_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;
 struct sn_pcibus_provider* FUNC_1 (struct pci_dev*) ;
 struct pcibus_bussoft* FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 () ;
 int FUNC_6 (int) ;
 int VAR_5 ;
 int FUNC_7 (struct sn_irq_info*) ;
 struct sn_irq_info* FUNC_8 (int,int ) ;
 int FUNC_9 (int,int *,int ) ;
 int FUNC_10 (int,struct msi_desc*) ;
 int FUNC_11 (int,int,struct sn_irq_info*,int,int,int) ;
 int FUNC_12 (int,int,struct sn_irq_info*) ;
 int FUNC_13 (struct pci_dev*,struct sn_irq_info*) ;
 int VAR_6 ;
 TYPE_2__* VAR_7 ;
 int FUNC_14 (struct pci_dev*,int ,int,int) ;
 int FUNC_15 (int,struct msi_msg*) ;

int FUNC_16(struct pci_dev *VAR_8, struct msi_desc *VAR_9)
{
 struct msi_msg VAR_10;
 int VAR_11;
 int VAR_12;
 nasid_t VAR_13;
 u64 VAR_14;
 struct sn_irq_info *VAR_15;
 struct pcibus_bussoft *VAR_16 = FUNC_2(VAR_8);
 struct sn_pcibus_provider *VAR_17 = FUNC_1(VAR_8);
 int VAR_18;

 if (!VAR_9->msi_attrib.is_64)
  return -VAR_0;

 if (VAR_16 == ((void*)0))
  return -VAR_0;

 if (VAR_17 == ((void*)0) || VAR_17->dma_map_consistent == ((void*)0))
  return -VAR_0;

 VAR_18 = FUNC_5();
 if (VAR_18 < 0)
  return VAR_18;






 VAR_13 = FUNC_0(VAR_16->bs_base);
 VAR_11 = (VAR_13 & 1) ?
   FUNC_4(VAR_16->bs_base) :
   FUNC_3(VAR_16->bs_base);

 VAR_15 = FUNC_8(sizeof(struct sn_irq_info), VAR_2);
 if (! VAR_15) {
  FUNC_6(VAR_18);
  return -VAR_1;
 }

 VAR_12 = FUNC_11(VAR_13, VAR_11, VAR_15, VAR_18, -1, -1);
 if (VAR_12) {
  FUNC_7(VAR_15);
  FUNC_6(VAR_18);
  return -VAR_1;
 }

 VAR_15->irq_int_bit = -1;
 FUNC_13(VAR_8, VAR_15);


 VAR_15->irq_bridge_type = VAR_16->bs_asic_type;
 VAR_15->irq_bridge = (void *)VAR_16->bs_base;




 VAR_14 = (*VAR_17->dma_map_consistent)(VAR_8,
     VAR_15->irq_xtalkaddr,
     sizeof(VAR_15->irq_xtalkaddr),
     VAR_4|VAR_3);
 if (! VAR_14) {
  FUNC_12(VAR_13, VAR_11, VAR_15);
  FUNC_7(VAR_15);
  FUNC_6(VAR_18);
  return -VAR_1;
 }

 VAR_7[VAR_18].sn_irq_info = VAR_15;
 VAR_7[VAR_18].pci_addr = VAR_14;

 VAR_10.address_hi = (u32)(VAR_14 >> 32);
 VAR_10.address_lo = (u32)(VAR_14 & 0x00000000ffffffff);





 VAR_10.data = 0x100 + VAR_18;

 FUNC_10(VAR_18, VAR_9);
 FUNC_15(VAR_18, &VAR_10);
 FUNC_9(VAR_18, &VAR_6, VAR_5);

 return 0;
}
