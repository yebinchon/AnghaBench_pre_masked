
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int Value ;
typedef int TypeName ;
struct TYPE_3__ {scalar_t__ objectType; scalar_t__ object; int newschema; } ;
typedef scalar_t__ Oid ;
typedef int const ObjectAddress ;
typedef int List ;
typedef TYPE_1__ AlterObjectSchemaStmt ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (int *,int *,int) ;
 int * VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int const,int ,scalar_t__) ;
 int FUNC_3 (int *) ;
 int VAR_5 ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*,int ) ;
 int * FUNC_7 (int ) ;
 int * FUNC_8 (int ,int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ) ;
 int * FUNC_11 (int *) ;
 int const* FUNC_12 (int) ;

const ObjectAddress *
FUNC_13(AlterObjectSchemaStmt *VAR_6, bool VAR_7)
{
 ObjectAddress *VAR_8 = ((void*)0);
 TypeName *VAR_9 = ((void*)0);
 Oid VAR_10 = VAR_2;
 List *VAR_11 = VAR_3;

 FUNC_0(VAR_6->objectType == VAR_4);

 VAR_11 = (List *) VAR_6->object;





 VAR_9 = FUNC_11(VAR_11);
 VAR_10 = FUNC_1(((void*)0), VAR_9, 1);

 if (VAR_10 == VAR_2)
 {






  Value *VAR_12 = FUNC_7(FUNC_9(VAR_11));





  VAR_11 = FUNC_8(FUNC_10(VAR_6->newschema), VAR_12);
  VAR_9 = FUNC_11(VAR_11);
  VAR_10 = FUNC_1(((void*)0), VAR_9, 1);





  if (!VAR_7 && VAR_10 == VAR_2)
  {
   VAR_11 = (List *) VAR_6->object;
   VAR_9 = FUNC_11(VAR_11);

   FUNC_4(VAR_1, (FUNC_5(VAR_0),
       FUNC_6("type \"%s\" does not exist",
           FUNC_3(VAR_9))));
  }
 }

 VAR_8 = FUNC_12(sizeof(ObjectAddress));
 FUNC_2(*VAR_8, VAR_5, VAR_10);

 return VAR_8;
}
