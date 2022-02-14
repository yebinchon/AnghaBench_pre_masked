
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int Var ;
struct TYPE_2__ {scalar_t__ attnum; int attcollation; int atttypmod; int atttypid; } ;
typedef int Relation ;
typedef int * HeapTuple ;
typedef TYPE_1__* Form_pg_attribute ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 char* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int ,char*) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char*,char*,char*) ;
 int * FUNC_9 (int,scalar_t__,int ,int ,int ,int ) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (char*,int ,int) ;

Var *
FUNC_12(Relation VAR_3, char *VAR_4)
{
 HeapTuple VAR_5 = ((void*)0);
 Form_pg_attribute VAR_6 = ((void*)0);
 Var *VAR_7 = ((void*)0);
 char *VAR_8 = FUNC_2(VAR_3);


 if (VAR_4 == ((void*)0))
 {
  return ((void*)0);
 }


 FUNC_11(VAR_4, FUNC_10(VAR_4), 1);


 VAR_5 = FUNC_5(FUNC_3(VAR_3),
          VAR_4);
 if (!FUNC_1(VAR_5))
 {
  FUNC_6(VAR_2, (FUNC_7(VAR_1),
      FUNC_8("column \"%s\" of relation \"%s\" does not exist",
          VAR_4, VAR_8)));
 }

 VAR_6 = (Form_pg_attribute) FUNC_0(VAR_5);


 if (VAR_6->attnum <= 0)
 {
  FUNC_6(VAR_2, (FUNC_7(VAR_0),
      FUNC_8("cannot reference system column \"%s\" in relation \"%s\"",
          VAR_4, VAR_8)));
 }


 VAR_7 = FUNC_9(1, VAR_6->attnum, VAR_6->atttypid,
         VAR_6->atttypmod, VAR_6->attcollation, 0);

 FUNC_4(VAR_5);

 return VAR_7;
}
