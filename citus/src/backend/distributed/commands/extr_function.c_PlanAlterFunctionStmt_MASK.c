
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int objtype; } ;
typedef int ObjectAddress ;
typedef int Node ;
typedef int List ;
typedef TYPE_1__ AlterFunctionStmt ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 char* FUNC_1 (int *) ;
 int VAR_2 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (TYPE_1__*) ;
 int * FUNC_5 (int *,int) ;
 int * VAR_3 ;
 int * FUNC_6 (int ,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int const*) ;
 int * FUNC_9 (int ,void*,int ) ;

List *
FUNC_10(AlterFunctionStmt *VAR_4, const char *VAR_5)
{
 const char *VAR_6 = ((void*)0);
 const ObjectAddress *VAR_7 = ((void*)0);
 List *VAR_8 = VAR_3;

 FUNC_0(VAR_4->objtype);

 VAR_7 = FUNC_5((Node *) VAR_4, 0);
 if (!FUNC_8(VAR_7))
 {
  return VAR_3;
 }

 FUNC_2();
 FUNC_4(VAR_4);
 FUNC_3();
 FUNC_7((Node *) VAR_4);
 VAR_6 = FUNC_1((Node *) VAR_4);

 VAR_8 = FUNC_9(VAR_1,
        (void *) VAR_6,
        VAR_2);

 return FUNC_6(VAR_0, VAR_8);
}
