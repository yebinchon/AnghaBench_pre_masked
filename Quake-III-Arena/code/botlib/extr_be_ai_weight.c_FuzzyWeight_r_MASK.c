
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t index; int value; float weight; struct TYPE_3__* next; struct TYPE_3__* child; } ;
typedef TYPE_1__ fuzzyseperator_t ;



float FUNC_0(int *VAR_0, fuzzyseperator_t *VAR_1)
{
 float VAR_2, VAR_3, VAR_4;

 if (VAR_0[VAR_1->index] < VAR_1->value)
 {
  if (VAR_1->child) return FUNC_0(VAR_0, VAR_1->child);
  else return VAR_1->weight;
 }
 else if (VAR_1->next)
 {
  if (VAR_0[VAR_1->index] < VAR_1->next->value)
  {

   if (VAR_1->child) VAR_3 = FUNC_0(VAR_0, VAR_1->child);
   else VAR_3 = VAR_1->weight;

   if (VAR_1->next->child) VAR_4 = FUNC_0(VAR_0, VAR_1->next->child);
   else VAR_4 = VAR_1->next->weight;

   VAR_2 = (VAR_0[VAR_1->index] - VAR_1->value) / (VAR_1->next->value - VAR_1->value);

   return VAR_2 * VAR_3 + (1 - VAR_2) * VAR_4;
  }
  return FUNC_0(VAR_0, VAR_1->next);
 }
 return VAR_1->weight;
}
