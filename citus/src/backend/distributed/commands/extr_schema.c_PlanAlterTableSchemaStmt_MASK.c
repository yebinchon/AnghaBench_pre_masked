
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int missing_ok; int * relation; } ;
typedef int Oid ;
typedef int List ;
typedef TYPE_1__ AlterObjectSchemaStmt ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int * VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,int ) ;
 int VAR_3 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*) ;

List *
FUNC_6(AlterObjectSchemaStmt *VAR_4, const char *VAR_5)
{
 Oid VAR_6 = VAR_1;

 if (VAR_4->relation == ((void*)0))
 {
  return VAR_2;
 }

 VAR_6 = FUNC_2(VAR_4->relation,
          VAR_0,
          VAR_4->missing_ok);


 if (!FUNC_1(VAR_6) || !FUNC_0(VAR_6))
 {
  return VAR_2;
 }


 FUNC_3(VAR_3, (FUNC_5("not propagating ALTER ... SET SCHEMA commands to "
        "worker nodes"),
       FUNC_4("Connect to worker nodes directly to manually "
         "change schemas of affected objects.")));

 return VAR_2;
}
