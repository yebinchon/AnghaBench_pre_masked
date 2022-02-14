
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct savestate_state {scalar_t__ pos; scalar_t__ size; } ;



size_t FUNC_0(void *VAR_0)
{
 struct savestate_state *VAR_1 = VAR_0;

 return VAR_1->pos >= VAR_1->size;
}
