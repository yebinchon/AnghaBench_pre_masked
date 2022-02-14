
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int * leftChildNode; } ;
struct TYPE_9__ {int * childNode; } ;
typedef TYPE_1__ MultiUnaryNode ;
typedef int MultiNode ;
typedef TYPE_2__ MultiBinaryNode ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *,int *,int *) ;
 int FUNC_3 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int *) ;
 int FUNC_5 (TYPE_2__*,int *) ;
 int FUNC_6 (TYPE_2__*,int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void
FUNC_8(MultiUnaryNode *VAR_0)
{
 MultiNode *VAR_1 = FUNC_1((MultiNode *) VAR_0);
 bool VAR_2 = FUNC_7(VAR_1);
 bool VAR_3 = FUNC_0(VAR_1);

 if (VAR_2)
 {

  MultiUnaryNode *VAR_4 = (MultiUnaryNode *) VAR_1;
  FUNC_3(VAR_4, VAR_0);
 }
 else if (VAR_3)
 {
  MultiBinaryNode *VAR_5 = (MultiBinaryNode *) VAR_1;
  MultiNode *VAR_6 = FUNC_1((MultiNode *) VAR_5);
  MultiNode *VAR_7 = VAR_0->childNode;


  if (VAR_5->leftChildNode == ((MultiNode *) VAR_0))
  {
   FUNC_5(VAR_5, VAR_7);
  }
  else
  {
   FUNC_6(VAR_5, VAR_7);
  }


  FUNC_2(VAR_6, VAR_1, (MultiNode *) VAR_0);


  FUNC_4(VAR_0, VAR_1);
 }
}
