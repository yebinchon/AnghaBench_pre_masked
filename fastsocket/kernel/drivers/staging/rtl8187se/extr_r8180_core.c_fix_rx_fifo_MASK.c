
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct r8180_priv {int* rxring; int rxringcount; int rxbuffersize; int* rxringtail; int rx_skb_complete; struct buffer* rxbufferhead; struct buffer* rxbuffer; } ;
struct net_device {int dummy; } ;
struct buffer {int dma; struct buffer* next; } ;


 scalar_t__ FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;

void FUNC_2(struct net_device *VAR_0)
{
 struct r8180_priv *VAR_1 = (struct r8180_priv *)FUNC_0(VAR_0);
 u32 *VAR_2;
 struct buffer *VAR_3;
 u8 VAR_4;

 VAR_4 = 8;

 for (VAR_2=VAR_1->rxring, VAR_3=VAR_1->rxbufferhead;
      (VAR_2 < (VAR_1->rxring)+(VAR_1->rxringcount)*VAR_4);
      VAR_2+=VAR_4,VAR_3=VAR_3->next){
  *(VAR_2+2) = VAR_3->dma;
  *VAR_2=*VAR_2 &~ 0xfff;
  *VAR_2=*VAR_2 | VAR_1->rxbuffersize;
  *VAR_2 |= (1<<31);
 }

 VAR_1->rxringtail=VAR_1->rxring;
 VAR_1->rxbuffer=VAR_1->rxbufferhead;
 VAR_1->rx_skb_complete=1;
 FUNC_1(VAR_0);
}
