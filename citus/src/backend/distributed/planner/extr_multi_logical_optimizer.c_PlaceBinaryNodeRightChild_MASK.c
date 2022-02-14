
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int rightChildNode; } ;
typedef int MultiUnaryNode ;
typedef int MultiNode ;
typedef TYPE_1__ MultiBinaryNode ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (TYPE_1__*,int *) ;

__attribute__((used)) static void
FUNC_2(MultiBinaryNode *VAR_0, MultiUnaryNode *VAR_1)
{
 if (VAR_1 == ((void*)0))
 {
  return;
 }

 FUNC_0(VAR_1, VAR_0->rightChildNode);
 FUNC_1(VAR_0, (MultiNode *) VAR_1);
}
