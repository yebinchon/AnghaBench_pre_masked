
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64 ;
struct TYPE_5__ {int * planningError; } ;
typedef int Query ;
typedef int PlannerRestrictionContext ;
typedef TYPE_1__ DistributedPlan ;
typedef int DeferredErrorMessage ;


 TYPE_1__* FUNC_0 (int ,int *) ;
 TYPE_1__* FUNC_1 (int *,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;

DistributedPlan *
FUNC_4(uint64 VAR_2, Query *VAR_3,
        PlannerRestrictionContext *VAR_4)
{
 DistributedPlan *VAR_5 = ((void*)0);
 DeferredErrorMessage *VAR_6 = ((void*)0);

 VAR_6 = FUNC_2(VAR_3);
 if (VAR_6 != ((void*)0))
 {

  FUNC_3(VAR_6, VAR_1);
 }

 VAR_5 = FUNC_1(VAR_3,
              VAR_4);

 if (VAR_5->planningError != ((void*)0))
 {
  FUNC_3(VAR_5->planningError, VAR_0);


  VAR_5 = FUNC_0(VAR_2, VAR_3);
 }

 return VAR_5;
}
