
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ jointree; int rtable; int resultRelation; } ;
struct TYPE_6__ {int relid; } ;
typedef TYPE_1__ RangeTblEntry ;
typedef TYPE_2__ Query ;
typedef int PlannerRestrictionContext ;
typedef int Oid ;
typedef int Node ;
typedef int DeferredErrorMessage ;


 int VAR_0 ;
 char VAR_1 ;
 int * FUNC_0 (TYPE_2__*,int *) ;
 int * FUNC_1 (int ,char*,int *,int *) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (int ,int *) ;
 char FUNC_4 (int ) ;
 TYPE_1__* FUNC_5 (int ,int ) ;

__attribute__((used)) static DeferredErrorMessage *
FUNC_6(Query *VAR_3,
          PlannerRestrictionContext *VAR_4)
{
 DeferredErrorMessage *VAR_5 = ((void*)0);
 RangeTblEntry *VAR_6 = FUNC_5(VAR_3->resultRelation,
              VAR_3->rtable);
 Oid VAR_7 = VAR_6->relid;
 char VAR_8 = FUNC_4(VAR_7);

 if (FUNC_3(VAR_3->rtable, (Node *) VAR_3->jointree))
 {
  VAR_5 = FUNC_1(VAR_2,
          "a join with USING causes an internal naming conflict, use "
          "ON instead",
          ((void*)0), ((void*)0));
 }
 else if (FUNC_2((Node *) VAR_3, VAR_0))
 {
  VAR_5 = FUNC_1(VAR_2,
          "functions used in UPDATE queries on distributed "
          "tables must not be VOLATILE",
          ((void*)0), ((void*)0));
 }
 else if (VAR_8 == VAR_1)
 {
  VAR_5 = FUNC_1(VAR_2,
          "only reference tables may be queried when targeting "
          "a reference table with multi shard UPDATE/DELETE queries "
          "with multiple tables ",
          ((void*)0), ((void*)0));
 }
 else
 {
  VAR_5 = FUNC_0(VAR_3,
                  VAR_4);
 }

 return VAR_5;
}
