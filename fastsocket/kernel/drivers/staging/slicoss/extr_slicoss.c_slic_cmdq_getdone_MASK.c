
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; int lock; } ;
struct slic_cmdqueue {TYPE_1__ lock; scalar_t__ count; int * tail; int * head; } ;
struct adapter {struct slic_cmdqueue cmdq_free; struct slic_cmdqueue cmdq_done; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static void FUNC_3(struct adapter *VAR_0)
{
 struct slic_cmdqueue *VAR_1 = &VAR_0->cmdq_done;
 struct slic_cmdqueue *VAR_2 = &VAR_0->cmdq_free;

 FUNC_0(VAR_2->head == ((void*)0));
 FUNC_1(&VAR_1->lock.lock, VAR_1->lock.flags);

 VAR_2->head = VAR_1->head;
 VAR_2->count = VAR_1->count;
 VAR_1->head = ((void*)0);
 VAR_1->tail = ((void*)0);
 VAR_1->count = 0;
 FUNC_2(&VAR_1->lock.lock, VAR_1->lock.flags);
}
