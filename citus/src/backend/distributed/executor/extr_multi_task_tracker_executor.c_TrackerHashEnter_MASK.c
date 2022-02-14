
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_6__ {int currentTaskIndex; int connectionId; int trackerStatus; int workerPort; int workerName; } ;
typedef TYPE_1__ TaskTracker ;
typedef int HTAB ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (char*,char*,int ) ;
 scalar_t__ FUNC_2 (int *,void*,int ,int*) ;
 int FUNC_3 (TYPE_1__*,TYPE_1__*,int) ;
 int FUNC_4 (TYPE_1__*,int ,int) ;
 int FUNC_5 (int ,char*,int ) ;

__attribute__((used)) static TaskTracker *
FUNC_6(HTAB *VAR_5, char *VAR_6, uint32 VAR_7)
{
 TaskTracker *VAR_8 = ((void*)0);
 void *VAR_9 = ((void*)0);
 bool VAR_10 = 0;

 TaskTracker VAR_11;
 FUNC_4(&VAR_11, 0, sizeof(TaskTracker));
 FUNC_5(VAR_11.workerName, VAR_6, VAR_4);
 VAR_11.workerPort = VAR_7;

 VAR_9 = (void *) &VAR_11;
 VAR_8 = (TaskTracker *) FUNC_2(VAR_5, VAR_9,
             VAR_0, &VAR_10);


 if (VAR_10)
 {
  FUNC_0(VAR_3, (FUNC_1("multiple entries for task tracker: \"%s:%u\"",
         VAR_6, VAR_7)));
 }


 FUNC_3(VAR_8, &VAR_11, sizeof(TaskTracker));
 VAR_8->trackerStatus = VAR_2;
 VAR_8->connectionId = VAR_1;
 VAR_8->currentTaskIndex = -1;

 return VAR_8;
}
