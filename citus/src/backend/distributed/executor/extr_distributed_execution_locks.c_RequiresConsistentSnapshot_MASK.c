
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int taskPlacementList; int modifyWithSubquery; } ;
typedef TYPE_1__ Task ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static bool
FUNC_1(Task *VAR_1)
{
 bool VAR_2 = 0;

 if (!VAR_1->modifyWithSubquery)
 {




  VAR_2 = 0;
 }
 else if (FUNC_0(VAR_1->taskPlacementList) == 1)
 {






  VAR_2 = 0;
 }
 else if (VAR_0)
 {
  VAR_2 = 0;
 }
 else
 {






  VAR_2 = 1;
 }

 return VAR_2;
}
