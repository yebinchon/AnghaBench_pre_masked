
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int si_pid; } ;
typedef TYPE_1__ siginfo_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (char*) ;

void FUNC_6(int VAR_4, siginfo_t *VAR_5, void *VAR_6) {
  if (VAR_4 == VAR_2) {
    FUNC_5("debugFlag 135");
    return;
  }
  if (VAR_4 == VAR_3) {
    FUNC_5("resetlog");
    return;
  }
  FUNC_4(VAR_1, "Shut down signal is %d", VAR_4);
  FUNC_4(VAR_1, "Shutting down TDengine service...");

  FUNC_1("shut down signal is %d, sender PID:%d", VAR_4, VAR_5->si_pid);
  FUNC_2();

  FUNC_4(VAR_1, "Shut down TDengine service successfully");
  FUNC_1("TDengine is shut down!");
  FUNC_0();
  FUNC_3(VAR_0);
}
