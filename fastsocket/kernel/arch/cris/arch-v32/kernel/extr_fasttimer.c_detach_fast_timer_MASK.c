
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fast_timer {struct fast_timer* next; struct fast_timer* prev; } ;


 struct fast_timer* VAR_0 ;
 int FUNC_0 (struct fast_timer*) ;
 int VAR_1 ;

__attribute__((used)) static inline int FUNC_1 (struct fast_timer *VAR_2)
{
  struct fast_timer *VAR_3, *VAR_4;
  if (!FUNC_0(VAR_2))
    return 0;
  VAR_3 = VAR_2->next;
  VAR_4 = VAR_2->prev;
  if (VAR_3)
    VAR_3->prev = VAR_4;
  if (VAR_4)
    VAR_4->next = VAR_3;
  else
    VAR_0 = VAR_3;
  VAR_1++;
  return 1;
}
