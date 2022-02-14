
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_10__ ;


struct TYPE_17__ {void* efl; void* gs; void* fs; void* es; void* ds; void* ss; int cs; } ;
struct TYPE_15__ {void* rflags; void* ss; int cs; } ;
struct TYPE_16__ {TYPE_2__ isf; void* gs; void* fs; } ;
struct TYPE_18__ {TYPE_4__ ss_32; int flavor; TYPE_3__ ss_64; } ;
typedef TYPE_5__ x86_saved_state_t ;
typedef TYPE_6__* thread_t ;
typedef int task_t ;
typedef TYPE_7__* pcb_t ;
typedef int kern_return_t ;
struct TYPE_13__ {int access; } ;
struct TYPE_20__ {TYPE_10__ cthread_desc; scalar_t__ thread_gpu_ns; scalar_t__ uldt_selector; scalar_t__ cthread_self; int lock; TYPE_5__* iss; } ;
struct TYPE_14__ {scalar_t__ physwindow_busy; scalar_t__ physwindow_pte; } ;
struct TYPE_19__ {TYPE_1__ machine; } ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 TYPE_7__* FUNC_0 (TYPE_6__*) ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,int) ;
 TYPE_10__* FUNC_3 (void*) ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (TYPE_6__*) ;
 int VAR_6 ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int *,int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_9 (int ) ;

kern_return_t
FUNC_10(
 thread_t VAR_9,
 task_t VAR_10)
{
        pcb_t VAR_11 = FUNC_0(VAR_9);
 if (VAR_11->iss == ((void*)0)) {
  FUNC_1((FUNC_4() == 0));
  VAR_11->iss = (x86_saved_state_t *) FUNC_9(VAR_6);
  if (VAR_11->iss == ((void*)0))
   FUNC_6("iss_zone");
 }






 FUNC_1(sizeof(VAR_11->iss->ss_32) + sizeof(VAR_11->iss->ss_64.isf) <=
        sizeof(VAR_11->iss->ss_64));

 FUNC_2((char *)VAR_11->iss, sizeof(x86_saved_state_t));

        if (FUNC_8(VAR_10)) {
  VAR_11->iss->flavor = VAR_8;

  VAR_11->iss->ss_64.isf.cs = VAR_3;
  VAR_11->iss->ss_64.isf.ss = VAR_5;
  VAR_11->iss->ss_64.fs = VAR_5;
  VAR_11->iss->ss_64.gs = VAR_5;
  VAR_11->iss->ss_64.isf.rflags = VAR_1;
 } else {
  VAR_11->iss->flavor = VAR_7;

  VAR_11->iss->ss_32.cs = VAR_4;
  VAR_11->iss->ss_32.ss = VAR_5;
  VAR_11->iss->ss_32.ds = VAR_5;
  VAR_11->iss->ss_32.es = VAR_5;
  VAR_11->iss->ss_32.fs = VAR_5;
  VAR_11->iss->ss_32.gs = VAR_5;
  VAR_11->iss->ss_32.efl = VAR_1;
 }

 FUNC_7(&VAR_11->lock, 0);

 VAR_11->cthread_self = 0;
 VAR_11->uldt_selector = 0;
 VAR_11->thread_gpu_ns = 0;



 if ((VAR_11->cthread_desc.access & VAR_0) == 0) {
  VAR_11->cthread_desc = *FUNC_3(VAR_5);
 }

 return(VAR_2);
}
