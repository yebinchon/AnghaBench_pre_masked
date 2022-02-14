
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ targetRelationId; scalar_t__ commandString; int taskList; int concurrentIndexCmd; } ;
typedef int List ;
typedef TYPE_1__ DDLJob ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 int FUNC_1 () ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 scalar_t__ VAR_5 ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (int ,char*) ;
 char* FUNC_9 () ;
 int FUNC_10 (scalar_t__) ;
 int VAR_6 ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (char*) ;
 int FUNC_14 (char*) ;
 int * FUNC_15 (int *,char*) ;
 int * FUNC_16 (char*) ;

__attribute__((used)) static void
FUNC_17(DDLJob *VAR_7)
{
 bool VAR_8 = 0;

 FUNC_1();

 if (VAR_7->targetRelationId != VAR_3)
 {




  VAR_8 = FUNC_10(VAR_7->targetRelationId);
  FUNC_2(VAR_7->targetRelationId);
 }


 if (!VAR_7->concurrentIndexCmd)
 {
  if (VAR_8)
  {
   char *VAR_9 = FUNC_9();

   FUNC_8(VAR_6, VAR_1);





   if (VAR_9 != ((void*)0))
   {
    FUNC_8(VAR_6, VAR_9);
   }

   FUNC_8(VAR_6, (char *) VAR_7->commandString);
  }


  FUNC_3(VAR_7->taskList);
 }
 else
 {

  FUNC_0(VAR_5 == VAR_0);
  VAR_5 = VAR_4;
  VAR_4 = VAR_0;

  FUNC_6();
  {

   FUNC_3(VAR_7->taskList);

   if (VAR_8)
   {
    List *VAR_10 = FUNC_16(VAR_1);
    char *VAR_11 = FUNC_9();





    if (VAR_11 != ((void*)0))
    {
     VAR_10 = FUNC_15(VAR_10, VAR_11);
    }

    VAR_10 = FUNC_15(VAR_10, (char *) VAR_7->commandString);

    FUNC_7(VAR_6, VAR_10);
   }
  }
  FUNC_4();
  {
   FUNC_11(VAR_2,
     (FUNC_14("CONCURRENTLY-enabled index command failed"),
      FUNC_12("CONCURRENTLY-enabled index commands can fail partially, "
          "leaving behind an INVALID index."),
      FUNC_13("Use DROP INDEX CONCURRENTLY IF EXISTS to remove the "
        "invalid index, then retry the original command.")));
  }
  FUNC_5();
 }
}
