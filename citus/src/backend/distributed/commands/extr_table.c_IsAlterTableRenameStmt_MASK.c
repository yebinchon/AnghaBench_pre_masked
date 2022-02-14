
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ renameType; scalar_t__ relationType; } ;
typedef TYPE_1__ RenameStmt ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

bool
FUNC_0(RenameStmt *VAR_4)
{
 bool VAR_5 = 0;

 if (VAR_4->renameType == VAR_3 ||
  VAR_4->renameType == VAR_1)
 {
  VAR_5 = 1;
 }
 else if (VAR_4->renameType == VAR_0 &&
    (VAR_4->relationType == VAR_3 ||
     VAR_4->relationType == VAR_1))
 {
  VAR_5 = 1;
 }
 else if (VAR_4->renameType == VAR_2)
 {
  VAR_5 = 1;
 }

 return VAR_5;
}
