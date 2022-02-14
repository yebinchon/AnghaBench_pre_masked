
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_9__ ;
typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_13__ ;
typedef struct TYPE_14__ TYPE_10__ ;


struct TYPE_19__ {int fs; int gs; int cs; int rflags; int rip; int r15; int r14; int r13; int r12; int r11; int r10; int r9; int r8; int rsp; int rbp; int rsi; int rdi; int rdx; int rcx; int rbx; int rax; } ;
struct TYPE_16__ {int ds; int es; int fs; int gs; int ss; int cs; int eip; int eflags; int esp; int ebp; int esi; int edi; int edx; int ecx; int ebx; int eax; } ;
struct TYPE_20__ {TYPE_4__ ts64; TYPE_1__ ts32; } ;
struct TYPE_17__ {int flavor; void* count; } ;
struct TYPE_21__ {TYPE_5__ uts; TYPE_2__ tsh; } ;
typedef TYPE_6__ x86_thread_state_t ;
struct TYPE_22__ {int fs; int gs; int cs; int rflags; int rip; int r15; int r14; int r13; int r12; int r11; int r10; int r9; int r8; int rsp; int rbp; int rsi; int rdi; int rdx; int rcx; int rbx; int rax; } ;
typedef TYPE_7__ x86_thread_state64_t ;
struct TYPE_23__ {int ds; int es; int fs; int gs; int ss; int cs; int eip; int eflags; int esp; int ebp; int esi; int edi; int edx; int ecx; int ebx; int eax; } ;
typedef TYPE_8__ x86_thread_state32_t ;
typedef int x86_saved_state_t ;
struct TYPE_18__ {int cs; int rflags; int rip; int rsp; } ;
struct TYPE_24__ {int fs; int gs; TYPE_3__ isf; int r15; int r14; int r13; int r12; int r11; int r10; int r9; int r8; int rbp; int rsi; int rdi; int rdx; int rcx; int rbx; int rax; } ;
typedef TYPE_9__ x86_saved_state64_t ;
struct TYPE_14__ {int ds; int es; int fs; int gs; int ss; int cs; int eip; int efl; int uesp; int ebp; int esi; int edi; int edx; int ecx; int ebx; int eax; } ;
typedef TYPE_10__ x86_saved_state32_t ;
typedef scalar_t__ thread_t ;
typedef scalar_t__ thread_state_t ;
typedef int thread_flavor_t ;
typedef void* mach_msg_type_number_t ;
typedef int kern_return_t ;
struct TYPE_15__ {int * cpu_int_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_13__* FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*) ;
 TYPE_10__* FUNC_5 (int *) ;
 TYPE_9__* FUNC_6 (int *) ;


 void* VAR_3 ;

 void* VAR_4 ;
 void* VAR_5 ;

kern_return_t
FUNC_7(
  thread_t VAR_6,
  thread_flavor_t VAR_7,
  thread_state_t VAR_8,
  mach_msg_type_number_t *VAR_9)
{
 x86_saved_state_t *VAR_10 = FUNC_0()->cpu_int_state;




 if (VAR_6 != FUNC_1() || VAR_10 == ((void*)0))
  return VAR_0;

 switch (VAR_7) {
     case 129: {
  x86_thread_state32_t *VAR_11;
  x86_saved_state32_t *VAR_12;

  if (!FUNC_2(VAR_10) ||
      *VAR_9 < VAR_3)
   return (VAR_1);

  VAR_11 = (x86_thread_state32_t *) VAR_8;

  VAR_12 = FUNC_5(VAR_10);



  VAR_11->eax = VAR_12->eax;
  VAR_11->ebx = VAR_12->ebx;
  VAR_11->ecx = VAR_12->ecx;
  VAR_11->edx = VAR_12->edx;
  VAR_11->edi = VAR_12->edi;
  VAR_11->esi = VAR_12->esi;
  VAR_11->ebp = VAR_12->ebp;
  VAR_11->esp = VAR_12->uesp;
  VAR_11->eflags = VAR_12->efl;
  VAR_11->eip = VAR_12->eip;
  VAR_11->cs = VAR_12->cs;
  VAR_11->ss = VAR_12->ss;
  VAR_11->ds = VAR_12->ds & 0xffff;
  VAR_11->es = VAR_12->es & 0xffff;
  VAR_11->fs = VAR_12->fs & 0xffff;
  VAR_11->gs = VAR_12->gs & 0xffff;

  *VAR_9 = VAR_3;

  return VAR_2;
     }

     case 128: {
  x86_thread_state64_t *VAR_13;
  x86_saved_state64_t *VAR_14;

  if (!FUNC_3(VAR_10) ||
      *VAR_9 < VAR_4)
   return (VAR_1);

  VAR_13 = (x86_thread_state64_t *) VAR_8;

  VAR_14 = FUNC_6(VAR_10);



  VAR_13->rax = VAR_14->rax;
  VAR_13->rbx = VAR_14->rbx;
  VAR_13->rcx = VAR_14->rcx;
  VAR_13->rdx = VAR_14->rdx;
  VAR_13->rdi = VAR_14->rdi;
  VAR_13->rsi = VAR_14->rsi;
  VAR_13->rbp = VAR_14->rbp;
  VAR_13->rsp = VAR_14->isf.rsp;
  VAR_13->r8 = VAR_14->r8;
  VAR_13->r9 = VAR_14->r9;
  VAR_13->r10 = VAR_14->r10;
  VAR_13->r11 = VAR_14->r11;
  VAR_13->r12 = VAR_14->r12;
  VAR_13->r13 = VAR_14->r13;
  VAR_13->r14 = VAR_14->r14;
  VAR_13->r15 = VAR_14->r15;

  VAR_13->rip = VAR_14->isf.rip;
  VAR_13->rflags = VAR_14->isf.rflags;
  VAR_13->cs = VAR_14->isf.cs;
  VAR_13->fs = VAR_14->fs & 0xffff;
  VAR_13->gs = VAR_14->gs & 0xffff;
  *VAR_9 = VAR_4;

  return VAR_2;
     }

     case 130: {
  x86_thread_state_t *VAR_15 = ((void*)0);

  if (*VAR_9 < VAR_5)
   return (VAR_1);

  VAR_15 = (x86_thread_state_t *) VAR_8;

  if (FUNC_2(VAR_10)) {
   x86_saved_state32_t *VAR_16 = FUNC_5(VAR_10);

   VAR_15->tsh.flavor = 129;
   VAR_15->tsh.count = VAR_3;




   VAR_15->uts.ts32.eax = VAR_16->eax;
   VAR_15->uts.ts32.ebx = VAR_16->ebx;
   VAR_15->uts.ts32.ecx = VAR_16->ecx;
   VAR_15->uts.ts32.edx = VAR_16->edx;
   VAR_15->uts.ts32.edi = VAR_16->edi;
   VAR_15->uts.ts32.esi = VAR_16->esi;
   VAR_15->uts.ts32.ebp = VAR_16->ebp;
   VAR_15->uts.ts32.esp = VAR_16->uesp;
   VAR_15->uts.ts32.eflags = VAR_16->efl;
   VAR_15->uts.ts32.eip = VAR_16->eip;
   VAR_15->uts.ts32.cs = VAR_16->cs;
   VAR_15->uts.ts32.ss = VAR_16->ss;
   VAR_15->uts.ts32.ds = VAR_16->ds & 0xffff;
   VAR_15->uts.ts32.es = VAR_16->es & 0xffff;
   VAR_15->uts.ts32.fs = VAR_16->fs & 0xffff;
   VAR_15->uts.ts32.gs = VAR_16->gs & 0xffff;
  } else if (FUNC_3(VAR_10)) {
   x86_saved_state64_t *VAR_17 = FUNC_6(VAR_10);

   VAR_15->tsh.flavor = 128;
   VAR_15->tsh.count = VAR_4;




   VAR_15->uts.ts64.rax = VAR_17->rax;
   VAR_15->uts.ts64.rbx = VAR_17->rbx;
   VAR_15->uts.ts64.rcx = VAR_17->rcx;
   VAR_15->uts.ts64.rdx = VAR_17->rdx;
   VAR_15->uts.ts64.rdi = VAR_17->rdi;
   VAR_15->uts.ts64.rsi = VAR_17->rsi;
   VAR_15->uts.ts64.rbp = VAR_17->rbp;
   VAR_15->uts.ts64.rsp = VAR_17->isf.rsp;
   VAR_15->uts.ts64.r8 = VAR_17->r8;
   VAR_15->uts.ts64.r9 = VAR_17->r9;
   VAR_15->uts.ts64.r10 = VAR_17->r10;
   VAR_15->uts.ts64.r11 = VAR_17->r11;
   VAR_15->uts.ts64.r12 = VAR_17->r12;
   VAR_15->uts.ts64.r13 = VAR_17->r13;
   VAR_15->uts.ts64.r14 = VAR_17->r14;
   VAR_15->uts.ts64.r15 = VAR_17->r15;

   VAR_15->uts.ts64.rip = VAR_17->isf.rip;
   VAR_15->uts.ts64.rflags = VAR_17->isf.rflags;
   VAR_15->uts.ts64.cs = VAR_17->isf.cs;
   VAR_15->uts.ts64.fs = VAR_17->fs & 0xffff;
   VAR_15->uts.ts64.gs = VAR_17->gs & 0xffff;
  } else {
   FUNC_4("unknown thread state");
  }

  *VAR_9 = VAR_5;
  return VAR_2;
     }
 }
 return VAR_0;
}
