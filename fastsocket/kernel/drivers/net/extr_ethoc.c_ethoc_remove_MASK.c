
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct platform_device {int dummy; } ;
struct net_device {int mem_start; } ;
struct ethoc {int membase; scalar_t__ dma_alloc; TYPE_1__* mdio; int * phy; } ;
struct TYPE_3__ {int irq; } ;


 int FUNC_0 (int *,scalar_t__,int ,int ) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 struct ethoc* FUNC_5 (struct net_device*) ;
 int FUNC_6 (int *) ;
 struct net_device* FUNC_7 (struct platform_device*) ;
 int FUNC_8 (struct platform_device*,int *) ;
 int FUNC_9 (struct net_device*) ;

__attribute__((used)) static int FUNC_10(struct platform_device *VAR_0)
{
 struct net_device *VAR_1 = FUNC_7(VAR_0);
 struct ethoc *VAR_2 = FUNC_5(VAR_1);

 FUNC_8(VAR_0, ((void*)0));

 if (VAR_1) {
  FUNC_6(VAR_2->phy);
  VAR_2->phy = ((void*)0);

  if (VAR_2->mdio) {
   FUNC_4(VAR_2->mdio);
   FUNC_2(VAR_2->mdio->irq);
   FUNC_3(VAR_2->mdio);
  }
  if (VAR_2->dma_alloc)
   FUNC_0(((void*)0), VAR_2->dma_alloc, VAR_2->membase,
    VAR_1->mem_start);
  FUNC_9(VAR_1);
  FUNC_1(VAR_1);
 }

 return 0;
}
