
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int objectType; } ;
typedef int ObjectAddress ;
typedef int Node ;
typedef int List ;
typedef TYPE_1__ AlterObjectDependsStmt ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_1 (int *,int) ;
 int FUNC_2 (int const*) ;
 int * VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (char*,char const*) ;
 int FUNC_5 (char*) ;
 char* FUNC_6 (int const*) ;

List *
FUNC_7(AlterObjectDependsStmt *VAR_4, const char *VAR_5)
{
 const ObjectAddress *VAR_6 = ((void*)0);
 const char *VAR_7 = ((void*)0);

 FUNC_0(VAR_4->objectType);

 if (VAR_3)
 {




  return VAR_2;
 }

 if (!VAR_1)
 {



  return VAR_2;
 }

 VAR_6 = FUNC_1((Node *) VAR_4, 1);
 if (!FUNC_2(VAR_6))
 {
  return VAR_2;
 }







 VAR_7 = FUNC_6(VAR_6);
 FUNC_3(VAR_0, (FUNC_5("distrtibuted functions are not allowed to depend on an "
         "extension"),
     FUNC_4("Function \"%s\" is already distributed. Functions from "
         "extensions are expected to be created on the workers by "
         "the extension they depend on.", VAR_7)));
}
