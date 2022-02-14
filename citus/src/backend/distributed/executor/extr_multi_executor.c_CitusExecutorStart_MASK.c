
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int planTree; } ;
struct TYPE_6__ {TYPE_2__* plannedstmt; } ;
typedef TYPE_1__ QueryDesc ;
typedef TYPE_2__ PlannedStmt ;


 scalar_t__ FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 scalar_t__ FUNC_8 () ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (TYPE_1__*,int) ;

void
FUNC_13(QueryDesc *VAR_4, int VAR_5)
{
 PlannedStmt *VAR_6 = VAR_4->plannedstmt;

 if (FUNC_0())
 {
  if (FUNC_2(VAR_6) &&
   FUNC_3())
  {






   FUNC_9(VAR_1, (FUNC_10(VAR_0),
       FUNC_11("cannot join local tables and reference tables in "
           "a transaction block")));
  }
 }






 if (FUNC_8() && VAR_2 &&
  FUNC_1(VAR_6->planTree))
 {
  FUNC_7();
  {





   VAR_3 = 0;
   FUNC_12(VAR_4, VAR_5);
   VAR_3 = 1;
  }
  FUNC_4();
  {
   VAR_3 = 1;
   FUNC_6();
  }
  FUNC_5();
 }
 else

 {
  FUNC_12(VAR_4, VAR_5);
 }
}
