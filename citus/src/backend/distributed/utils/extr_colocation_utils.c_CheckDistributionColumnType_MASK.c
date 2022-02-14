
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ vartype; } ;
typedef TYPE_1__ Var ;
typedef scalar_t__ Oid ;


 TYPE_1__* FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (char*,char*,char*) ;
 int FUNC_3 (char*,char*,char*) ;
 char* FUNC_4 (scalar_t__) ;

void
FUNC_5(Oid VAR_2, Oid VAR_3)
{
 Var *VAR_4 = ((void*)0);
 Var *VAR_5 = ((void*)0);
 Oid VAR_6 = VAR_1;
 Oid VAR_7 = VAR_1;


 VAR_4 = FUNC_0(VAR_2);
 if (VAR_4 == ((void*)0))
 {
  VAR_6 = VAR_1;
 }
 else
 {
  VAR_6 = VAR_4->vartype;
 }


 VAR_5 = FUNC_0(VAR_3);
 if (VAR_5 == ((void*)0))
 {
  VAR_7 = VAR_1;
 }
 else
 {
  VAR_7 = VAR_5->vartype;
 }

 if (VAR_6 != VAR_7)
 {
  char *VAR_8 = FUNC_4(VAR_2);
  char *VAR_9 = FUNC_4(VAR_3);

  FUNC_1(VAR_0, (FUNC_3("cannot colocate tables %s and %s",
          VAR_8, VAR_9),
      FUNC_2("Distribution column types don't match for "
          "%s and %s.", VAR_8,
          VAR_9)));
 }
}
