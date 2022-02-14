
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_dma_desc_tx {struct net_dma_desc_tx* next; int * skb; } ;
struct net_dma_desc_rx {struct net_dma_desc_rx* next; int * skb; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_2 ;
 struct net_dma_desc_rx* VAR_3 ;
 scalar_t__ VAR_4 ;
 struct net_dma_desc_tx* VAR_5 ;

__attribute__((used)) static void FUNC_2(void)
{
 struct net_dma_desc_rx *VAR_6;
 struct net_dma_desc_tx *VAR_7;
 int VAR_8;

 dma_addr_t VAR_9 = 0;


 if (VAR_4) {
  VAR_7 = VAR_5;
  for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++) {
   if (VAR_7) {
    if (VAR_7->skb) {
     FUNC_1(VAR_7->skb);
     VAR_7->skb = ((void*)0);
    }
    VAR_7 = VAR_7->next;
   }
  }
  FUNC_0(VAR_9, VAR_4);
 }

 if (VAR_2) {
  VAR_6 = VAR_3;
  for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++) {
   if (VAR_6) {
    if (VAR_6->skb) {
     FUNC_1(VAR_6->skb);
     VAR_6->skb = ((void*)0);
    }
    VAR_6 = VAR_6->next;
   }
  }
  FUNC_0(VAR_9, VAR_2);
 }
}
