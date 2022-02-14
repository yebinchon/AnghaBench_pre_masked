
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef TYPE_1__* processor_t ;
typedef int checkin_mask_t ;
struct TYPE_3__ {int cpu_id; scalar_t__ cpu_quiesce_state; scalar_t__ cpu_quiesce_last_checkin; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,char*,int,int) ;
 int FUNC_3 (int) ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (int) ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (int) ;
 int VAR_4 ;
 TYPE_1__* FUNC_7 () ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *,int,int ) ;
 int VAR_5 ;

void
FUNC_10(uint64_t VAR_6)
{
 processor_t VAR_7 = FUNC_7();
 int VAR_8 = VAR_7->cpu_id;

 FUNC_1(VAR_7->cpu_quiesce_state != VAR_1);


 if (FUNC_0(VAR_7->cpu_quiesce_state != VAR_0))
  return;


 if (FUNC_0((VAR_6 - VAR_7->cpu_quiesce_last_checkin) <= VAR_3))
  return;

 VAR_7->cpu_quiesce_last_checkin = VAR_6;

 checkin_mask_t VAR_9 = FUNC_8(&VAR_4, VAR_5);

 FUNC_1((VAR_9 & FUNC_4(VAR_8)));

 if (FUNC_0((VAR_9 & FUNC_3(VAR_8)))) {




  return;
 }

 checkin_mask_t VAR_10 = FUNC_9(&VAR_4,
                                               FUNC_3(VAR_8), VAR_2);

 checkin_mask_t VAR_11 = VAR_10 | FUNC_3(VAR_8);

 if (FUNC_6(VAR_11)) {
  FUNC_2(!FUNC_6(VAR_10),
          "old: 0x%lx, new: 0x%lx", VAR_10, VAR_11);
  FUNC_5(VAR_6);
 }
}
