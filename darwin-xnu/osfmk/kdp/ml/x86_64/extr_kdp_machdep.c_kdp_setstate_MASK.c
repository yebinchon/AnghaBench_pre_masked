
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ gs; scalar_t__ fs; int rip; int rsp; int rflags; int r15; int r14; int r13; int r12; int r11; int r10; int r9; int r8; int rbp; int rsi; int rdi; int rdx; int rcx; int rbx; int rax; } ;
typedef TYPE_2__ x86_thread_state64_t ;
struct TYPE_6__ {int rip; int rsp; int rflags; } ;
struct TYPE_8__ {void* gs; void* fs; TYPE_1__ isf; int r15; int r14; int r13; int r12; int r11; int r10; int r9; int r8; int rbp; int rsi; int rdi; int rdx; int rcx; int rbx; int rax; } ;
typedef TYPE_3__ x86_saved_state64_t ;
typedef void* uint32_t ;
struct TYPE_9__ {scalar_t__ saved_state; } ;


 TYPE_5__ VAR_0 ;

void
FUNC_0(
    x86_thread_state64_t *VAR_1
)
{
    x86_saved_state64_t *VAR_2;

    VAR_2 = (x86_saved_state64_t *)VAR_0.saved_state;
    VAR_2->rax = VAR_1->rax;
    VAR_2->rbx = VAR_1->rbx;
    VAR_2->rcx = VAR_1->rcx;
    VAR_2->rdx = VAR_1->rdx;
    VAR_2->rdi = VAR_1->rdi;
    VAR_2->rsi = VAR_1->rsi;
    VAR_2->rbp = VAR_1->rbp;
    VAR_2->r8 = VAR_1->r8;
    VAR_2->r9 = VAR_1->r9;
    VAR_2->r10 = VAR_1->r10;
    VAR_2->r11 = VAR_1->r11;
    VAR_2->r12 = VAR_1->r12;
    VAR_2->r13 = VAR_1->r13;
    VAR_2->r14 = VAR_1->r14;
    VAR_2->r15 = VAR_1->r15;

    VAR_2->isf.rflags = VAR_1->rflags;
    VAR_2->isf.rsp = VAR_1->rsp;
    VAR_2->isf.rip = VAR_1->rip;

    VAR_2->fs = (uint32_t)VAR_1->fs;
    VAR_2->gs = (uint32_t)VAR_1->gs;
}
