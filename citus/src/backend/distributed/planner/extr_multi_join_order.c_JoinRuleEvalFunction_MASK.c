
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * RuleEvalFunction ;
typedef size_t JoinRuleType ;


 int FUNC_0 (int ) ;
 size_t VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int ** VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 int VAR_11 ;

__attribute__((used)) static RuleEvalFunction
FUNC_1(JoinRuleType VAR_12)
{
 static bool VAR_13 = 0;
 RuleEvalFunction VAR_14 = ((void*)0);

 if (!VAR_13)
 {
  VAR_8[VAR_6] = &VAR_7;
  VAR_8[VAR_4] = &VAR_5;
  VAR_8[VAR_10] = &VAR_11;
  VAR_8[VAR_9] = &VAR_11;
  VAR_8[VAR_2] = &VAR_3;
  VAR_8[VAR_0] = &VAR_1;

  VAR_13 = 1;
 }

 VAR_14 = VAR_8[VAR_12];
 FUNC_0(VAR_14 != ((void*)0));

 return VAR_14;
}
