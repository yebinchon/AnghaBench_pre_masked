
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * leftChildNode; } ;
typedef int MultiUnaryNode ;
typedef int MultiTreeRoot ;
typedef int MultiNode ;
typedef TYPE_1__ MultiBinaryNode ;


 scalar_t__ FUNC_0 (int *) ;
 int * FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;

__attribute__((used)) static MultiNode *
FUNC_3(MultiTreeRoot *VAR_0)
{
 MultiNode *VAR_1 = (MultiNode *) VAR_0;
 MultiNode *VAR_2 = FUNC_1((MultiUnaryNode *) VAR_0);

 while (VAR_2 != ((void*)0))
 {
  VAR_1 = VAR_2;

  if (FUNC_2(VAR_1))
  {
   VAR_2 = FUNC_1((MultiUnaryNode *) VAR_1);
  }
  else if (FUNC_0(VAR_1))
  {
   MultiBinaryNode *VAR_3 = (MultiBinaryNode *) VAR_1;
   VAR_2 = VAR_3->leftChildNode;
  }
 }

 return VAR_1;
}
