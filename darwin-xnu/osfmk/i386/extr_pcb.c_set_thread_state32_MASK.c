
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ cs; int eflags; int gs; int fs; void* es; void* ds; void* ss; int eip; int esp; int ebp; int esi; int edi; int edx; int ecx; int ebx; int eax; } ;
typedef TYPE_2__ x86_thread_state32_t ;
struct TYPE_12__ {int efl; scalar_t__ cs; int gs; int fs; void* es; void* ds; void* ss; int eip; int uesp; int ebp; int esi; int edi; int edx; int ecx; int ebx; int eax; } ;
typedef TYPE_3__ x86_saved_state32_t ;
typedef TYPE_4__* thread_t ;
struct TYPE_10__ {scalar_t__ cthread_self; } ;
struct TYPE_13__ {TYPE_1__ machine; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 void* VAR_11 ;
 TYPE_3__* FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_4__*,int ) ;
 int FUNC_2 (scalar_t__,void*,void*,void*,int ,int ) ;

__attribute__((used)) static int
FUNC_3(thread_t VAR_12, x86_thread_state32_t *VAR_13)
{
        x86_saved_state32_t *VAR_14;

 FUNC_1(VAR_12, VAR_0);

 VAR_14 = FUNC_0(VAR_12);




 VAR_13->cs = VAR_9;






 VAR_13->ss = VAR_11;
 VAR_13->ds = VAR_11;
 VAR_13->es = VAR_11;


 VAR_13->gs = VAR_12->machine.cthread_self ? VAR_10 : VAR_6;


 if (!FUNC_2(VAR_13->cs,
       VAR_13->ss,
       VAR_13->ds,
       VAR_13->es,
       VAR_13->fs,
       VAR_13->gs))
  return(VAR_4);

 VAR_14->eax = VAR_13->eax;
 VAR_14->ebx = VAR_13->ebx;
 VAR_14->ecx = VAR_13->ecx;
 VAR_14->edx = VAR_13->edx;
 VAR_14->edi = VAR_13->edi;
 VAR_14->esi = VAR_13->esi;
 VAR_14->ebp = VAR_13->ebp;
 VAR_14->uesp = VAR_13->esp;
 VAR_14->efl = (VAR_13->eflags & ~VAR_2) | VAR_3;
 VAR_14->eip = VAR_13->eip;
 VAR_14->cs = VAR_13->cs;
 VAR_14->ss = VAR_13->ss;
 VAR_14->ds = VAR_13->ds;
 VAR_14->es = VAR_13->es;
 VAR_14->fs = VAR_13->fs;
 VAR_14->gs = VAR_13->gs;






 if ((VAR_14->efl & VAR_1) && VAR_14->cs == VAR_7)
  VAR_14->cs = VAR_8;

 return(VAR_5);
}
