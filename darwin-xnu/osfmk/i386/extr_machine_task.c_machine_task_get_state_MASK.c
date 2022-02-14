
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int ds32; int ds64; } ;
struct TYPE_7__ {int flavor; void* count; } ;
struct TYPE_9__ {TYPE_2__ uds; TYPE_1__ dsh; } ;
typedef TYPE_3__ x86_debug_state_t ;
typedef int x86_debug_state64_t ;
typedef int x86_debug_state32_t ;
typedef int * thread_state_t ;
typedef TYPE_4__* task_t ;
typedef void* mach_msg_type_number_t ;
typedef int kern_return_t ;
struct TYPE_10__ {int * task_debug; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int *,int ) ;
 int FUNC_2 (int *,int *,int ) ;
 int FUNC_3 (TYPE_4__*) ;


 void* VAR_3 ;

 void* VAR_4 ;
 void* VAR_5 ;

kern_return_t
FUNC_4(task_t VAR_6,
  int VAR_7,
  thread_state_t VAR_8,
  mach_msg_type_number_t *VAR_9)
{
 switch (VAR_7) {
  case 129:
  {
   x86_debug_state32_t *VAR_10 = (x86_debug_state32_t*) VAR_8;

   if ((FUNC_3(VAR_6)) || (*VAR_9 != VAR_3)) {
    return VAR_0;
   }

   if (VAR_6->task_debug == ((void*)0)) {
    FUNC_0(VAR_8, sizeof(*VAR_10));
   } else {
    FUNC_1((x86_debug_state32_t*) VAR_6->task_debug, VAR_10, VAR_2);
   }

   return VAR_1;
  }
  case 128:
  {
   x86_debug_state64_t *VAR_11 = (x86_debug_state64_t*) VAR_8;

   if ((!FUNC_3(VAR_6)) || (*VAR_9 != VAR_4)) {
    return VAR_0;
   }

   if (VAR_6->task_debug == ((void*)0)) {
    FUNC_0(VAR_8, sizeof(*VAR_11));
   } else {
    FUNC_2((x86_debug_state64_t*) VAR_6->task_debug, VAR_11, VAR_2);
   }

   return VAR_1;
  }
  case 130:
  {
   x86_debug_state_t *VAR_12 = (x86_debug_state_t*)VAR_8;

   if (*VAR_9 != VAR_5)
    return(VAR_0);

   if (FUNC_3(VAR_6)) {
    VAR_12->dsh.flavor = 128;
    VAR_12->dsh.count = VAR_4;

    if (VAR_6->task_debug == ((void*)0)) {
     FUNC_0(&VAR_12->uds.ds64, sizeof(VAR_12->uds.ds64));
    } else {
     FUNC_2((x86_debug_state64_t*)VAR_6->task_debug, &VAR_12->uds.ds64, VAR_2);
    }
   } else {
    VAR_12->dsh.flavor = 129;
    VAR_12->dsh.count = VAR_3;

    if (VAR_6->task_debug == ((void*)0)) {
     FUNC_0(&VAR_12->uds.ds32, sizeof(VAR_12->uds.ds32));
    } else {
     FUNC_1((x86_debug_state32_t*)VAR_6->task_debug, &VAR_12->uds.ds32, VAR_2);
    }
   }

   return VAR_1;
  }
  default:
  {
   return VAR_0;
  }
 }
}
