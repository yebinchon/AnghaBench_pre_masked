
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {int queryString; int * taskPlacementList; } ;
typedef TYPE_1__ Task ;
struct TYPE_16__ {int pgConn; } ;
struct TYPE_15__ {int placementIndex; int explainOutputList; } ;
struct TYPE_14__ {int data; } ;
typedef TYPE_2__* StringInfo ;
typedef int ShardPlacement ;
typedef TYPE_3__ RemoteExplainPlan ;
typedef int PGresult ;
typedef TYPE_4__ MultiConnection ;
typedef int List ;
typedef int ExplainState ;


 int FUNC_0 () ;
 TYPE_2__* FUNC_1 (int ,int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (TYPE_4__*,char*) ;
 int FUNC_3 (TYPE_4__*,int ,int **) ;
 int FUNC_4 (TYPE_4__*) ;
 TYPE_4__* FUNC_5 (int,int *,int *) ;
 int VAR_1 ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (TYPE_4__*) ;
 int FUNC_10 (int *) ;
 int * FUNC_11 (int *,int) ;
 scalar_t__ FUNC_12 (int) ;

__attribute__((used)) static RemoteExplainPlan *
FUNC_13(Task *VAR_2, ExplainState *VAR_3)
{
 StringInfo VAR_4 = ((void*)0);
 List *VAR_5 = VAR_2->taskPlacementList;
 int VAR_6 = FUNC_10(VAR_5);
 int VAR_7 = 0;
 RemoteExplainPlan *VAR_8 = ((void*)0);

 VAR_8 = (RemoteExplainPlan *) FUNC_12(sizeof(RemoteExplainPlan));
 VAR_4 = FUNC_1(VAR_2->queryString, VAR_3);





 FUNC_0();

 for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++)
 {
  ShardPlacement *VAR_9 = FUNC_11(VAR_5, VAR_7);
  MultiConnection *VAR_10 = ((void*)0);
  PGresult *VAR_11 = ((void*)0);
  int VAR_12 = 0;
  int VAR_13 = 0;

  VAR_8->placementIndex = VAR_7;

  VAR_10 = FUNC_5(VAR_12, VAR_9, ((void*)0));


  if (FUNC_7(VAR_10->pgConn) != VAR_0)
  {
   continue;
  }

  FUNC_9(VAR_10);






  FUNC_2(VAR_10, "SAVEPOINT citus_explain_savepoint");


  VAR_13 = FUNC_3(VAR_10, VAR_4->data,
              &VAR_11);
  if (VAR_13 != 0)
  {
   FUNC_6(VAR_11);
   FUNC_4(VAR_10);

   continue;
  }


  VAR_8->explainOutputList = FUNC_8(VAR_11);

  FUNC_6(VAR_11);
  FUNC_4(VAR_10);


  FUNC_2(VAR_10,
          "ROLLBACK TO SAVEPOINT citus_explain_savepoint");

  if (VAR_8->explainOutputList != VAR_1)
  {
   break;
  }
 }

 return VAR_8;
}
