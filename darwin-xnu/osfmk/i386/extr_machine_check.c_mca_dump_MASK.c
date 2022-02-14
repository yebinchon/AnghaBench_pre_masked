
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_9__ {scalar_t__ u64; } ;
struct TYPE_8__ {scalar_t__ mca_is_saved; TYPE_2__ mca_mcg_status; int mca_is_valid; } ;
typedef TYPE_1__ mca_state_t ;
typedef TYPE_2__ ia32_mcg_status_t ;
struct TYPE_12__ {TYPE_1__* cpu_mca_state; } ;
struct TYPE_11__ {TYPE_1__* cpu_mca_state; } ;
struct TYPE_10__ {int u64; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_7__* FUNC_0 (unsigned int) ;
 int FUNC_1 () ;
 TYPE_6__* FUNC_2 () ;
 TYPE_5__ VAR_5 ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (TYPE_1__*) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_5 () ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (char*,unsigned int,...) ;
 unsigned int VAR_9 ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

void
FUNC_10(void)
{
 mca_state_t *VAR_10 = FUNC_2()->cpu_mca_state;
 uint64_t VAR_11;
 unsigned int VAR_12 = 0;




 FUNC_6(VAR_10);





 FUNC_8(&VAR_8);
 if (VAR_6 > VAR_0) {
  FUNC_9(&VAR_8);
  while (VAR_6 == VAR_2)
   FUNC_1();
  return;
 }
 VAR_6 = VAR_2;
 FUNC_9(&VAR_8);





 VAR_11 = FUNC_3() + VAR_4;
 while (FUNC_3() < VAR_11 && VAR_12 < VAR_9) {
  if (!FUNC_0(VAR_12)->cpu_mca_state->mca_is_saved) {
   FUNC_1();
   continue;
  }
  VAR_12 += 1;
 }




 FUNC_7("Machine-check capabilities: 0x%016qx\n", VAR_5.u64);

 FUNC_5();

 FUNC_7(" %d error-reporting banks\n", VAR_7);




 for (VAR_12 = 0; VAR_12 < VAR_9; VAR_12++) {
  mca_state_t *VAR_13 = FUNC_0(VAR_12)->cpu_mca_state;
  ia32_mcg_status_t VAR_14;

  if (VAR_13 == ((void*)0) ||
      VAR_13->mca_is_saved == VAR_3 ||
      VAR_13->mca_mcg_status.u64 == 0 ||
      !VAR_13->mca_is_valid) {
   continue;
  }
  VAR_14 = VAR_13->mca_mcg_status;
  FUNC_7("Processor %d: IA32_MCG_STATUS: 0x%016qx\n",
   VAR_12, VAR_14.u64);
  FUNC_4(VAR_13);
 }


 VAR_6 = VAR_1;
}
