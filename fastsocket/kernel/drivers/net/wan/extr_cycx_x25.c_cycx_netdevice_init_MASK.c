
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wan_device {int maddr; int msize; int ioport; int dma; int irq; } ;
struct net_device {unsigned long mem_start; unsigned long mem_end; int tx_queue_len; int flags; int base_addr; int dma; int irq; scalar_t__ dev_addr; } ;
struct cycx_x25_channel {int lcn; int svc; struct cycx_device* card; } ;
struct cycx_device {struct wan_device wandev; } ;
typedef int __be16 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct net_device*,int ) ;
 int FUNC_1 (int ) ;
 struct cycx_x25_channel* FUNC_2 (struct net_device*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_2)
{
 struct cycx_x25_channel *VAR_3 = FUNC_2(VAR_2);
 struct cycx_device *VAR_4 = VAR_3->card;
 struct wan_device *VAR_5 = &VAR_4->wandev;

 if (!VAR_3->svc)
  *(__be16*)VAR_2->dev_addr = FUNC_1(VAR_3->lcn);


 VAR_2->irq = VAR_5->irq;
 VAR_2->dma = VAR_5->dma;
 VAR_2->base_addr = VAR_5->ioport;
 VAR_2->mem_start = (unsigned long)VAR_5->maddr;
 VAR_2->mem_end = (unsigned long)(VAR_5->maddr +
        VAR_5->msize - 1);
 VAR_2->flags |= VAR_0;


 VAR_2->tx_queue_len = 10;


 FUNC_0(VAR_2, VAR_1);

 return 0;
}
