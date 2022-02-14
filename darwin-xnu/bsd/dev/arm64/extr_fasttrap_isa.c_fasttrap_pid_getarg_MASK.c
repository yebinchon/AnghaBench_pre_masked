
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int user_addr_t ;
typedef int uint64_t ;
typedef int uint32_t ;
typedef int dtrace_id_t ;
typedef int arm_saved_state_t ;
struct TYPE_4__ {scalar_t__ sp; int * r; } ;
struct TYPE_3__ {scalar_t__ sp; int * x; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int * FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int *) ;
 TYPE_2__* FUNC_7 (int *) ;
 TYPE_1__* FUNC_8 (int *) ;

uint64_t
FUNC_9(void *VAR_2, dtrace_id_t VAR_3, void *VAR_4, int VAR_5,
  int VAR_6)
{
#pragma unused(arg, id, parg, aframes)
 arm_saved_state_t* VAR_7 = FUNC_5(FUNC_2());

 if (FUNC_6(VAR_7)) {

  if (VAR_5 < 4)
   return FUNC_7(VAR_7)->r[VAR_5];


  uint32_t VAR_8;
  uint32_t* VAR_9 = (uint32_t*)(uintptr_t) FUNC_7(VAR_7)->sp;
  FUNC_1(VAR_1);
  VAR_8 = FUNC_3((user_addr_t) (VAR_9+VAR_5-4));
  FUNC_0(VAR_1 | VAR_0);

  return VAR_8;
 }
 else {

  if (VAR_5 < 8)
   return FUNC_8(VAR_7)->x[VAR_5];


  uint64_t VAR_10;
  uint64_t* VAR_11 = (uint64_t*) FUNC_8(VAR_7)->sp;
  FUNC_1(VAR_1);
  VAR_10 = FUNC_4((user_addr_t) (VAR_11+VAR_5-8));
  FUNC_0(VAR_1 | VAR_0);

  return VAR_10;
 }

}
