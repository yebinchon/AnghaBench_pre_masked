
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int * quals; } ;
struct TYPE_4__ {TYPE_2__* jointree; } ;
typedef TYPE_1__ Query ;
typedef int Node ;
typedef int List ;
typedef TYPE_2__ FromExpr ;


 int FUNC_0 (int *,int **) ;
 int * VAR_0 ;

__attribute__((used)) static List *
FUNC_1(Query *VAR_1)
{
 FromExpr *VAR_2 = VAR_1->jointree;
 Node *VAR_3 = ((void*)0);
 List *VAR_4 = VAR_0;

 if (!VAR_2)
 {
  return VAR_0;
 }

 VAR_3 = VAR_2->quals;
 FUNC_0(VAR_3, &VAR_4);

 return VAR_4;
}
