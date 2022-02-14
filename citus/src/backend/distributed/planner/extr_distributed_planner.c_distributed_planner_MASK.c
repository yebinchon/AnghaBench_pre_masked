
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint64 ;
struct TYPE_11__ {TYPE_1__* planTree; } ;
struct TYPE_10__ {int total_cost; } ;
typedef int Query ;
typedef int PlannerRestrictionContext ;
typedef TYPE_2__ PlannedStmt ;
typedef int ParamListInfo ;
typedef int Node ;
typedef int List ;
typedef int DistributedPlan ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 scalar_t__ FUNC_3 () ;
 int * FUNC_4 () ;
 TYPE_2__* FUNC_5 (int ,TYPE_2__*,int *,int *,int ,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_6 (int *) ;
 int VAR_3 ;
 TYPE_2__* FUNC_7 (int *,int *,int ) ;
 scalar_t__ FUNC_8 (int *) ;
 TYPE_2__* FUNC_9 (TYPE_2__*,int *) ;
 scalar_t__ FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int *,int *) ;
 int FUNC_12 (int *) ;
 scalar_t__ FUNC_13 (int *) ;
 int VAR_4 ;
 int FUNC_14 () ;
 int FUNC_15 () ;
 int FUNC_16 () ;
 int FUNC_17 () ;
 int FUNC_18 () ;
 int FUNC_19 (int *) ;
 int * FUNC_20 (int *,int*) ;
 int FUNC_21 (int *,int *) ;
 int * FUNC_22 (int *) ;
 int FUNC_23 (int ,int ) ;
 int FUNC_24 (int ) ;
 int FUNC_25 (char*) ;
 int FUNC_26 (char*) ;
 TYPE_2__* FUNC_27 (int *,int,int ) ;

PlannedStmt *
FUNC_28(Query *VAR_5, int VAR_6, ParamListInfo VAR_7)
{
 PlannedStmt *VAR_8 = ((void*)0);
 bool VAR_9 = 0;
 Query *VAR_10 = ((void*)0);
 PlannerRestrictionContext *VAR_11 = ((void*)0);
 bool VAR_12 = 0;
 List *VAR_13 = FUNC_6(VAR_5);

 if (VAR_6 & VAR_0)
 {

  FUNC_1(FUNC_3());

  VAR_9 = 1;
 }
 else if (FUNC_3())
 {
  if (FUNC_11(VAR_5, VAR_13))
  {





   VAR_9 = 0;
   FUNC_21((Node *) VAR_5, ((void*)0));
  }
  else
  {
   VAR_9 = FUNC_12(VAR_13);
  }
 }

 if (VAR_9)
 {






  if (FUNC_10(VAR_5))
  {
   FUNC_23(VAR_2, (FUNC_26("cannot INSERT rows from a distributed query into a "
           "local table"),
       FUNC_25("Consider using CREATE TEMPORARY TABLE tmp AS "
         "SELECT ... and inserting from the temporary "
         "table.")));
  }
  FUNC_2(VAR_13);
  VAR_10 = FUNC_22(VAR_5);

  VAR_12 = 0;
  FUNC_0(VAR_13,
             VAR_12);
 }





 FUNC_19((Node *) VAR_5);


 VAR_11 = FUNC_4();

 FUNC_17();
 {
  if (VAR_9 && FUNC_8(VAR_10))
  {
   VAR_8 = FUNC_7(VAR_10, VAR_5, VAR_7);
  }
  else
  {
   VAR_8 = FUNC_27(VAR_5, VAR_6, VAR_7);
  }

  if (VAR_9)
  {
   uint64 VAR_14 = VAR_4++;

   VAR_8 = FUNC_5(VAR_14, VAR_8, VAR_10, VAR_5,
              VAR_7, VAR_11);

   VAR_12 = 1;
   FUNC_0(VAR_13,
              VAR_12);
  }
  else
  {
   bool VAR_15 = 0;
   DistributedPlan *VAR_16 = FUNC_20(VAR_5,
                   &VAR_15);
   if (VAR_16 != ((void*)0))
   {
    VAR_8 = FUNC_9(VAR_8, VAR_16);
   }
   else if (VAR_15)
   {




    VAR_8->planTree->total_cost = VAR_3 / 100000000;
   }
  }
 }
 FUNC_14();
 {
  FUNC_18();
  FUNC_16();
 }
 FUNC_15();


 FUNC_18();







 if (!VAR_9 && FUNC_13(VAR_5))
 {
  FUNC_23(VAR_2, (FUNC_24(VAR_1),
      FUNC_26("cannot perform distributed planning on this "
          "query because parameterized queries for SQL "
          "functions referencing distributed tables are "
          "not supported"),
      FUNC_25("Consider using PL/pgSQL functions instead.")));
 }

 return VAR_8;
}
