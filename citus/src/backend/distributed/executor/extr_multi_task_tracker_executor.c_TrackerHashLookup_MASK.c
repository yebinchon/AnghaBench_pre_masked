
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_3__ {int workerPort; int workerName; } ;
typedef TYPE_1__ TaskTracker ;
typedef int HTAB ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (char*,char const*,int ) ;
 scalar_t__ FUNC_2 (int *,void*,int ,int*) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,char const*,int ) ;

__attribute__((used)) static TaskTracker *
FUNC_5(HTAB *VAR_3, const char *VAR_4, uint32 VAR_5)
{
 TaskTracker *VAR_6 = ((void*)0);
 void *VAR_7 = ((void*)0);
 bool VAR_8 = 0;

 TaskTracker VAR_9;
 FUNC_3(VAR_9.workerName, 0, VAR_2);
 FUNC_4(VAR_9.workerName, VAR_4, VAR_2);
 VAR_9.workerPort = VAR_5;

 VAR_7 = (void *) &VAR_9;
 VAR_6 = (TaskTracker *) FUNC_2(VAR_3, VAR_7,
             VAR_1, &VAR_8);
 if (VAR_6 == ((void*)0) || !VAR_8)
 {
  FUNC_0(VAR_0, (FUNC_1("could not find task tracker for node \"%s:%u\"",
          VAR_4, VAR_5)));
 }

 return VAR_6;
}
