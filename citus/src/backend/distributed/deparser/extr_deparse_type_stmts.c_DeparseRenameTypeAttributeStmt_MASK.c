
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ renameType; scalar_t__ relationType; } ;
struct TYPE_7__ {char const* data; int member_0; } ;
typedef TYPE_1__ StringInfoData ;
typedef TYPE_2__ RenameStmt ;


 int FUNC_0 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (TYPE_1__*) ;

const char *
FUNC_3(RenameStmt *VAR_2)
{
 StringInfoData VAR_3 = { 0 };
 FUNC_2(&VAR_3);

 FUNC_1(VAR_2->renameType == VAR_0);
 FUNC_1(VAR_2->relationType == VAR_1);

 FUNC_0(&VAR_3, VAR_2);

 return VAR_3.data;
}
