
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int rtable; } ;
struct TYPE_7__ {int plannerRestrictionContext; scalar_t__ allDistributionKeysInQueryAreEqual; } ;
typedef TYPE_1__ RecursivePlanningContext ;
typedef TYPE_2__ Query ;


 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int VAR_0 ;

__attribute__((used)) static bool
FUNC_3(Query *VAR_1,
           RecursivePlanningContext *VAR_2)
{




 if (VAR_2->allDistributionKeysInQueryAreEqual)
 {
  return 0;
 }
 if (!FUNC_1(VAR_1))
 {
  return 0;
 }


 if (FUNC_2(VAR_1->rtable, VAR_0))
 {
  return 0;
 }




 if (!FUNC_0(VAR_1,
              VAR_2->plannerRestrictionContext))
 {
  return 1;
 }

 return 0;
}
