
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


union smp_flush_state {scalar_t__ flush_mm; scalar_t__ flush_va; int flush_cpumask; } ;
struct pt_regs {unsigned int orig_ax; } ;
struct TYPE_4__ {int state; int active_mm; } ;
struct TYPE_3__ {scalar_t__ active_mm; } ;


 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 () ;
 TYPE_2__ VAR_3 ;
 int FUNC_2 (unsigned int,int ) ;
 int FUNC_3 (unsigned int,int ) ;
 TYPE_1__* VAR_4 ;
 union smp_flush_state* VAR_5 ;
 int FUNC_4 (int ) ;
 int VAR_6 ;
 int FUNC_5 (unsigned int) ;
 int FUNC_6 (unsigned int,scalar_t__) ;
 int FUNC_7 () ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 unsigned int FUNC_11 () ;
 int FUNC_12 (int ) ;

void FUNC_13(struct pt_regs *VAR_7)
{
 unsigned int VAR_8;
 unsigned int VAR_9;
 union smp_flush_state *VAR_10;

 VAR_8 = FUNC_11();
 VAR_9 = ~VAR_7->orig_ax - VAR_0;
 VAR_10 = &VAR_5[VAR_9];

 if (!FUNC_3(VAR_8, FUNC_12(VAR_10->flush_cpumask)))
  goto out;
 if (VAR_10->flush_mm == FUNC_8(VAR_3.active_mm)) {
  if (FUNC_8(VAR_3.state) == VAR_1) {
   if (VAR_10->flush_va == VAR_2)
    FUNC_7();
   else
    FUNC_0(VAR_10->flush_va);
  } else
   FUNC_5(VAR_8);
 }
out:
 FUNC_1();
 FUNC_10();
 FUNC_2(VAR_8, FUNC_12(VAR_10->flush_cpumask));
 FUNC_9();
 FUNC_4(VAR_6);
}
