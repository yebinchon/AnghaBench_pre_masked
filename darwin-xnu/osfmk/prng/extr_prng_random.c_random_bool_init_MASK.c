
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bool_gen {unsigned int* seed; int lock; scalar_t__ state; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int *,int ) ;

void
FUNC_2(struct bool_gen * VAR_1)
{

 for (int VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  VAR_1->seed[VAR_2] = (unsigned int)FUNC_0();
 }
 VAR_1->state = 0;
 FUNC_1(&VAR_1->lock, 0);
}
