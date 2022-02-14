
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* righttree; struct TYPE_4__* lefttree; } ;
typedef TYPE_1__ Plan ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static bool
FUNC_1(Plan *VAR_0)
{
 if (VAR_0 == ((void*)0))
 {
  return 0;
 }

 if (FUNC_0(VAR_0))
 {
  return 1;
 }

 if (VAR_0->lefttree != ((void*)0) && FUNC_1(VAR_0->lefttree))
 {
  return 1;
 }

 if (VAR_0->righttree != ((void*)0) && FUNC_1(VAR_0->righttree))
 {
  return 1;
 }

 return 0;
}
