
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int TypeName ;
struct TYPE_3__ {scalar_t__ relkind; int relation; } ;
typedef int Oid ;
typedef int const ObjectAddress ;
typedef TYPE_1__ AlterTableStmt ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *,int *,int) ;
 int * FUNC_2 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (int const,int ,int ) ;
 int VAR_2 ;
 int const* FUNC_4 (int) ;

const ObjectAddress *
FUNC_5(AlterTableStmt *VAR_3, bool VAR_4)
{
 TypeName *VAR_5 = ((void*)0);
 Oid VAR_6 = VAR_0;
 ObjectAddress *VAR_7 = ((void*)0);

 FUNC_0(VAR_3->relkind == VAR_1);

 VAR_5 = FUNC_2(VAR_3->relation);
 VAR_6 = FUNC_1(((void*)0), VAR_5, VAR_4);
 VAR_7 = FUNC_4(sizeof(ObjectAddress));
 FUNC_3(*VAR_7, VAR_2, VAR_6);

 return VAR_7;
}
