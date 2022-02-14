
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int rtable; } ;
struct TYPE_8__ {int plannerRestrictionContext; int allDistributionKeysInQueryAreEqual; } ;
typedef TYPE_1__ RecursivePlanningContext ;
typedef TYPE_2__ Query ;


 int FUNC_0 (TYPE_2__*,int ) ;
 int * FUNC_1 (TYPE_2__*,int) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static bool
FUNC_4(Query *VAR_3, RecursivePlanningContext *VAR_4)
{
 if (FUNC_2(VAR_3->rtable, VAR_0))
 {
 }
 else if (FUNC_1(VAR_3, 0) == ((void*)0))
 {
  if (!VAR_4->allDistributionKeysInQueryAreEqual &&
   !FUNC_0(VAR_3,
               VAR_4->plannerRestrictionContext))
  {
   return 1;
  }





  return 0;
 }
 else if (VAR_2 == VAR_1 &&
    FUNC_3(VAR_3))
 {




  return 0;
 }

 return 1;
}
