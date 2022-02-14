
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int worker ;
struct TYPE_4__ {int bgw_restart_time; int bgw_name; scalar_t__ bgw_notify_pid; int bgw_function_name; int bgw_library_name; int bgw_start_time; int bgw_flags; } ;
typedef TYPE_1__ BackgroundWorker ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int FUNC_2 () ;
 int FUNC_3 (TYPE_1__*,int ,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int ,int ,char*) ;

void
FUNC_5(void)
{
 BackgroundWorker VAR_7;

 VAR_5 = VAR_6;
 VAR_6 = VAR_4;

 if (VAR_3)
 {
  return;
 }


 FUNC_1(FUNC_2());


 FUNC_3(&VAR_7, 0, sizeof(VAR_7));
 VAR_7.bgw_flags = VAR_0;
 VAR_7.bgw_start_time = VAR_2;
 VAR_7.bgw_restart_time = 1;
 FUNC_4(VAR_7.bgw_library_name, VAR_1, "citus");
 FUNC_4(VAR_7.bgw_function_name, VAR_1, "TaskTrackerMain");
 VAR_7.bgw_notify_pid = 0;
 FUNC_4(VAR_7.bgw_name, VAR_1, "task tracker");

 FUNC_0(&VAR_7);
}
