
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint64_t ;
typedef int thread_t ;
typedef TYPE_1__* task_t ;
typedef int mach_port_t ;
typedef int kern_return_t ;
typedef int int32_t ;
typedef TYPE_2__* atm_task_descriptor_t ;
struct TYPE_10__ {int trace_buffer_size; int trace_buffer; } ;
struct TYPE_9__ {TYPE_2__* atm_context; } ;


 TYPE_2__* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int ,int ,int ,int ) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 () ;
 scalar_t__ VAR_8 ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 () ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;

kern_return_t
FUNC_14(
 task_t VAR_9,
 int32_t VAR_10,
 uint64_t VAR_11)
{
 mach_port_t VAR_12 = VAR_6;
 mach_port_t VAR_13 = VAR_6;
 kern_return_t VAR_14;
 atm_task_descriptor_t VAR_15 = VAR_0;
 uint64_t VAR_16 = 0;
 int VAR_17;
 thread_t VAR_18 = FUNC_5();

 if (VAR_8 || (FUNC_2() & VAR_1))
  return VAR_4;


 if (!VAR_9)
  return VAR_3;

 FUNC_10(VAR_9);
 if (VAR_9->atm_context){
  VAR_15 = VAR_9->atm_context;
  FUNC_1(VAR_15);
 }
 FUNC_11(VAR_9);

 if (VAR_15 == VAR_0){
  return VAR_2;
 }

 VAR_13 = FUNC_8(VAR_15->trace_buffer);
 VAR_16 = VAR_15->trace_buffer_size;
 FUNC_4(VAR_15);


 VAR_17 = FUNC_6(FUNC_7(), &VAR_12);
 if ((VAR_17 != VAR_5) || !FUNC_0(VAR_12)) {
  FUNC_9(VAR_13);
  return VAR_2;
 }

 FUNC_13(VAR_18);
 VAR_14 = FUNC_3(VAR_12, VAR_10, VAR_11, VAR_16, VAR_13);
 FUNC_12(VAR_18);

 if (VAR_14 != VAR_5) {
  FUNC_9(VAR_12);

  if (VAR_14 == VAR_7) {
   VAR_14 = VAR_5;
  }
 }

 FUNC_9(VAR_13);
 return VAR_14;
}
