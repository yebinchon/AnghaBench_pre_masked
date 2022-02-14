
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct rx {int dma_addr; TYPE_3__* skb; struct rx* prev; struct rx* next; } ;
struct rfd {scalar_t__ size; int command; } ;
struct TYPE_4__ {unsigned int count; } ;
struct TYPE_5__ {TYPE_1__ rfds; } ;
struct nic {int ru_running; struct rx* rxs; struct rx* rx_to_clean; struct rx* rx_to_use; int pdev; TYPE_2__ params; } ;
struct TYPE_6__ {scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct nic*,struct rx*) ;
 int FUNC_2 (struct nic*) ;
 struct rx* FUNC_3 (unsigned int,int,int ) ;
 int FUNC_4 (int ,int ,int,int ) ;

__attribute__((used)) static int FUNC_5(struct nic *VAR_6)
{
 struct rx *VAR_7;
 unsigned int VAR_8, VAR_9 = VAR_6->params.rfds.count;
 struct rfd *VAR_10;

 VAR_6->rx_to_use = VAR_6->rx_to_clean = ((void*)0);
 VAR_6->ru_running = VAR_4;

 if (!(VAR_6->rxs = FUNC_3(VAR_9, sizeof(struct rx), VAR_1)))
  return -VAR_0;

 for (VAR_7 = VAR_6->rxs, VAR_8 = 0; VAR_8 < VAR_9; VAR_7++, VAR_8++) {
  VAR_7->next = (VAR_8 + 1 < VAR_9) ? VAR_7 + 1 : VAR_6->rxs;
  VAR_7->prev = (VAR_8 == 0) ? VAR_6->rxs + VAR_9 - 1 : VAR_7 - 1;
  if (FUNC_1(VAR_6, VAR_7)) {
   FUNC_2(VAR_6);
   return -VAR_0;
  }
 }







 VAR_7 = VAR_6->rxs->prev->prev;
 VAR_10 = (struct rfd *)VAR_7->skb->data;
 VAR_10->command |= FUNC_0(VAR_5);
 VAR_10->size = 0;
 FUNC_4(VAR_6->pdev, VAR_7->dma_addr,
  sizeof(struct rfd), VAR_2);

 VAR_6->rx_to_use = VAR_6->rx_to_clean = VAR_6->rxs;
 VAR_6->ru_running = VAR_3;

 return 0;
}
