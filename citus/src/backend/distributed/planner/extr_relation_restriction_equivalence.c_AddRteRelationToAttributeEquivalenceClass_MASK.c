
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ varattno; int varno; } ;
typedef TYPE_1__ Var ;
struct TYPE_15__ {int equivalentAttributes; } ;
struct TYPE_14__ {scalar_t__ varattno; int relationId; int rteIdentity; int varno; } ;
struct TYPE_13__ {scalar_t__ rtekind; int relid; } ;
typedef TYPE_2__ RangeTblEntry ;
typedef int Oid ;
typedef TYPE_3__ AttributeEquivalenceClassMember ;
typedef TYPE_4__ AttributeEquivalenceClass ;


 int FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_4 (int ,TYPE_3__*) ;
 TYPE_3__* FUNC_5 (int) ;

__attribute__((used)) static void
FUNC_6(AttributeEquivalenceClass **
            VAR_1,
            RangeTblEntry *VAR_2,
            Var *VAR_3)
{
 AttributeEquivalenceClassMember *VAR_4 = ((void*)0);
 Oid VAR_5 = VAR_2->relid;
 Var *VAR_6 = ((void*)0);


 if (!FUNC_3(VAR_5))
 {
  return;
 }

 VAR_6 = FUNC_1(VAR_5);

 FUNC_0(VAR_2->rtekind == VAR_0);


 if (VAR_6 == ((void*)0))
 {
  return;
 }


 if (VAR_6->varattno != VAR_3->varattno)
 {
  return;
 }

 VAR_4 = FUNC_5(sizeof(AttributeEquivalenceClassMember));

 VAR_4->varattno = VAR_3->varattno;
 VAR_4->varno = VAR_3->varno;
 VAR_4->rteIdentity = FUNC_2(VAR_2);
 VAR_4->relationId = VAR_2->relid;

 (*VAR_1)->equivalentAttributes =
  FUNC_4((*VAR_1)->equivalentAttributes,
    VAR_4);
}
