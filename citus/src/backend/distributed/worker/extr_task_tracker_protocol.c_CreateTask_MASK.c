
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64 ;
typedef scalar_t__ uint32 ;
struct TYPE_3__ {int userName; int databaseName; scalar_t__ failureCount; int connectionId; int taskStatus; int taskCallString; scalar_t__ assignedAt; } ;
typedef TYPE_1__ WorkerTask ;


 char* FUNC_0 () ;
 char* FUNC_1 () ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__* FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (int ,char*,int ) ;
 scalar_t__ FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5(uint64 VAR_6, uint32 VAR_7, char *VAR_8)
{
 WorkerTask *VAR_9 = ((void*)0);
 uint32 VAR_10 = 0;
 char *VAR_11 = FUNC_0();
 char *VAR_12 = FUNC_1();


 VAR_10 = (uint32) FUNC_4(((void*)0));
 if (VAR_7 == VAR_2)
 {
  VAR_10 = VAR_0;
 }


 VAR_9 = FUNC_2(VAR_6, VAR_7);
 VAR_9->assignedAt = VAR_10;
 FUNC_3(VAR_9->taskCallString, VAR_8, VAR_3);

 VAR_9->taskStatus = VAR_5;
 VAR_9->connectionId = VAR_1;
 VAR_9->failureCount = 0;
 FUNC_3(VAR_9->databaseName, VAR_11, VAR_4);
 FUNC_3(VAR_9->userName, VAR_12, VAR_4);
}
