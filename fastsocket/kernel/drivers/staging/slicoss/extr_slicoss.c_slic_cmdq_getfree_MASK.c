
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct slic_hostcmd {struct slic_hostcmd* next; } ;
struct TYPE_2__ {int flags; int lock; } ;
struct slic_cmdqueue {TYPE_1__ lock; struct slic_hostcmd* head; int count; } ;
struct adapter {struct slic_cmdqueue cmdq_free; } ;


 int FUNC_0 (struct adapter*,int *) ;
 int FUNC_1 (struct adapter*) ;
 int * FUNC_2 (struct adapter*) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ) ;

__attribute__((used)) static struct slic_hostcmd *FUNC_5(struct adapter *VAR_0)
{
 struct slic_cmdqueue *VAR_1 = &VAR_0->cmdq_free;
 struct slic_hostcmd *VAR_2 = ((void*)0);

lock_and_retry:
 FUNC_3(&VAR_1->lock.lock, VAR_1->lock.flags);
retry:
 VAR_2 = VAR_1->head;
 if (VAR_2) {
  VAR_1->head = VAR_2->next;
  VAR_1->count--;
  FUNC_4(&VAR_1->lock.lock, VAR_1->lock.flags);
 } else {
  FUNC_1(VAR_0);
  VAR_2 = VAR_1->head;
  if (VAR_2) {
   goto retry;
  } else {
   u32 *VAR_3;

   FUNC_4(&VAR_1->lock.lock,
      VAR_1->lock.flags);
   VAR_3 = FUNC_2(VAR_0);
   if (VAR_3) {
    FUNC_0(VAR_0, VAR_3);
    goto lock_and_retry;
   }
  }
 }
 return VAR_2;
}
