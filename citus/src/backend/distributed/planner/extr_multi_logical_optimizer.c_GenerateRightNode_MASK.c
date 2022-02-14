
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * rightChildNode; } ;
typedef int MultiUnaryNode ;
typedef int MultiNode ;
typedef TYPE_1__ MultiBinaryNode ;


 int * FUNC_0 (int *,int *) ;

__attribute__((used)) static MultiUnaryNode *
FUNC_1(MultiUnaryNode *VAR_0, MultiBinaryNode *VAR_1)
{
 MultiNode *VAR_2 = VAR_1->rightChildNode;
 MultiUnaryNode *VAR_3 = FUNC_0(VAR_0, VAR_2);

 return VAR_3;
}
