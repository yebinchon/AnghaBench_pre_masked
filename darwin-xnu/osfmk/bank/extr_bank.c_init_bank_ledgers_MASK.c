
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int * ledger_template_t ;
struct TYPE_2__ {int cpu_time; int energy; } ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_1 (int *,char*,char*,char*) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (char*) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static void
FUNC_5(void) {
 ledger_template_t VAR_2;
 int VAR_3;

 FUNC_0(VAR_0 == ((void*)0));

 if ((VAR_2 = FUNC_3("Bank ledger")) == ((void*)0))
  FUNC_4("couldn't create bank ledger template");

 if ((VAR_3 = FUNC_1(VAR_2, "cpu_time", "sched", "ns")) < 0) {
  FUNC_4("couldn't create cpu_time entry for bank ledger template");
 }
 VAR_1.cpu_time = VAR_3;

 if ((VAR_3 = FUNC_1(VAR_2, "energy", "power", "nj")) < 0) {
  FUNC_4("couldn't create energy entry for bank ledger template");
 }
 VAR_1.energy = VAR_3;

 FUNC_2(VAR_2);
 VAR_0 = VAR_2;
}
