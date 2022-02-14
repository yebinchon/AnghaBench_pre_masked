
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ renameType; scalar_t__ relationType; } ;
typedef TYPE_1__ RenameStmt ;
typedef int ObjectAddress ;
typedef int Node ;
typedef int List ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 char* FUNC_1 (int *) ;
 int VAR_2 ;
 int FUNC_2 () ;
 int * FUNC_3 (int *,int) ;
 int * VAR_3 ;
 int * FUNC_4 (int ,int *) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int const*) ;
 int * FUNC_7 (int ,void*,int ) ;

List *
FUNC_8(RenameStmt *VAR_6, const char *VAR_7)
{
 const char *VAR_8 = ((void*)0);
 const ObjectAddress *VAR_9 = ((void*)0);
 List *VAR_10 = VAR_3;

 FUNC_0(VAR_6->renameType == VAR_4);
 FUNC_0(VAR_6->relationType == VAR_5);

 VAR_9 = FUNC_3((Node *) VAR_6, 0);
 if (!FUNC_6(VAR_9))
 {
  return VAR_3;
 }

 FUNC_5((Node *) VAR_6);

 VAR_8 = FUNC_1((Node *) VAR_6);

 FUNC_2();
 VAR_10 = FUNC_7(VAR_1,
        (void *) VAR_8,
        VAR_2);

 return FUNC_4(VAR_0, VAR_10);
}
