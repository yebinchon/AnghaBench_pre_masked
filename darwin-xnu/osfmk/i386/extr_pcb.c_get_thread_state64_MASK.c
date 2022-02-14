
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int gs; int fs; int cs; int rip; int rflags; int rsp; int rbp; int rsi; int rdi; int rdx; int rcx; int rbx; int rax; int r15; int r14; int r13; int r12; int r11; int r10; int r9; int r8; } ;
typedef TYPE_2__ x86_thread_state64_t ;
struct TYPE_6__ {int cs; int rip; int rflags; int rsp; } ;
struct TYPE_8__ {int gs; int fs; TYPE_1__ isf; int rbp; int rsi; int rdi; int rdx; int rcx; int rbx; int rax; int r15; int r14; int r13; int r12; int r11; int r10; int r9; int r8; } ;
typedef TYPE_3__ x86_saved_state64_t ;
typedef int thread_t ;


 TYPE_3__* FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void
FUNC_2(thread_t VAR_1, x86_thread_state64_t *VAR_2)
{
        x86_saved_state64_t *VAR_3;

 FUNC_1(VAR_1, VAR_0);

 VAR_3 = FUNC_0(VAR_1);

 VAR_2->r8 = VAR_3->r8;
 VAR_2->r9 = VAR_3->r9;
 VAR_2->r10 = VAR_3->r10;
 VAR_2->r11 = VAR_3->r11;
 VAR_2->r12 = VAR_3->r12;
 VAR_2->r13 = VAR_3->r13;
 VAR_2->r14 = VAR_3->r14;
 VAR_2->r15 = VAR_3->r15;
 VAR_2->rax = VAR_3->rax;
 VAR_2->rbx = VAR_3->rbx;
 VAR_2->rcx = VAR_3->rcx;
 VAR_2->rdx = VAR_3->rdx;
 VAR_2->rdi = VAR_3->rdi;
 VAR_2->rsi = VAR_3->rsi;
 VAR_2->rbp = VAR_3->rbp;
 VAR_2->rsp = VAR_3->isf.rsp;
 VAR_2->rflags = VAR_3->isf.rflags;
 VAR_2->rip = VAR_3->isf.rip;
 VAR_2->cs = VAR_3->isf.cs;
 VAR_2->fs = VAR_3->fs;
 VAR_2->gs = VAR_3->gs;
}
