
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int TypeName ;
struct TYPE_3__ {scalar_t__ objectType; scalar_t__ object; } ;
typedef int Oid ;
typedef int const ObjectAddress ;
typedef int List ;
typedef TYPE_1__ AlterOwnerStmt ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *,int *,int) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int const,int ,int ) ;
 int VAR_2 ;
 int * FUNC_3 (int *) ;
 int const* FUNC_4 (int) ;

const ObjectAddress *
FUNC_5(AlterOwnerStmt *VAR_3, bool VAR_4)
{
 TypeName *VAR_5 = ((void*)0);
 Oid VAR_6 = VAR_0;
 ObjectAddress *VAR_7 = ((void*)0);

 FUNC_0(VAR_3->objectType == VAR_1);

 VAR_5 = FUNC_3((List *) VAR_3->object);
 VAR_6 = FUNC_1(((void*)0), VAR_5, VAR_4);
 VAR_7 = FUNC_4(sizeof(ObjectAddress));
 FUNC_2(*VAR_7, VAR_2, VAR_6);

 return VAR_7;
}
