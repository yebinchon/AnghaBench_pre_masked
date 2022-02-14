
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clockdomain {int flags; int usecount; int name; } ;


 int VAR_0 ;
 int FUNC_0 (struct clockdomain*) ;
 int FUNC_1 (struct clockdomain*,int) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (struct clockdomain*) ;

void FUNC_5(struct clockdomain *VAR_1)
{
 if (!VAR_1)
  return;

 if (!(VAR_1->flags & VAR_0)) {
  FUNC_3("clock: automatic idle transitions cannot be enabled "
    "on clockdomain %s\n", VAR_1->name);
  return;
 }

 FUNC_3("clockdomain: enabling automatic idle transitions for %s\n",
   VAR_1->name);

 if (FUNC_2(&VAR_1->usecount) > 0)
  FUNC_0(VAR_1);

 FUNC_1(VAR_1, 1);

 FUNC_4(VAR_1);
}
