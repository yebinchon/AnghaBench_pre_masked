
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int objectType; } ;
struct TYPE_7__ {char const* data; int member_0; } ;
typedef TYPE_1__ StringInfoData ;
typedef TYPE_2__ AlterOwnerStmt ;


 int FUNC_0 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;

const char *
FUNC_3(AlterOwnerStmt *VAR_0)
{
 StringInfoData VAR_1 = { 0 };
 FUNC_2(&VAR_1);

 FUNC_1(VAR_0->objectType);

 FUNC_0(&VAR_1, VAR_0);

 return VAR_1.data;
}
