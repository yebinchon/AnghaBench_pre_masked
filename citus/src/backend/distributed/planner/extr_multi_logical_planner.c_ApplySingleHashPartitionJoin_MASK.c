
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int Var ;
struct TYPE_3__ {int joinRuleType; } ;
typedef int MultiNode ;
typedef TYPE_1__ MultiJoin ;
typedef int List ;
typedef int JoinType ;


 TYPE_1__* FUNC_0 (int *,int *,int *,int ,int *) ;
 int VAR_0 ;

__attribute__((used)) static MultiNode *
FUNC_1(MultiNode *VAR_1, MultiNode *VAR_2,
        Var *VAR_3, JoinType VAR_4,
        List *VAR_5)
{
 MultiJoin *VAR_6 =
  FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4,
         VAR_5);

 VAR_6->joinRuleType = VAR_0;

 return (MultiNode *) VAR_6;
}
