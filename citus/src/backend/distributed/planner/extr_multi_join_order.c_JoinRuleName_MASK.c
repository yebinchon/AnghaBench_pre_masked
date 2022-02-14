
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t JoinRuleType ;


 int FUNC_0 (int ) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 char** VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 char* FUNC_1 (char*) ;

__attribute__((used)) static char *
FUNC_2(JoinRuleType VAR_7)
{
 static bool VAR_8 = 0;
 char *VAR_9 = ((void*)0);

 if (!VAR_8)
 {

  VAR_4[VAR_3] = FUNC_1("reference join");
  VAR_4[VAR_2] = FUNC_1("local partition join");
  VAR_4[VAR_5] =
   FUNC_1("single hash partition join");
  VAR_4[VAR_6] =
   FUNC_1("single range partition join");
  VAR_4[VAR_1] = FUNC_1("dual partition join");
  VAR_4[VAR_0] = FUNC_1("cartesian product");

  VAR_8 = 1;
 }

 VAR_9 = VAR_4[VAR_7];
 FUNC_0(VAR_9 != ((void*)0));

 return VAR_9;
}
