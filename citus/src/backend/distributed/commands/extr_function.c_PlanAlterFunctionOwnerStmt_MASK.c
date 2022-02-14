
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int objectType; } ;
typedef int ObjectAddress ;
typedef int Node ;
typedef int List ;
typedef TYPE_1__ AlterOwnerStmt ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 char* FUNC_1 (int *) ;
 int VAR_2 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int * FUNC_4 (int *,int) ;
 int * VAR_3 ;
 int * FUNC_5 (int ,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int const*) ;
 int * FUNC_8 (int ,void*,int ) ;

List *
FUNC_9(AlterOwnerStmt *VAR_4, const char *VAR_5)
{
 const ObjectAddress *VAR_6 = ((void*)0);
 const char *VAR_7 = ((void*)0);
 List *VAR_8 = ((void*)0);

 FUNC_0(VAR_4->objectType);

 VAR_6 = FUNC_4((Node *) VAR_4, 0);
 if (!FUNC_7(VAR_6))
 {
  return VAR_3;
 }

 FUNC_2();
 FUNC_3();
 FUNC_6((Node *) VAR_4);
 VAR_7 = FUNC_1((Node *) VAR_4);

 VAR_8 = FUNC_8(VAR_1,
        (void *) VAR_7,
        VAR_2);

 return FUNC_5(VAR_0, VAR_8);
}
