
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int object; int objectType; } ;
typedef int ObjectAddress ;
typedef TYPE_1__ AlterOwnerStmt ;


 int const* FUNC_0 (int ,int ,int) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;

const ObjectAddress *
FUNC_2(AlterOwnerStmt *VAR_1, bool VAR_2)
{
 return FUNC_0(VAR_1->objectType,
           FUNC_1(VAR_0, VAR_1->object), VAR_2);
}
