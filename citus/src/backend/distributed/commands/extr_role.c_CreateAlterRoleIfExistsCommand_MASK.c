
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int role; } ;
struct TYPE_6__ {char const* data; int member_0; } ;
typedef TYPE_1__ StringInfoData ;
typedef int Node ;
typedef TYPE_2__ AlterRoleStmt ;


 char* FUNC_0 (int *) ;
 char* FUNC_1 (int ,int) ;
 int FUNC_2 (TYPE_1__*,char*,int ,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (char const*) ;

__attribute__((used)) static const char *
FUNC_5(AlterRoleStmt *VAR_0)
{
 StringInfoData VAR_1 = { 0 };
 const char *VAR_2 = FUNC_1(VAR_0->role, 0);
 const char *VAR_3 = FUNC_0((Node *) VAR_0);

 FUNC_3(&VAR_1);
 FUNC_2(&VAR_1,
      "SELECT alter_role_if_exists(%s, %s)",
      FUNC_4(VAR_2),
      FUNC_4(VAR_3));

 return VAR_1.data;
}
