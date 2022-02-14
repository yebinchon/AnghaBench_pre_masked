
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct slic_hostcmd {struct slic_hostcmd* next; scalar_t__ busy; } ;
struct TYPE_2__ {int lock; } ;
struct slic_cmdqueue {int count; TYPE_1__ lock; struct slic_hostcmd* head; } ;
struct adapter {int netdev; scalar_t__ xmitq_full; struct slic_cmdqueue cmdq_done; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct adapter *VAR_0,
    struct slic_hostcmd *VAR_1)
{
 struct slic_cmdqueue *VAR_2 = &VAR_0->cmdq_done;

 FUNC_1(&VAR_2->lock.lock);
 VAR_1->busy = 0;
 VAR_1->next = VAR_2->head;
 VAR_2->head = VAR_1;
 VAR_2->count++;
 if ((VAR_0->xmitq_full) && (VAR_2->count > 10))
  FUNC_0(VAR_0->netdev);
 FUNC_2(&VAR_2->lock.lock);
}
