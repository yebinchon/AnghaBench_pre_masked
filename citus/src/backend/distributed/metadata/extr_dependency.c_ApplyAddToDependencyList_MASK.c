
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int refobjid; int refclassid; } ;
struct TYPE_7__ {int member_0; } ;
typedef int ObjectAddressCollector ;
typedef TYPE_1__ ObjectAddress ;
typedef TYPE_2__* Form_pg_depend ;


 int FUNC_0 (int *,TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int *) ;
 int FUNC_2 (TYPE_1__,int ,int ) ;

__attribute__((used)) static void
FUNC_3(ObjectAddressCollector *VAR_0, Form_pg_depend VAR_1)
{
 ObjectAddress VAR_2 = { 0 };
 FUNC_2(VAR_2, VAR_1->refclassid, VAR_1->refobjid);





 if (FUNC_1(&VAR_2, ((void*)0)))
 {
  return;
 }

 FUNC_0(VAR_0, &VAR_2);
}
