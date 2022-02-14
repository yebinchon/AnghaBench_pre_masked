
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ type; int weight; int maxweight; int minweight; struct TYPE_6__* next; struct TYPE_6__* child; } ;
typedef TYPE_1__ fuzzyseperator_t ;
struct TYPE_7__ {int (* Print ) (int ,char*) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_2__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*) ;

int FUNC_3(fuzzyseperator_t *VAR_5, fuzzyseperator_t *VAR_6,
        fuzzyseperator_t *VAR_7)
{
 if (VAR_5->child)
 {
  if (!VAR_6->child || !VAR_7->child)
  {
   VAR_2.Print(VAR_0, "cannot interbreed weight configs, unequal child\n");
   return VAR_3;
  }
  if (!FUNC_3(VAR_6->child, VAR_6->child, VAR_7->child))
  {
   return VAR_3;
  }
 }
 else if (VAR_5->type == VAR_1)
 {
  if (VAR_6->type != VAR_1 || VAR_7->type != VAR_1)
  {
   VAR_2.Print(VAR_0, "cannot interbreed weight configs, unequal balance\n");
   return VAR_3;
  }
  VAR_7->weight = (VAR_5->weight + VAR_6->weight) / 2;
  if (VAR_7->weight > VAR_7->maxweight) VAR_7->maxweight = VAR_7->weight;
  if (VAR_7->weight > VAR_7->minweight) VAR_7->minweight = VAR_7->weight;
 }
 if (VAR_5->next)
 {
  if (!VAR_6->next || !VAR_7->next)
  {
   VAR_2.Print(VAR_0, "cannot interbreed weight configs, unequal next\n");
   return VAR_3;
  }
  if (!FUNC_3(VAR_5->next, VAR_6->next, VAR_7->next))
  {
   return VAR_3;
  }
 }
 return VAR_4;
}
