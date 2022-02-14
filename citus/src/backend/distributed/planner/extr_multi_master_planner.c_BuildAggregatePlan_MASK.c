
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ plan_rows; scalar_t__ total_cost; scalar_t__ startup_cost; } ;
struct TYPE_11__ {TYPE_1__ plan; } ;
struct TYPE_10__ {int havingQual; int * targetList; int * groupClause; scalar_t__ hasAggs; } ;
typedef TYPE_2__ Query ;
typedef int PlannerInfo ;
typedef int Plan ;
typedef int Node ;
typedef int List ;
typedef int AggStrategy ;
typedef int AggClauseCosts ;
typedef TYPE_3__ Agg ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 int FUNC_1 (TYPE_2__*) ;
 int * FUNC_2 (int *,int ,int) ;
 int * FUNC_3 (int *,int *) ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;
 int VAR_5 ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*,char*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int *,int *,int ,int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (int *) ;
 TYPE_3__* FUNC_13 (int *,int *,int ,int *,int *) ;
 scalar_t__ FUNC_14 (int *,int *) ;
 int FUNC_15 (int *,int ,int) ;

__attribute__((used)) static Agg *
FUNC_16(PlannerInfo *VAR_6, Query *VAR_7, Plan *VAR_8)
{

 FUNC_0(VAR_7->hasAggs || VAR_7->groupClause);
 AggClauseCosts VAR_9;
 AggStrategy VAR_10 = VAR_2;
 List *VAR_11 = VAR_7->groupClause;
 List *VAR_12 = VAR_7->targetList;
 Node *VAR_13 = FUNC_2(VAR_6, VAR_7->havingQual, 1);






 VAR_13 = FUNC_3(VAR_6, VAR_13);



 FUNC_15(&VAR_9, 0, sizeof(AggClauseCosts));
 FUNC_9(VAR_6, (Node *) VAR_12, VAR_0,
       &VAR_9);

 FUNC_9(VAR_6, (Node *) VAR_13, VAR_0, &VAR_9);



 if (FUNC_12(VAR_11) > 0)
 {
  bool VAR_14 = FUNC_10(VAR_11);
  bool VAR_15 = FUNC_11(VAR_11);
  bool VAR_16 = FUNC_1(VAR_7);

  if (!VAR_14 && !VAR_15)
  {
   FUNC_5(VAR_4, (FUNC_8("grouped column list cannot be hashed or sorted")));
  }
  if (!VAR_5 || !VAR_14 || VAR_16 ||
   FUNC_4(VAR_7))
  {
   char *VAR_17 = ((void*)0);
   if (!VAR_5 && VAR_14)
   {
    VAR_17 = "Consider setting enable_hashagg to on.";
   }

   if (!VAR_15)
   {
    FUNC_5(VAR_4, (FUNC_8("grouped column list must cannot be sorted"),
        FUNC_6("Having a distinct aggregate requires "
            "grouped column list to be sortable."),
        VAR_17 ? FUNC_7("%s", VAR_17) : 0));
   }

   VAR_10 = VAR_3;
   VAR_8 = (Plan *) FUNC_14(VAR_11, VAR_8);
  }
  else
  {
   VAR_10 = VAR_1;
  }
 }


 Agg *VAR_18 = FUNC_13(VAR_11, (List *) VAR_13,
          VAR_10, VAR_12, VAR_8);


 VAR_18->plan.startup_cost = 0;
 VAR_18->plan.total_cost = 0;
 VAR_18->plan.plan_rows = 0;

 return VAR_18;
}
