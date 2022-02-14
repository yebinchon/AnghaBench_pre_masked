
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int TypeName ;
struct TYPE_3__ {int typeName; } ;
typedef int Oid ;
typedef int const ObjectAddress ;
typedef TYPE_1__ AlterEnumStmt ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (int const,int ,int ) ;
 int VAR_1 ;
 int * FUNC_2 (int ) ;
 int const* FUNC_3 (int) ;

const ObjectAddress *
FUNC_4(AlterEnumStmt *VAR_2, bool VAR_3)
{
 TypeName *VAR_4 = ((void*)0);
 Oid VAR_5 = VAR_0;
 ObjectAddress *VAR_6 = ((void*)0);

 VAR_4 = FUNC_2(VAR_2->typeName);
 VAR_5 = FUNC_0(((void*)0), VAR_4, VAR_3);
 VAR_6 = FUNC_3(sizeof(ObjectAddress));
 FUNC_1(*VAR_6, VAR_1, VAR_5);

 return VAR_6;
}
