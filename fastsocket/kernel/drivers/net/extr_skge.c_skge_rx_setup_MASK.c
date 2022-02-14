
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct skge_rx_desc {int dma_lo; int dma_hi; unsigned int control; scalar_t__ csum2; scalar_t__ csum1; void* csum2_start; void* csum1_start; } ;
struct skge_port {TYPE_1__* hw; } ;
struct skge_element {struct sk_buff* skb; struct skge_rx_desc* desc; } ;
struct sk_buff {int data; } ;
struct TYPE_2__ {int pdev; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int ,unsigned int,int ) ;
 int FUNC_1 (struct skge_element*,int ,int) ;
 int FUNC_2 (struct skge_element*,int ,unsigned int) ;
 int FUNC_3 () ;

__attribute__((used)) static void FUNC_4(struct skge_port *VAR_8, struct skge_element *VAR_9,
     struct sk_buff *VAR_10, unsigned int VAR_11)
{
 struct skge_rx_desc *VAR_12 = VAR_9->desc;
 u64 VAR_13;

 VAR_13 = FUNC_0(VAR_8->hw->pdev, VAR_10->data, VAR_11,
        VAR_5);

 VAR_12->dma_lo = VAR_13;
 VAR_12->dma_hi = VAR_13 >> 32;
 VAR_9->skb = VAR_10;
 VAR_12->csum1_start = VAR_4;
 VAR_12->csum2_start = VAR_4;
 VAR_12->csum1 = 0;
 VAR_12->csum2 = 0;

 FUNC_3();

 VAR_12->control = VAR_1 | VAR_2 | VAR_0 | VAR_3 | VAR_11;
 FUNC_1(VAR_9, VAR_6, VAR_13);
 FUNC_2(VAR_9, VAR_7, VAR_11);
}
