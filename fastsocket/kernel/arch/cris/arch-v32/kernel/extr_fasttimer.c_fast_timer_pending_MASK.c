
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fast_timer {int * prev; int * next; } ;


 struct fast_timer const* VAR_0 ;

__attribute__((used)) static inline int FUNC_0 (const struct fast_timer * VAR_1)
{
  return (VAR_1->next != ((void*)0)) || (VAR_1->prev != ((void*)0)) || (VAR_1 == VAR_0);
}
