
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct waiter {int wants_write; int list; int task; } ;
struct block_lock {int count; int lock; int waiters; } ;


 int FUNC_0 (struct block_lock*,int ) ;
 int FUNC_1 (struct block_lock*) ;
 int FUNC_2 (struct waiter*) ;
 int VAR_0 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct block_lock *VAR_1)
{
 int VAR_2;
 struct waiter VAR_3;

 FUNC_7(&VAR_1->lock);
 VAR_2 = FUNC_1(VAR_1);
 if (VAR_2) {
  FUNC_8(&VAR_1->lock);
  return VAR_2;
 }

 if (VAR_1->count == 0 && FUNC_5(&VAR_1->waiters)) {
  VAR_1->count = -1;
  FUNC_0(VAR_1, VAR_0);
  FUNC_8(&VAR_1->lock);
  return 0;
 }

 FUNC_3(VAR_0);
 VAR_3.task = VAR_0;
 VAR_3.wants_write = 1;





 FUNC_4(&VAR_3.list, &VAR_1->waiters);
 FUNC_8(&VAR_1->lock);

 FUNC_2(&VAR_3);
 FUNC_6(VAR_0);

 return 0;
}
