
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int Value ;
typedef int TypeName ;
typedef int * Type ;
struct TYPE_2__ {int oid; } ;
typedef int Oid ;
typedef int List ;
typedef TYPE_1__* Form_pg_type ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int * FUNC_2 (int *,int *,int *,int) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int *,int *) ;
 int * FUNC_5 (char*) ;
 int * FUNC_6 (int *) ;

__attribute__((used)) static Oid
FUNC_7(char *VAR_1)
{
 Value *VAR_2 = FUNC_5("pg_catalog");
 Value *VAR_3 = FUNC_5(VAR_1);
 List *VAR_4 = FUNC_4(VAR_2, VAR_3);
 TypeName *VAR_5 = FUNC_6(VAR_4);

 Oid VAR_6;


 Type VAR_7 = FUNC_2(((void*)0), VAR_5, ((void*)0), 0);
 if (VAR_7 == ((void*)0))
 {
  return VAR_0;
 }




 VAR_6 = FUNC_1(VAR_7);

 FUNC_3(VAR_7);

 return VAR_6;
}
