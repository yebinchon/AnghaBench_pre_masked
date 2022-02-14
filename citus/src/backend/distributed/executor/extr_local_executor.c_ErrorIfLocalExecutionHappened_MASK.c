
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;

void
FUNC_4(void)
{
 if (VAR_1)
 {
  FUNC_0(VAR_0, (FUNC_3("cannot execute command because a local execution has "
          "already been done in the transaction"),
      FUNC_2("Try re-running the transaction with "
        "\"SET LOCAL citus.enable_local_execution TO OFF;\""),
      FUNC_1("Some parallel commands cannot be executed if a "
          "previous command has already been executed locally")));
 }
}
