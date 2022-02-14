
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int ipi_cnt_wake; int ipi_cnt; } ;
struct TYPE_6__ {int cpu_signal; int cpu_int_state; int cpu_processor; scalar_t__ cpu_number; TYPE_1__ cpu_stat; } ;
typedef TYPE_2__ cpu_data_t ;
typedef scalar_t__ boolean_t ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 () ;
 TYPE_2__* FUNC_6 () ;
 int FUNC_7 (int *,unsigned int) ;
 unsigned int FUNC_8 (int *,unsigned int) ;
 int FUNC_9 (unsigned int) ;
 int FUNC_10 (scalar_t__) ;

void
FUNC_11(boolean_t VAR_12)
{
 cpu_data_t *VAR_13 = FUNC_6();
 unsigned int VAR_14;


 VAR_13->cpu_stat.ipi_cnt++;
 VAR_13->cpu_stat.ipi_cnt_wake++;

 FUNC_1(FUNC_5());

 VAR_14 = FUNC_8(&VAR_13->cpu_signal, 0);

 if ((!(VAR_14 & VAR_8)) && (VAR_12 == VAR_11))
  (void)FUNC_8(&VAR_13->cpu_signal, VAR_8);
 else if ((VAR_14 & VAR_8) && (VAR_12 == VAR_0))
  (void)FUNC_7(&VAR_13->cpu_signal, ~VAR_8);

 while (VAR_14 & ~VAR_8) {
  if (VAR_14 & VAR_7) {
   (void)FUNC_7(&VAR_13->cpu_signal, ~VAR_7);
   FUNC_10(VAR_0);
  }






  if (VAR_14 & VAR_10) {
   FUNC_4(VAR_13);
  }
  if (VAR_14 & VAR_5) {
   (void)FUNC_7(&VAR_13->cpu_signal, ~VAR_5);
   FUNC_2(VAR_13->cpu_processor);
  }
  if (VAR_14 & VAR_6) {
   (void)FUNC_7(&VAR_13->cpu_signal, ~VAR_6);
   FUNC_0(VAR_13->cpu_int_state);
  }
  VAR_14 = FUNC_8(&VAR_13->cpu_signal, 0);
 }
}
