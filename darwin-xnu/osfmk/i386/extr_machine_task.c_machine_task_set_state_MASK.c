
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int ds64; int ds32; } ;
struct TYPE_7__ {int const flavor; int count; } ;
struct TYPE_9__ {TYPE_2__ uds; TYPE_1__ dsh; } ;
typedef TYPE_3__ x86_debug_state_t ;
typedef int x86_debug_state64_t ;
typedef int x86_debug_state32_t ;
typedef scalar_t__ thread_state_t ;
typedef TYPE_4__* task_t ;
typedef int mach_msg_type_number_t ;
typedef int kern_return_t ;
struct TYPE_10__ {int * task_debug; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int *,int ) ;
 int FUNC_1 (int *,int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_3 ;
 int FUNC_4 (TYPE_4__*) ;


 int VAR_4 ;

 int VAR_5 ;
 int VAR_6 ;
 void* FUNC_5 (int ) ;

kern_return_t
FUNC_6(
  task_t VAR_7,
  int VAR_8,
  thread_state_t VAR_9,
  mach_msg_type_number_t VAR_10)
{
 switch (VAR_8) {
  case 129:
  {
   x86_debug_state32_t *VAR_11 = (x86_debug_state32_t*) VAR_9;
   if ((FUNC_4(VAR_7)) ||
     (VAR_10 != VAR_4) ||
     (!FUNC_2(VAR_11))) {
    return VAR_1;
   }

   if (VAR_7->task_debug == ((void*)0)) {
    VAR_7->task_debug = FUNC_5(VAR_3);
   }

   FUNC_0(VAR_11, (x86_debug_state32_t*) VAR_7->task_debug, VAR_0);

   return VAR_2;
  }
  case 128:
  {
   x86_debug_state64_t *VAR_12 = (x86_debug_state64_t*) VAR_9;

   if ((!FUNC_4(VAR_7)) ||
     (VAR_10 != VAR_5) ||
     (!FUNC_3(VAR_12))) {
    return VAR_1;
   }

   if (VAR_7->task_debug == ((void*)0)) {
    VAR_7->task_debug = FUNC_5(VAR_3);
   }

   FUNC_1(VAR_12, (x86_debug_state64_t*) VAR_7->task_debug, VAR_0);

   return VAR_2;
  }
  case 130:
  {
   x86_debug_state_t *VAR_13 = (x86_debug_state_t*) VAR_9;

   if (VAR_10 != VAR_6) {
    return VAR_1;
   }

   if ((VAR_13->dsh.flavor == 129) &&
     (VAR_13->dsh.count == VAR_4) &&
     (!FUNC_4(VAR_7)) &&
     FUNC_2(&VAR_13->uds.ds32)) {

    if (VAR_7->task_debug == ((void*)0)) {
     VAR_7->task_debug = FUNC_5(VAR_3);
    }

    FUNC_0(&VAR_13->uds.ds32, (x86_debug_state32_t*) VAR_7->task_debug, VAR_0);
    return VAR_2;

   } else if ((VAR_13->dsh.flavor == 128) &&
     (VAR_13->dsh.count == VAR_5) &&
     FUNC_4(VAR_7) &&
     FUNC_3(&VAR_13->uds.ds64)) {

    if (VAR_7->task_debug == ((void*)0)) {
     VAR_7->task_debug = FUNC_5(VAR_3);
    }

    FUNC_1(&VAR_13->uds.ds64, (x86_debug_state64_t*) VAR_7->task_debug, VAR_0);
    return VAR_2;
   } else {
    return VAR_1;
   }
  }
  default:
  {
   return VAR_1;
  }
 }
}
