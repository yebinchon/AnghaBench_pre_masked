
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct block_lock {scalar_t__ count; int waiters; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(struct block_lock *VAR_1)
{
 return VAR_1->count >= 0 &&
  VAR_1->count < VAR_0 &&
  FUNC_0(&VAR_1->waiters);
}
