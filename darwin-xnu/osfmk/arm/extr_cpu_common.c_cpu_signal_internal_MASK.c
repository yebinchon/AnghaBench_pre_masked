
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int kern_return_t ;
struct TYPE_5__ {int cpu_signal; unsigned int failed_signal; int cpu_id; int failed_signal_count; void* cpu_xcall_p1; void* cpu_xcall_p0; void* failed_xcall; } ;
typedef TYPE_1__ cpu_data_t ;
typedef scalar_t__ boolean_t ;
typedef scalar_t__ Boolean ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int,int,int*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (TYPE_1__*) ;
 TYPE_1__* FUNC_7 () ;
 scalar_t__ FUNC_8 (scalar_t__) ;

__attribute__((used)) static kern_return_t
FUNC_9(cpu_data_t *VAR_7,
      unsigned int VAR_8,
      void *VAR_9,
      void *VAR_10,
      boolean_t VAR_11)
{
 unsigned int VAR_12;
 int VAR_13;
 Boolean VAR_14;
 boolean_t VAR_15 = FUNC_8(VAR_1);
 cpu_data_t *VAR_16 = FUNC_7();


 if (VAR_11) {
  FUNC_5(VAR_8 == VAR_5);
 }

 if (VAR_16 != VAR_7)
  VAR_12 = VAR_4;
 else
  VAR_12 = 0;

 if (VAR_8 == VAR_6) {
  do {
   VAR_13 = VAR_7->cpu_signal;
   if ((VAR_13 & VAR_4) == VAR_4) {





    FUNC_8(VAR_15);
    return VAR_2;
   }
   VAR_14 = FUNC_0(VAR_13 & (~VAR_6), VAR_13 | VAR_6,
     &VAR_7->cpu_signal);




   if (!VAR_14 && (VAR_16->cpu_signal & VAR_6))
    FUNC_6(VAR_16);

  } while (!VAR_14);

  VAR_7->cpu_xcall_p0 = VAR_9;
  VAR_7->cpu_xcall_p1 = VAR_10;
 } else {
  do {
   VAR_13 = VAR_7->cpu_signal;
   if ((VAR_12 !=0 ) && (VAR_13 & VAR_12) == VAR_4) {




    FUNC_8(VAR_15);
    return VAR_2;
   }

   VAR_14 = FUNC_0(VAR_13, VAR_13 | VAR_8,
     &VAR_7->cpu_signal);
  } while (!VAR_14);
 }







 FUNC_4(VAR_0);

 if (!(VAR_7->cpu_signal & VAR_4)) {
  if (VAR_11) {
   FUNC_3(FUNC_7()->cpu_id, VAR_7->cpu_id);
  } else {
   FUNC_2(FUNC_7()->cpu_id, VAR_7->cpu_id);
  }
 }

 FUNC_8(VAR_15);
 return (VAR_3);
}
