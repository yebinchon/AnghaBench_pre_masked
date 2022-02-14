
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
typedef TYPE_1__* thread_t ;
typedef scalar_t__ ledger_t ;
struct TYPE_5__ {int cpu_time; } ;
struct TYPE_4__ {scalar_t__ t_threadledger; int options; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int) ;
 int VAR_13 ;
 TYPE_1__* FUNC_1 () ;
 int FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (scalar_t__,int ) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 int FUNC_5 (scalar_t__,int ,int ) ;
 int FUNC_6 (scalar_t__,int ,int,int ) ;
 int FUNC_7 (scalar_t__,int ,int) ;
 int FUNC_8 (int,int*) ;
 int FUNC_9 (char*) ;
 int VAR_14 ;
 TYPE_2__ VAR_15 ;

int
FUNC_10(int VAR_16, uint8_t VAR_17, uint64_t VAR_18)
{
 thread_t VAR_19 = FUNC_1();
 ledger_t VAR_20;
 uint64_t VAR_21 = 0;
 uint64_t VAR_22 = 0;

 FUNC_0(VAR_17 <= 100);

 if (VAR_16 == VAR_9) {



  if (VAR_19->t_threadledger != VAR_6) {
   VAR_20 = VAR_19->t_threadledger;
   FUNC_6(VAR_20, VAR_15.cpu_time, VAR_5, 0);
   FUNC_5(VAR_20, VAR_15.cpu_time, VAR_3);
   VAR_19->options &= ~(VAR_11 | VAR_12);
  }

  return (0);
 }

 if (VAR_18 < VAR_7 * VAR_8) {
  return (VAR_0);
 }

  VAR_20 = VAR_19->t_threadledger;
 if (VAR_20 == VAR_6) {



  if ((VAR_20 = FUNC_4(VAR_14, VAR_4)) == VAR_6)
   return (VAR_1);




  FUNC_3(VAR_20, VAR_15.cpu_time);
  VAR_19->t_threadledger = VAR_20;
 }





 VAR_21 = (VAR_18 * VAR_17) / 100;
 FUNC_8(VAR_21, &VAR_22);
 FUNC_6(VAR_20, VAR_15.cpu_time, VAR_22, VAR_13);



 FUNC_7(VAR_20, VAR_15.cpu_time, VAR_18);

 if (VAR_16 == VAR_10) {




  if (VAR_19->options & VAR_12) {
   FUNC_9("CPU usage monitor activated, but blocking thread limit exists");
  }







  VAR_19->options |= VAR_11;
 } else {




  VAR_19->options &= ~VAR_11;

  VAR_19->options |= VAR_12;

  FUNC_2(VAR_20, VAR_15.cpu_time);
  FUNC_5(VAR_20, VAR_15.cpu_time, VAR_2);
 }

 return (0);
}
