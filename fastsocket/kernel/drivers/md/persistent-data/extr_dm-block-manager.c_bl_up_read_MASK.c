
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct block_lock {scalar_t__ count; int lock; int waiters; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct block_lock*,int ) ;
 int FUNC_2 (struct block_lock*) ;
 int VAR_0 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct block_lock *VAR_1)
{
 FUNC_4(&VAR_1->lock);
 FUNC_0(VAR_1->count <= 0);
 FUNC_1(VAR_1, VAR_0);
 --VAR_1->count;
 if (!FUNC_3(&VAR_1->waiters))
  FUNC_2(VAR_1);
 FUNC_5(&VAR_1->lock);
}
