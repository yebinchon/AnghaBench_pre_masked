
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ rtekind; int * subquery; } ;
typedef TYPE_1__ RangeTblEntry ;
typedef int Query ;
typedef int PlannerRestrictionContext ;
typedef int MultiNode ;
typedef int List ;
typedef int DeferredErrorMessage ;


 int FUNC_0 (int) ;
 int * FUNC_1 (int *) ;
 int * FUNC_2 (int *,int *) ;
 int * FUNC_3 (int *) ;
 int VAR_0 ;
 int * FUNC_4 (int *) ;
 scalar_t__ VAR_1 ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (int *) ;
 int * FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int *) ;

MultiNode *
FUNC_11(Query *VAR_2, Query *VAR_3,
       PlannerRestrictionContext *VAR_4)
{
 MultiNode *VAR_5 = ((void*)0);
 DeferredErrorMessage *VAR_6 = ((void*)0);
 DeferredErrorMessage *VAR_7 = ((void*)0);





 VAR_7 = FUNC_1(VAR_2);
 if (VAR_7 != ((void*)0))
 {
  FUNC_5(VAR_7, VAR_0);
 }






 VAR_6 = FUNC_2(VAR_2,
                 VAR_4);
 if (!VAR_6)
 {
  VAR_5 = FUNC_9(VAR_2);
 }
 else if (VAR_6)
 {
  bool VAR_8 = 0;
  RangeTblEntry *VAR_9 = ((void*)0);
  Query *VAR_10 = ((void*)0);
  DeferredErrorMessage *VAR_11 = ((void*)0);
  List *VAR_12 = ((void*)0);





  VAR_8 =
   FUNC_7(VAR_2);
  if (!VAR_8)
  {
   FUNC_6(VAR_6, VAR_0);
  }

  VAR_12 = FUNC_8(VAR_3);
  VAR_9 = (RangeTblEntry *) FUNC_10(VAR_12);
  FUNC_0(VAR_9->rtekind == VAR_1);

  VAR_10 = VAR_9->subquery;

  VAR_11 = FUNC_3(VAR_10);
  if (VAR_11)
  {
   FUNC_6(VAR_11, VAR_0);
  }


  VAR_5 = FUNC_4(VAR_3);
 }

 FUNC_0(VAR_5 != ((void*)0));

 return VAR_5;
}
