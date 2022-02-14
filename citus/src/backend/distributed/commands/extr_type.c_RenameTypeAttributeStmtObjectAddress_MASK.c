
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int TypeName ;
struct TYPE_3__ {scalar_t__ renameType; scalar_t__ relationType; int relation; } ;
typedef TYPE_1__ RenameStmt ;
typedef int Oid ;
typedef int const ObjectAddress ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *,int *,int) ;
 int * FUNC_2 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (int const,int ,int ) ;
 int VAR_3 ;
 int const* FUNC_4 (int) ;

const ObjectAddress *
FUNC_5(RenameStmt *VAR_4, bool VAR_5)
{
 TypeName *VAR_6 = ((void*)0);
 Oid VAR_7 = VAR_0;
 ObjectAddress *VAR_8 = ((void*)0);

 FUNC_0(VAR_4->renameType == VAR_1);
 FUNC_0(VAR_4->relationType == VAR_2);

 VAR_6 = FUNC_2(VAR_4->relation);
 VAR_7 = FUNC_1(((void*)0), VAR_6, VAR_5);
 VAR_8 = FUNC_4(sizeof(ObjectAddress));
 FUNC_3(*VAR_8, VAR_3, VAR_7);

 return VAR_8;
}
