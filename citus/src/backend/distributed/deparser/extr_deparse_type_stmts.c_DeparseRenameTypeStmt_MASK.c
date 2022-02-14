
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ renameType; } ;
struct TYPE_7__ {char const* data; int member_0; } ;
typedef TYPE_1__ StringInfoData ;
typedef TYPE_2__ RenameStmt ;


 int FUNC_0 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (TYPE_1__*) ;

const char *
FUNC_3(RenameStmt *VAR_1)
{
 StringInfoData VAR_2 = { 0 };
 FUNC_2(&VAR_2);

 FUNC_1(VAR_1->renameType == VAR_0);

 FUNC_0(&VAR_2, VAR_1);

 return VAR_2.data;
}
