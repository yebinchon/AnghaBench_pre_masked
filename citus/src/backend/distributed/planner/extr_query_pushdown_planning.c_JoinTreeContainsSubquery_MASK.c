
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * jointree; } ;
typedef TYPE_1__ Query ;
typedef int Node ;
typedef int FromExpr ;


 int FUNC_0 (int *,TYPE_1__*) ;

bool
FUNC_1(Query *VAR_0)
{
 FromExpr *VAR_1 = VAR_0->jointree;

 if (!VAR_1)
 {
  return 0;
 }

 return FUNC_0((Node *) VAR_1, VAR_0);
}
