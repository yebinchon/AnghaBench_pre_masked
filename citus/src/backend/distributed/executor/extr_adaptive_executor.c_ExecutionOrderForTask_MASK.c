
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int taskType; } ;
typedef TYPE_1__ Task ;
typedef int RowModifyLevel ;
typedef int PlacementExecutionOrder ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;






 int VAR_4 ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (char*,int) ;

__attribute__((used)) static PlacementExecutionOrder
FUNC_2(RowModifyLevel VAR_5, Task *VAR_6)
{
 switch (VAR_6->taskType)
 {
  case 129:
  case 130:
  {
   return VAR_1;
  }

  case 131:
  {







   if (VAR_5 < VAR_4)
   {
    return VAR_3;
   }
   else
   {
    return VAR_2;
   }
  }

  case 136:
  case 128:
  {
   return VAR_2;
  }

  case 134:
  case 132:
  case 135:
  case 133:
  default:
  {
   FUNC_0(VAR_0, (FUNC_1("unsupported task type %d in adaptive executor",
           VAR_6->taskType)));
  }
 }
}
