
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* plannedstmt; } ;
struct TYPE_4__ {scalar_t__ commandType; int planTree; } ;
typedef TYPE_2__ QueryDesc ;


 int FUNC_0 () ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static bool
FUNC_2(QueryDesc *VAR_1)
{
 if (!FUNC_0())
 {
  return 0;
 }





 if (VAR_1->plannedstmt->commandType != VAR_0)
 {
  return 0;
 }






 if (!FUNC_1(VAR_1->plannedstmt->planTree))
 {
  return 0;
 }

 return 1;
}
