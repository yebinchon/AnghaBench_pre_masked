
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef TYPE_1__* processor_t ;
typedef int checkin_mask_t ;
struct TYPE_3__ {int cpu_id; scalar_t__ cpu_quiesce_state; int cpu_quiesce_last_checkin; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 void* VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int) ;
 int VAR_5 ;
 TYPE_1__* FUNC_6 () ;
 int FUNC_7 (int *,int,int ) ;

void
FUNC_8(uint64_t VAR_6)
{
 processor_t VAR_7 = FUNC_6();
 int VAR_8 = VAR_7->cpu_id;

 FUNC_0(VAR_7->cpu_quiesce_state == VAR_1 ||
        VAR_7->cpu_quiesce_state == VAR_3);


 FUNC_1(VAR_0);

 if (VAR_7->cpu_quiesce_state == VAR_3) {

  VAR_7->cpu_quiesce_state = VAR_2;
  return;
 }


 VAR_7->cpu_quiesce_last_checkin = VAR_6;

 checkin_mask_t VAR_9 = FUNC_2(VAR_8) | FUNC_3(VAR_8);

 checkin_mask_t VAR_10 = FUNC_7(&VAR_5,
                                                ~VAR_9, VAR_4);

 FUNC_0((VAR_10 & FUNC_3(VAR_8)));

 VAR_7->cpu_quiesce_state = VAR_2;

 if (FUNC_5(VAR_10)) {






  return;
 }

 checkin_mask_t VAR_11 = VAR_10 & ~VAR_9;

 if (FUNC_5(VAR_11)) {
  FUNC_4(VAR_6);
 }
}
