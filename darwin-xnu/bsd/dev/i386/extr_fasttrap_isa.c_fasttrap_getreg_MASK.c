
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int x86_saved_state_t ;
struct TYPE_6__ {int ss; int rflags; int cs; int rip; int err; int trapno; int rsp; } ;
struct TYPE_7__ {int gs; int fs; TYPE_1__ isf; int r15; int r14; int r13; int r12; int r11; int r10; int r9; int r8; int rdi; int rsi; int rbp; int rbx; int rdx; int rcx; int rax; } ;
typedef TYPE_2__ x86_saved_state64_t ;
struct TYPE_8__ {int edi; int esi; int ebp; int uesp; int ebx; int edx; int ecx; int eax; } ;
typedef TYPE_3__ x86_saved_state32_t ;
typedef int user_addr_t ;
typedef int uint_t ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (char*) ;
 TYPE_3__* FUNC_2 (int *) ;
 TYPE_2__* FUNC_3 (int *) ;

__attribute__((used)) static user_addr_t
FUNC_4(x86_saved_state_t *VAR_0, uint_t VAR_1)
{
 if (FUNC_0(VAR_0)) {
  x86_saved_state64_t *VAR_2 = FUNC_3(VAR_0);

  switch (VAR_1) {
   case 139: return VAR_2->rax;
   case 136: return VAR_2->rcx;
   case 134: return VAR_2->rdx;
   case 137: return VAR_2->rbx;
   case 130: return VAR_2->isf.rsp;
   case 138: return VAR_2->rbp;
   case 131: return VAR_2->rsi;
   case 135: return VAR_2->rdi;
   case 141: return VAR_2->r8;
   case 140: return VAR_2->r9;
   case 147: return VAR_2->r10;
   case 146: return VAR_2->r11;
   case 145: return VAR_2->r12;
   case 144: return VAR_2->r13;
   case 143: return VAR_2->r14;
   case 142: return VAR_2->r15;
   case 128: return VAR_2->isf.trapno;
   case 153: return VAR_2->isf.err;
   case 132: return VAR_2->isf.rip;
   case 155: return VAR_2->isf.cs;
   case 133: return VAR_2->isf.rflags;
   case 129: return VAR_2->isf.ss;
   case 151: return VAR_2->fs;
   case 149: return VAR_2->gs;
   case 152:
   case 154:
   case 150:
   case 148:

    FUNC_1("dtrace: unimplemented x86_64 getreg()");
  }

  FUNC_1("dtrace: unhandled x86_64 getreg() constant");
 } else {
  x86_saved_state32_t *VAR_3 = FUNC_2(VAR_0);

  switch (VAR_1) {
   case 139: return VAR_3->eax;
   case 136: return VAR_3->ecx;
   case 134: return VAR_3->edx;
   case 137: return VAR_3->ebx;
   case 130: return VAR_3->uesp;
   case 138: return VAR_3->ebp;
   case 131: return VAR_3->esi;
   case 135: return VAR_3->edi;
  }

  FUNC_1("dtrace: unhandled i386 getreg() constant");
 }

 return 0;
}
