
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int relationIdList; int targetRelationId; } ;
typedef int Oid ;
typedef TYPE_1__ DistributedPlan ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,int ) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(DistributedPlan *VAR_2)
{
 if (FUNC_0(VAR_2))
 {
  Oid VAR_3 = VAR_2->targetRelationId;

  FUNC_1(FUNC_2(VAR_3), VAR_1);
 }






 FUNC_1(VAR_2->relationIdList, VAR_0);
}
