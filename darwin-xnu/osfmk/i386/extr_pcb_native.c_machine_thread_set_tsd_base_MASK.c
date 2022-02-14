
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef TYPE_2__* thread_t ;
struct real_descriptor {int limit_low; int base_low; int base_med; int base_high; int access; int granularity; int limit_high; } ;
typedef TYPE_3__* pcb_t ;
typedef int mach_vm_offset_t ;
typedef int kern_return_t ;
struct TYPE_12__ {int cu_user_gs_base; } ;
struct TYPE_15__ {TYPE_1__ cpu_uber; } ;
typedef TYPE_4__ cpu_data_t ;
struct TYPE_16__ {int gs; } ;
struct TYPE_14__ {int cthread_self; struct real_descriptor cthread_desc; int iss; } ;
struct TYPE_13__ {scalar_t__ task; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_3__* FUNC_1 (TYPE_2__*) ;
 int VAR_8 ;
 int VAR_9 ;
 TYPE_4__* FUNC_2 () ;
 TYPE_2__* FUNC_3 () ;
 scalar_t__ VAR_10 ;
 struct real_descriptor* FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (int ) ;
 TYPE_6__* FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (int ,int) ;

kern_return_t
FUNC_11(
 thread_t VAR_11,
 mach_vm_offset_t VAR_12)
{

 if (VAR_11->task == VAR_10) {
  return VAR_3;
 }

 if (FUNC_9(VAR_11)) {

  if (!FUNC_0(VAR_12))
   VAR_12 = 0ULL;
 } else {
  if (VAR_12 > VAR_8)
   VAR_12 = 0ULL;
 }

 pcb_t VAR_13 = FUNC_1(VAR_11);
 VAR_13->cthread_self = VAR_12;

 if (!FUNC_9(VAR_11)) {

  struct real_descriptor VAR_14 = {
   .limit_low = 1,
   .limit_high = 0,
   .base_low = VAR_12 & 0xffff,
   .base_med = (VAR_12 >> 16) & 0xff,
   .base_high = (VAR_12 >> 24) & 0xff,
   .access = VAR_1|VAR_2|VAR_0,
   .granularity = VAR_6|VAR_7,
  };

  VAR_13->cthread_desc = VAR_14;
  FUNC_8(VAR_13->iss)->gs = VAR_9;
 }


 if (VAR_11 == FUNC_3()) {

  if (FUNC_9(VAR_11)) {
   cpu_data_t *VAR_15;

   FUNC_5();
   VAR_15 = FUNC_2();
   if ((VAR_15->cpu_uber.cu_user_gs_base != VAR_13->cthread_self) ||
    (VAR_13->cthread_self != FUNC_7(VAR_5)))
    FUNC_10(VAR_5, VAR_12);
   VAR_15->cpu_uber.cu_user_gs_base = VAR_12;
   FUNC_6();
  } else {


   FUNC_5();
   *FUNC_4(VAR_9) = VAR_13->cthread_desc;
   FUNC_6();
  }
 }

 return VAR_4;
}
