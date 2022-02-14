
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int rflags; scalar_t__ gs; scalar_t__ fs; int rip; int rsp; int rbp; int rsi; int rdi; int rdx; int rcx; int rbx; int rax; int r15; int r14; int r13; int r12; int r11; int r10; int r9; int r8; } ;
typedef TYPE_2__ x86_thread_state64_t ;
struct TYPE_6__ {int rflags; int cs; int rip; int rsp; } ;
struct TYPE_8__ {void* gs; void* fs; TYPE_1__ isf; int rbp; int rsi; int rdi; int rdx; int rcx; int rbx; int rax; int r15; int r14; int r13; int r12; int r11; int r10; int r9; int r8; } ;
typedef TYPE_3__ x86_saved_state64_t ;
typedef void* uint32_t ;
typedef int thread_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_3__* FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int
FUNC_3(thread_t VAR_6, x86_thread_state64_t *VAR_7)
{
        x86_saved_state64_t *VAR_8;

 FUNC_2(VAR_6, VAR_0);

 VAR_8 = FUNC_1(VAR_6);

 if (!FUNC_0(VAR_7->rsp) ||
     !FUNC_0(VAR_7->rip))
  return(VAR_3);

 VAR_8->r8 = VAR_7->r8;
 VAR_8->r9 = VAR_7->r9;
 VAR_8->r10 = VAR_7->r10;
 VAR_8->r11 = VAR_7->r11;
 VAR_8->r12 = VAR_7->r12;
 VAR_8->r13 = VAR_7->r13;
 VAR_8->r14 = VAR_7->r14;
 VAR_8->r15 = VAR_7->r15;
 VAR_8->rax = VAR_7->rax;
 VAR_8->rbx = VAR_7->rbx;
 VAR_8->rcx = VAR_7->rcx;
 VAR_8->rdx = VAR_7->rdx;
 VAR_8->rdi = VAR_7->rdi;
 VAR_8->rsi = VAR_7->rsi;
 VAR_8->rbp = VAR_7->rbp;
 VAR_8->isf.rsp = VAR_7->rsp;
 VAR_8->isf.rflags = (VAR_7->rflags & ~VAR_1) | VAR_2;
 VAR_8->isf.rip = VAR_7->rip;
 VAR_8->isf.cs = VAR_5;
 VAR_8->fs = (uint32_t)VAR_7->fs;
 VAR_8->gs = (uint32_t)VAR_7->gs;

 return(VAR_4);
}
