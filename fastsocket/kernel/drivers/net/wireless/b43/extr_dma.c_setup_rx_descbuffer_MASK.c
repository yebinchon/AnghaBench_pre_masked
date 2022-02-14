
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int data; } ;
struct b43_dmaring {int rx_buffersize; TYPE_2__* ops; TYPE_1__* dev; int tx; } ;
struct b43_dmadesc_meta {int dmaaddr; struct sk_buff* skb; } ;
struct b43_dmadesc_generic {int dummy; } ;
typedef int gfp_t ;
typedef int dma_addr_t ;
struct TYPE_4__ {int (* fill_descriptor ) (struct b43_dmaring*,struct b43_dmadesc_generic*,int ,int ,int ,int ,int ) ;} ;
struct TYPE_3__ {int wl; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct sk_buff* FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (struct b43_dmaring*,int ,int ,int ) ;
 int FUNC_3 (struct b43_dmaring*,struct sk_buff*) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct b43_dmaring*,int ,int ,int ) ;
 int FUNC_7 (struct b43_dmaring*,struct b43_dmadesc_generic*,int ,int ,int ,int ,int ) ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static int FUNC_9(struct b43_dmaring *VAR_3,
          struct b43_dmadesc_generic *VAR_4,
          struct b43_dmadesc_meta *VAR_5, gfp_t VAR_6)
{
 dma_addr_t VAR_7;
 struct sk_buff *VAR_8;

 FUNC_0(VAR_3->tx);

 VAR_8 = FUNC_1(VAR_3->rx_buffersize, VAR_6);
 if (FUNC_8(!VAR_8))
  return -VAR_1;
 FUNC_3(VAR_3, VAR_8);
 VAR_7 = FUNC_6(VAR_3, VAR_8->data, VAR_3->rx_buffersize, 0);
 if (FUNC_2(VAR_3, VAR_7, VAR_3->rx_buffersize, 0)) {

  VAR_6 |= VAR_2;

  FUNC_5(VAR_8);

  VAR_8 = FUNC_1(VAR_3->rx_buffersize, VAR_6);
  if (FUNC_8(!VAR_8))
   return -VAR_1;
  FUNC_3(VAR_3, VAR_8);
  VAR_7 = FUNC_6(VAR_3, VAR_8->data,
      VAR_3->rx_buffersize, 0);
  if (FUNC_2(VAR_3, VAR_7, VAR_3->rx_buffersize, 0)) {
   FUNC_4(VAR_3->dev->wl, "RX DMA buffer allocation failed\n");
   FUNC_5(VAR_8);
   return -VAR_0;
  }
 }

 VAR_5->skb = VAR_8;
 VAR_5->dmaaddr = VAR_7;
 VAR_3->ops->fill_descriptor(VAR_3, VAR_4, VAR_7,
       VAR_3->rx_buffersize, 0, 0, 0);

 return 0;
}
