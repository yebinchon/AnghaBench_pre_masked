
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * leftChildNode; } ;
typedef int MultiUnaryNode ;
typedef int MultiNode ;
typedef TYPE_1__ MultiBinaryNode ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (TYPE_1__*,int *) ;
 int FUNC_3 (TYPE_1__*,int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5(MultiNode *VAR_0, MultiNode *VAR_1,
      MultiNode *VAR_2)
{
 bool VAR_3 = FUNC_4(VAR_0);
 bool VAR_4 = FUNC_0(VAR_0);

 if (VAR_3)
 {
  MultiUnaryNode *VAR_5 = (MultiUnaryNode *) VAR_0;
  FUNC_1(VAR_5, VAR_2);
 }
 else if (VAR_4)
 {
  MultiBinaryNode *VAR_6 = (MultiBinaryNode *) VAR_0;


  if (VAR_6->leftChildNode == VAR_1)
  {
   FUNC_2(VAR_6, VAR_2);
  }
  else
  {
   FUNC_3(VAR_6, VAR_2);
  }
 }
}
