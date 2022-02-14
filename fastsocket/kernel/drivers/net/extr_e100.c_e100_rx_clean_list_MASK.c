
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rx {scalar_t__ skb; int dma_addr; } ;
struct TYPE_3__ {unsigned int count; } ;
struct TYPE_4__ {TYPE_1__ rfds; } ;
struct nic {int * rx_to_clean; int rx_to_use; struct rx* rxs; int pdev; int ru_running; TYPE_2__ params; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct rx*) ;
 int FUNC_2 (int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct nic *VAR_3)
{
 struct rx *VAR_4;
 unsigned int VAR_5, VAR_6 = VAR_3->params.rfds.count;

 VAR_3->ru_running = VAR_2;

 if (VAR_3->rxs) {
  for (VAR_4 = VAR_3->rxs, VAR_5 = 0; VAR_5 < VAR_6; VAR_4++, VAR_5++) {
   if (VAR_4->skb) {
    FUNC_2(VAR_3->pdev, VAR_4->dma_addr,
     VAR_1, VAR_0);
    FUNC_0(VAR_4->skb);
   }
  }
  FUNC_1(VAR_3->rxs);
  VAR_3->rxs = ((void*)0);
 }

 VAR_3->rx_to_use = *(VAR_3->rx_to_clean = ((void*)0));
}
