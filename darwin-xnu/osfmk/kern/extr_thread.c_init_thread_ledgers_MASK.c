
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int * ledger_template_t ;
struct TYPE_2__ {int cpu_time; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char*,char*,char*) ;
 scalar_t__ FUNC_2 (int *,int,int ,int *,int *) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (char*) ;
 int FUNC_5 (char*) ;
 int VAR_0 ;
 int * VAR_1 ;
 TYPE_1__ VAR_2 ;

__attribute__((used)) static void
FUNC_6(void) {
 ledger_template_t VAR_3;
 int VAR_4;

 FUNC_0(VAR_1 == ((void*)0));

 if ((VAR_3 = FUNC_4("Per-thread ledger")) == ((void*)0))
  FUNC_5("couldn't create thread ledger template");

 if ((VAR_4 = FUNC_1(VAR_3, "cpu_time", "sched", "ns")) < 0) {
  FUNC_5("couldn't create cpu_time entry for thread ledger template");
 }

 if (FUNC_2(VAR_3, VAR_4, VAR_0, ((void*)0), ((void*)0)) < 0) {
      FUNC_5("couldn't set thread ledger callback for cpu_time entry");
 }

 VAR_2.cpu_time = VAR_4;

 FUNC_3(VAR_3);
 VAR_1 = VAR_3;
}
