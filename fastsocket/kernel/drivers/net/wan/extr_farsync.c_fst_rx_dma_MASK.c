
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fst_card_info {int dmarx_in_progress; scalar_t__ pci_conf; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int,scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static inline void
FUNC_3(struct fst_card_info *VAR_7, unsigned char *VAR_8,
    unsigned char *VAR_9, int VAR_10)
{




 FUNC_0(VAR_1, "In fst_rx_dma %p %p %d\n", VAR_8, VAR_9, VAR_10);
 if (VAR_7->dmarx_in_progress) {
  FUNC_0(VAR_0, "In fst_rx_dma while dma in progress\n");
 }

 FUNC_2((unsigned long) VAR_8, VAR_7->pci_conf + VAR_5);
 FUNC_2((unsigned long) VAR_9, VAR_7->pci_conf + VAR_4);
 FUNC_2(VAR_10, VAR_7->pci_conf + VAR_6);
 FUNC_2(0x00000000c, VAR_7->pci_conf + VAR_3);




 VAR_7->dmarx_in_progress = 1;
 FUNC_1(0x03, VAR_7->pci_conf + VAR_2);
}
