
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sonic_local {int ** rx_skb; void** rx_laddr; int device; int ** tx_skb; void** tx_laddr; int * tx_len; } ;
struct net_device {int dummy; } ;
typedef void* dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,void*,int ,int ) ;
 struct sonic_local* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (char*) ;
 int VAR_9 ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_10)
{
 struct sonic_local *VAR_11 = FUNC_3(VAR_10);
 int VAR_12;

 if (VAR_9 > 2)
  FUNC_5("sonic_close\n");

 FUNC_4(VAR_10);




 FUNC_0(VAR_4, 0);
 FUNC_0(VAR_5, 0x7fff);
 FUNC_0(VAR_2, VAR_3);


 for (VAR_12 = 0; VAR_12 < VAR_7; VAR_12++) {
  if(VAR_11->tx_laddr[VAR_12]) {
   FUNC_2(VAR_11->device, VAR_11->tx_laddr[VAR_12], VAR_11->tx_len[VAR_12], VAR_1);
   VAR_11->tx_laddr[VAR_12] = (dma_addr_t)0;
  }
  if(VAR_11->tx_skb[VAR_12]) {
   FUNC_1(VAR_11->tx_skb[VAR_12]);
   VAR_11->tx_skb[VAR_12] = ((void*)0);
  }
 }


 for (VAR_12 = 0; VAR_12 < VAR_6; VAR_12++) {
  if(VAR_11->rx_laddr[VAR_12]) {
   FUNC_2(VAR_11->device, VAR_11->rx_laddr[VAR_12], VAR_8, VAR_0);
   VAR_11->rx_laddr[VAR_12] = (dma_addr_t)0;
  }
  if(VAR_11->rx_skb[VAR_12]) {
   FUNC_1(VAR_11->rx_skb[VAR_12]);
   VAR_11->rx_skb[VAR_12] = ((void*)0);
  }
 }

 return 0;
}
