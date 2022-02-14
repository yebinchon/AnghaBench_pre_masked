
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int worker ;
struct TYPE_8__ {int lock; } ;
struct TYPE_7__ {int bgw_flags; int bgw_restart_time; int bgw_notify_pid; int bgw_extra; int bgw_main_arg; int bgw_function_name; int bgw_library_name; int bgw_start_time; int bgw_name; } ;
struct TYPE_6__ {int daemonStarted; int userOid; int triggerMetadataSync; scalar_t__ latch; scalar_t__ workerPid; } ;
typedef int Oid ;
typedef TYPE_1__ MaintenanceDaemonDBData ;
typedef int BackgroundWorkerHandle ;
typedef TYPE_2__ BackgroundWorker ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 () ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int VAR_6 ;
 TYPE_5__* VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_4 (int) ;
 int FUNC_5 (TYPE_2__*,int **) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (int *,int*) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (char*) ;
 scalar_t__ FUNC_11 (int ,int*,int ,int*) ;
 int FUNC_12 (int ,int*,int) ;
 int FUNC_13 (TYPE_2__*,int ,int) ;
 int FUNC_14 (int ,int ,char*,int,int) ;
 int FUNC_15 (int ,char*) ;

void
FUNC_16(void)
{
 MaintenanceDaemonDBData *VAR_11 = ((void*)0);
 Oid VAR_12 = FUNC_1();
 bool VAR_13;

 FUNC_2(&VAR_7->lock, VAR_6);

 VAR_11 = (MaintenanceDaemonDBData *) FUNC_11(VAR_8,
              &VAR_9,
              VAR_5, &VAR_13);

 if (VAR_11 == ((void*)0))
 {

  FUNC_8(VAR_4, (FUNC_10("ran out of database slots")));
 }

 if (!VAR_13 || !VAR_11->daemonStarted)
 {
  BackgroundWorker VAR_14;
  BackgroundWorkerHandle *VAR_15 = ((void*)0);
  int VAR_16 = 0;

  VAR_11->userOid = VAR_12;

  FUNC_13(&VAR_14, 0, sizeof(VAR_14));

  FUNC_14(VAR_14.bgw_name, VAR_2,
     "Citus Maintenance Daemon: %u/%u",
     VAR_9, VAR_12);


  VAR_14.bgw_flags = VAR_1 | VAR_0;





  VAR_14.bgw_start_time = VAR_3;




  VAR_14.bgw_restart_time = 5;
  FUNC_15(VAR_14.bgw_library_name, "citus");
  FUNC_15(VAR_14.bgw_function_name, "CitusMaintenanceDaemonMain");
  VAR_14.bgw_main_arg = FUNC_4(VAR_9);
  FUNC_12(VAR_14.bgw_extra, &VAR_12, sizeof(Oid));
  VAR_14.bgw_notify_pid = VAR_10;

  if (!FUNC_5(&VAR_14, &VAR_15))
  {
   FUNC_8(VAR_4, (FUNC_10("could not start maintenance background worker"),
       FUNC_9("Increasing max_worker_processes might help.")));
  }

  VAR_11->daemonStarted = 1;
  VAR_11->workerPid = 0;
  VAR_11->triggerMetadataSync = 0;
  FUNC_3(&VAR_7->lock);

  FUNC_7(VAR_15, &VAR_16);
 }
 else
 {
  FUNC_0(VAR_11->daemonStarted);





  if (VAR_11->userOid != VAR_12)
  {
   VAR_11->userOid = VAR_12;
   if (VAR_11->latch)
   {
    FUNC_6(VAR_11->latch);
   }
  }
  FUNC_3(&VAR_7->lock);
 }
}
