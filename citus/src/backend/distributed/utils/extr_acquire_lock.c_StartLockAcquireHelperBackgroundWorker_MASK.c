
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int worker ;
typedef int int32 ;
typedef int args ;
struct TYPE_10__ {int DatabaseId; int bgw_flags; int bgw_extra; scalar_t__ bgw_notify_pid; int bgw_main_arg; int bgw_function_name; int bgw_library_name; int bgw_restart_time; int bgw_start_time; int bgw_type; int bgw_name; int lock_cooldown; } ;
struct TYPE_9__ {int * arg; int func; } ;
typedef TYPE_1__ MemoryContextCallback ;
typedef TYPE_2__ LockAcquireHelperArgs ;
typedef int BackgroundWorkerHandle ;
typedef TYPE_2__ BackgroundWorker ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,TYPE_1__*) ;
 int VAR_8 ;
 int FUNC_3 (TYPE_2__*,int **) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int ,TYPE_2__*,int) ;
 int FUNC_8 (TYPE_2__*,int ,int) ;
 TYPE_1__* FUNC_9 (int) ;
 int FUNC_10 (int ,int ,char*,...) ;

BackgroundWorkerHandle *
FUNC_11(int VAR_9, int32 VAR_10)
{
 BackgroundWorkerHandle *VAR_11 = ((void*)0);
 LockAcquireHelperArgs VAR_12;
 BackgroundWorker VAR_13;
 MemoryContextCallback *VAR_14 = ((void*)0);
 FUNC_8(&VAR_12, 0, sizeof(VAR_12));
 FUNC_8(&VAR_13, 0, sizeof(VAR_13));


 VAR_12.DatabaseId = VAR_8;
 VAR_12.lock_cooldown = VAR_10;


 FUNC_10(VAR_13.bgw_name, VAR_2,
    "Citus Lock Acquire Helper: %d/%u",
    VAR_9, VAR_8);
 FUNC_10(VAR_13.bgw_type, VAR_2, "citus_lock_aqcuire");

 VAR_13.bgw_flags = VAR_1 | VAR_0;
 VAR_13.bgw_start_time = VAR_4;
 VAR_13.bgw_restart_time = VAR_3;

 FUNC_10(VAR_13.bgw_library_name, VAR_2, "citus");
 FUNC_10(VAR_13.bgw_function_name, VAR_2, "LockAcquireHelperMain");
 VAR_13.bgw_main_arg = FUNC_1(VAR_9);
 VAR_13.bgw_notify_pid = 0;






 FUNC_0(sizeof(VAR_13.bgw_extra) >= sizeof(VAR_12));
 FUNC_7(VAR_13.bgw_extra, &VAR_12, sizeof(VAR_12));

 if (!FUNC_3(&VAR_13, &VAR_11))
 {
  FUNC_4(VAR_6, (FUNC_6("could not start lock acquiring background worker to "
          "force the update"),
      FUNC_5("Increasing max_worker_processes might help.")));
 }

 VAR_14 = FUNC_9(sizeof(MemoryContextCallback));
 VAR_14->func = VAR_7;
 VAR_14->arg = VAR_11;

 FUNC_2(VAR_5, VAR_14);

 return VAR_11;
}
