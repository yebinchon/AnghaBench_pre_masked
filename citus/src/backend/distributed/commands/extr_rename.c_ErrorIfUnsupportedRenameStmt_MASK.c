
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ renameType; } ;
typedef TYPE_1__ RenameStmt ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;

void
FUNC_4(RenameStmt *VAR_3)
{
 if (FUNC_0(VAR_3) &&
  VAR_3->renameType == VAR_2)
 {
  FUNC_1(VAR_1, (FUNC_2(VAR_0),
      FUNC_3("renaming constraints belonging to distributed tables is "
          "currently unsupported")));
 }
}
