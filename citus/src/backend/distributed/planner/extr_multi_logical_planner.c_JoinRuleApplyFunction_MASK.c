
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * RuleApplyFunction ;
typedef size_t JoinRuleType ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 int ** VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;

__attribute__((used)) static RuleApplyFunction
FUNC_1(JoinRuleType VAR_13)
{
 static bool VAR_14 = 0;
 RuleApplyFunction VAR_15 = ((void*)0);

 if (!VAR_14)
 {
  VAR_10[VAR_9] = &VAR_3;
  VAR_10[VAR_8] = &VAR_2;
  VAR_10[VAR_11] =
   &VAR_4;
  VAR_10[VAR_12] =
   &VAR_5;
  VAR_10[VAR_7] = &VAR_1;
  VAR_10[VAR_6] = &VAR_0;

  VAR_14 = 1;
 }

 VAR_15 = VAR_10[VAR_13];
 FUNC_0(VAR_15 != ((void*)0));

 return VAR_15;
}
