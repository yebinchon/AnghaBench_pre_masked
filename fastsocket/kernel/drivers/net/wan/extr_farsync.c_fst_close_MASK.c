
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct fst_port_info {scalar_t__ mode; struct fst_card_info* card; } ;
struct fst_card_info {int dmarx_in_progress; int dmatx_in_progress; scalar_t__ pci_conf; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,int ,unsigned char,int ,unsigned char) ;
 struct fst_port_info* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct fst_port_info*) ;
 int FUNC_3 (struct net_device*) ;
 unsigned char FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct net_device*) ;

__attribute__((used)) static int
FUNC_7(struct net_device *VAR_5)
{
 struct fst_port_info *VAR_6;
 struct fst_card_info *VAR_7;
 unsigned char VAR_8;
 unsigned char VAR_9;

 VAR_6 = FUNC_1(VAR_5);
 VAR_7 = VAR_6->card;

 VAR_8 = FUNC_4(VAR_7->pci_conf + VAR_2);
 VAR_9 = FUNC_4(VAR_7->pci_conf + VAR_1);
 FUNC_0(VAR_0,
     "Port Close: tx_dma_in_progress = %d (%x) rx_dma_in_progress = %d (%x)\n",
     VAR_7->dmatx_in_progress, VAR_8, VAR_7->dmarx_in_progress,
     VAR_9);

 FUNC_6(VAR_5);
 FUNC_2(FUNC_1(VAR_5));
 if (VAR_6->mode != VAR_3) {
  FUNC_3(VAR_5);
 }
 FUNC_5(VAR_4);
 return 0;
}
