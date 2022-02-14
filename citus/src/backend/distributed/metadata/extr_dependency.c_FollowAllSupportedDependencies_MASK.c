
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ deptype; int refobjid; int refclassid; } ;
struct TYPE_9__ {int member_0; } ;
typedef int ObjectAddressCollector ;
typedef TYPE_1__ ObjectAddress ;
typedef TYPE_2__* Form_pg_depend ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (TYPE_1__*,int *) ;
 int FUNC_2 (TYPE_1__*,int *) ;
 int FUNC_3 (TYPE_1__,int ,int ) ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static bool
FUNC_5(ObjectAddressCollector *VAR_2, Form_pg_depend
          VAR_3)
{
 ObjectAddress VAR_4 = { 0 };
 FUNC_3(VAR_4, VAR_3->refclassid, VAR_3->refobjid);
 if (VAR_3->deptype != VAR_1 &&
  VAR_3->deptype != VAR_0)
 {
  return 0;
 }





 if (FUNC_1(&VAR_4, VAR_2))
 {
  return 0;
 }







 if (!FUNC_4(&VAR_4) &&
  !FUNC_2(&VAR_4, ((void*)0)))
 {
  return 0;
 }

 if (FUNC_0(&VAR_4))
 {

  return 0;
 }

 return 1;
}
