
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ targetList; } ;
struct TYPE_10__ {scalar_t__ subquery; int relid; } ;
typedef TYPE_1__ RangeTblEntry ;
typedef TYPE_2__ Query ;
typedef int Node ;
typedef int DeferredErrorMessage ;


 scalar_t__ VAR_0 ;
 int * FUNC_0 (int ,char*,int *,int *) ;
 int VAR_1 ;
 int * FUNC_1 (TYPE_2__*) ;
 TYPE_1__* FUNC_2 (TYPE_2__*) ;
 TYPE_1__* FUNC_3 (TYPE_2__*) ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int *,int *) ;

__attribute__((used)) static DeferredErrorMessage *
FUNC_7(Query *VAR_2)
{
 RangeTblEntry *VAR_3 = ((void*)0);
 RangeTblEntry *VAR_4 = ((void*)0);
 Query *VAR_5 = ((void*)0);
 DeferredErrorMessage *VAR_6 = ((void*)0);

 VAR_6 = FUNC_1(VAR_2);
 if (VAR_6)
 {
  return VAR_6;
 }

 VAR_3 = FUNC_2(VAR_2);
 if (FUNC_5(VAR_3->relid) == VAR_0)
 {
  return FUNC_0(VAR_1,
        "INSERT ... SELECT into an append-distributed table is "
        "not supported", ((void*)0), ((void*)0));
 }

 VAR_4 = FUNC_3(VAR_2);
 VAR_5 = (Query *) VAR_4->subquery;

 if (FUNC_4(VAR_5) &&
  FUNC_6((Node *) VAR_2->targetList, ((void*)0)))
 {
  return FUNC_0(VAR_1,
        "INSERT ... SELECT cannot generate sequence values when "
        "selecting from a distributed table",
        ((void*)0), ((void*)0));
 }

 return ((void*)0);
}
