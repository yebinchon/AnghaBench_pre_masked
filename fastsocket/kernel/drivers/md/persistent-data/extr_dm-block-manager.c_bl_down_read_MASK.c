
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct waiter {int list; scalar_t__ wants_write; int task; } ;
struct block_lock {int lock; int waiters; int count; } ;


 int FUNC_0 (struct block_lock*,int ) ;
 scalar_t__ FUNC_1 (struct block_lock*) ;
 int FUNC_2 (struct block_lock*) ;
 int FUNC_3 (struct waiter*) ;
 int VAR_0 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct block_lock *VAR_1)
{
 int VAR_2;
 struct waiter VAR_3;

 FUNC_7(&VAR_1->lock);
 VAR_2 = FUNC_2(VAR_1);
 if (VAR_2) {
  FUNC_8(&VAR_1->lock);
  return VAR_2;
 }

 if (FUNC_1(VAR_1)) {
  VAR_1->count++;
  FUNC_0(VAR_1, VAR_0);
  FUNC_8(&VAR_1->lock);
  return 0;
 }

 FUNC_4(VAR_0);

 VAR_3.task = VAR_0;
 VAR_3.wants_write = 0;
 FUNC_5(&VAR_3.list, &VAR_1->waiters);
 FUNC_8(&VAR_1->lock);

 FUNC_3(&VAR_3);
 FUNC_6(VAR_0);
 return 0;
}
