
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int instr_time ;
typedef int QueryEnvironment ;
typedef int Query ;
typedef int PlannedStmt ;
typedef int ParamListInfo ;
typedef int IntoClause ;
typedef int ExplainState ;


 int FUNC_0 (int *,int *,int *,char const*,int ,int *,int *) ;
 int FUNC_1 (int *,int,int *,int *,char const*,int ,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int * FUNC_4 (int *,int,int ) ;
 int FUNC_5 (int *,int,int *,int *,char const*,int ,int *) ;

__attribute__((used)) static void
FUNC_6(Query *VAR_0, int VAR_1,
    IntoClause *VAR_2, ExplainState *VAR_3,
    const char *VAR_4, ParamListInfo VAR_5,
    QueryEnvironment *VAR_6)
{

 if (&FUNC_1)
 {
  FUNC_1) (VAR_0, VAR_1, VAR_2, VAR_3,
         VAR_4, VAR_5, VAR_6);
 }
 else
 {
  PlannedStmt *VAR_7;
  instr_time VAR_8,
     VAR_9;

  FUNC_2(VAR_8);


  VAR_7 = FUNC_4(VAR_0, VAR_1, VAR_5);

  FUNC_2(VAR_9);
  FUNC_3(VAR_9, VAR_8);


  FUNC_0(VAR_7, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6,
        &VAR_9);
 }
}
