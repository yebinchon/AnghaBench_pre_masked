
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int esp; int esi; int edi; int edx; int ecx; int ebx; int eax; int eip; } ;
typedef TYPE_1__ x86_thread_state32_t ;
struct TYPE_5__ {void* es; void* ds; void* ss; int cs; int efl; int uesp; int esi; int edi; int edx; int ecx; int ebx; int eax; int eip; scalar_t__ ebp; } ;
typedef TYPE_2__ x86_saved_state32_t ;
typedef scalar_t__ thread_t ;
typedef scalar_t__ thread_state_t ;
typedef int spl_t ;
typedef int kern_return_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 TYPE_2__* FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__) ;

kern_return_t
FUNC_7(thread_t VAR_5, thread_state_t VAR_6)
{
        x86_thread_state32_t *VAR_7;
        x86_saved_state32_t *VAR_8;
 thread_t VAR_9 = FUNC_1();
 spl_t VAR_10=0;

 FUNC_2(VAR_5, VAR_0);

 VAR_8 = FUNC_0(VAR_5);

 VAR_7 = (x86_thread_state32_t *)VAR_6;

 if (VAR_9 != VAR_5) {
  VAR_10 = FUNC_3();
         FUNC_5(VAR_5);
 }

 VAR_8->ebp = 0;
 VAR_8->eip = VAR_7->eip;
 VAR_8->eax = VAR_7->eax;
 VAR_8->ebx = VAR_7->ebx;
 VAR_8->ecx = VAR_7->ecx;
 VAR_8->edx = VAR_7->edx;
 VAR_8->edi = VAR_7->edi;
 VAR_8->esi = VAR_7->esi;
 VAR_8->uesp = VAR_7->esp;
 VAR_8->efl = VAR_1;

 VAR_8->cs = VAR_3;
 VAR_8->ss = VAR_4;
 VAR_8->ds = VAR_4;
 VAR_8->es = VAR_4;

 if (VAR_9 != VAR_5) {
         FUNC_6(VAR_5);
  FUNC_4(VAR_10);
 }

 return VAR_2;
}
