
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_4__ {int tx_bytes; int tx_packets; } ;
struct amd8111e_priv {int tx_complete_idx; int tx_idx; TYPE_2__* tx_ring; TYPE_1__ coal_conf; scalar_t__* tx_dma_addr; TYPE_3__** tx_skbuff; int pci_dev; } ;
struct TYPE_6__ {int len; } ;
struct TYPE_5__ {int buff_count; scalar_t__ buff_phy_addr; int tx_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int ) ;
 struct amd8111e_priv* FUNC_2 (struct net_device*) ;
 scalar_t__ FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (int ,scalar_t__,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_4)
{
 struct amd8111e_priv* VAR_5 = FUNC_2(VAR_4);
 int VAR_6 = VAR_5->tx_complete_idx & VAR_3;
 int VAR_7;

 while (VAR_5->tx_complete_idx != VAR_5->tx_idx){
  VAR_6 = VAR_5->tx_complete_idx & VAR_3;
  VAR_7 = FUNC_1(VAR_5->tx_ring[VAR_6].tx_flags);

  if(VAR_7 & VAR_1)
   break;

  VAR_5->tx_ring[VAR_6].buff_phy_addr = 0;


  if (VAR_5->tx_skbuff[VAR_6]) {
   FUNC_5(VAR_5->pci_dev, VAR_5->tx_dma_addr[VAR_6],
       VAR_5->tx_skbuff[VAR_6]->len,
     VAR_2);
   FUNC_0 (VAR_5->tx_skbuff[VAR_6]);
   VAR_5->tx_skbuff[VAR_6] = ((void*)0);
   VAR_5->tx_dma_addr[VAR_6] = 0;
  }
  VAR_5->tx_complete_idx++;

  VAR_5->coal_conf.tx_packets++;
  VAR_5->coal_conf.tx_bytes +=
   FUNC_1(VAR_5->tx_ring[VAR_6].buff_count);

  if (FUNC_3(VAR_4) &&
   VAR_5->tx_complete_idx > VAR_5->tx_idx - VAR_0 +2){


   FUNC_4 (VAR_4);
  }
 }
 return 0;
}
