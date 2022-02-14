
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_pub {int dummy; } ;
struct dma_info {int txdalign; int rxdalign; struct dma_info* rxp; struct dma_info* txp; int rxdpaorig; scalar_t__ rxd64; int rxdalloc; int dmadev; int txdpaorig; scalar_t__ txd64; int txdalloc; int name; int core; } ;
typedef int s8 ;


 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ,int ,int *,int ) ;
 int FUNC_2 (struct dma_info*) ;

void FUNC_3(struct dma_pub *VAR_0)
{
 struct dma_info *VAR_1 = (struct dma_info *)VAR_0;

 FUNC_0(VAR_1->core, "%s:\n", VAR_1->name);


 if (VAR_1->txd64)
  FUNC_1(VAR_1->dmadev, VAR_1->txdalloc,
      ((s8 *)VAR_1->txd64 - VAR_1->txdalign),
      (VAR_1->txdpaorig));
 if (VAR_1->rxd64)
  FUNC_1(VAR_1->dmadev, VAR_1->rxdalloc,
      ((s8 *)VAR_1->rxd64 - VAR_1->rxdalign),
      (VAR_1->rxdpaorig));


 FUNC_2(VAR_1->txp);
 FUNC_2(VAR_1->rxp);


 FUNC_2(VAR_1);

}
