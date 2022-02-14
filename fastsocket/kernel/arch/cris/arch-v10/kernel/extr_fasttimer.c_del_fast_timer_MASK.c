
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fast_timer {int * prev; int next; } ;


 int FUNC_0 (struct fast_timer*) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long) ;

int FUNC_3(struct fast_timer * VAR_0)
{
  unsigned long VAR_1;
  int VAR_2;

  FUNC_2(VAR_1);
  VAR_2 = FUNC_0(VAR_0);
  VAR_0->next = *(VAR_0->prev = ((void*)0));
  FUNC_1(VAR_1);
  return VAR_2;
}
