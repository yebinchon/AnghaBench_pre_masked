
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int objectId; } ;
typedef TYPE_1__ ObjectAddress ;
typedef int Node ;
typedef int List ;
typedef int CreateFunctionStmt ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__ const*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 TYPE_1__* FUNC_3 (int *,int) ;
 int * VAR_3 ;
 int * FUNC_4 (int ,int *) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int ,int ,int ,int ) ;

List *
FUNC_7(CreateFunctionStmt *VAR_4, const char *VAR_5)
{
 const ObjectAddress *VAR_6 = ((void*)0);
 List *VAR_7 = VAR_3;

 if (!FUNC_5(VAR_4))
 {
  return VAR_3;
 }

 VAR_6 = FUNC_3((Node *) VAR_4, 0);
 FUNC_0(VAR_6);

 VAR_7 = FUNC_6(VAR_1,
        FUNC_2(VAR_6->objectId, 1),
        FUNC_1(VAR_6->objectId),
        VAR_2);

 return FUNC_4(VAR_0, VAR_7);
}
