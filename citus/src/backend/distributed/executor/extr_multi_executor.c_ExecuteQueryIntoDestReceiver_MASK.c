
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Query ;
typedef int PlannedStmt ;
typedef int ParamListInfo ;
typedef int DestReceiver ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int *) ;
 int * FUNC_1 (int *,int,int ) ;

void
FUNC_2(Query *VAR_1, ParamListInfo VAR_2, DestReceiver *VAR_3)
{
 PlannedStmt *VAR_4 = ((void*)0);
 int VAR_5 = 0;

 VAR_5 = VAR_0;


 VAR_4 = FUNC_1(VAR_1, VAR_5, VAR_2);

 FUNC_0(VAR_4, VAR_2, VAR_3);
}
