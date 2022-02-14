
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int * childNode; } ;
typedef scalar_t__ PushDownStatus ;
typedef TYPE_1__ MultiUnaryNode ;
typedef int MultiNode ;
typedef int MultiBinaryNode ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (TYPE_1__*,TYPE_1__*) ;
 scalar_t__ FUNC_3 (TYPE_1__*,int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_4 (int *) ;

__attribute__((used)) static PushDownStatus
FUNC_5(MultiUnaryNode *VAR_1)
{
 PushDownStatus VAR_2 = VAR_0;
 MultiNode *VAR_3 = VAR_1->childNode;
 bool VAR_4 = FUNC_4(VAR_3);
 bool VAR_5 = FUNC_1(VAR_3);

 if (VAR_4)
 {
  VAR_2 = FUNC_2(VAR_1, (MultiUnaryNode *) VAR_3);
 }
 else if (VAR_5)
 {
  VAR_2 = FUNC_3(VAR_1, (MultiBinaryNode *) VAR_3);
 }

 FUNC_0(VAR_2 != VAR_0);
 return VAR_2;
}
