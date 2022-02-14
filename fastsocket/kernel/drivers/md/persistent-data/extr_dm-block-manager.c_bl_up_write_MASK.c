
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct block_lock {int lock; int waiters; scalar_t__ count; } ;


 int FUNC_0 (struct block_lock*,int ) ;
 int FUNC_1 (struct block_lock*) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct block_lock *VAR_1)
{
 FUNC_3(&VAR_1->lock);
 FUNC_0(VAR_1, VAR_0);
 VAR_1->count = 0;
 if (!FUNC_2(&VAR_1->waiters))
  FUNC_1(VAR_1);
 FUNC_4(&VAR_1->lock);
}
