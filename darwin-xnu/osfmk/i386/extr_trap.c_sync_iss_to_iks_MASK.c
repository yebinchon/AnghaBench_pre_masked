
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_8__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ flavor; } ;
typedef TYPE_2__ x86_saved_state_t ;
struct TYPE_11__ {int rip; int rsp; } ;
struct TYPE_13__ {TYPE_1__ isf; int r15; int r14; int r13; int r12; int rbp; int rbx; } ;
typedef TYPE_3__ x86_saved_state64_t ;
typedef int vm_offset_t ;
struct x86_kernel_state {int k_rip; int k_r15; int k_r14; int k_r13; int k_r12; int k_rbp; int k_rsp; int k_rbx; } ;
typedef scalar_t__ boolean_t ;
struct TYPE_14__ {int kernel_stack; } ;


 scalar_t__ VAR_0 ;
 struct x86_kernel_state* FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_3__* FUNC_1 (TYPE_8__*) ;
 TYPE_8__* FUNC_2 () ;
 int FUNC_3 (TYPE_2__*) ;
 TYPE_3__* FUNC_4 (TYPE_2__*) ;

void
FUNC_5(x86_saved_state_t *VAR_3)
{
 struct x86_kernel_state *VAR_4 = ((void*)0);
 vm_offset_t VAR_5;
 boolean_t VAR_6 = VAR_0;


 if (VAR_3 && VAR_3->flavor == VAR_1)
  FUNC_3( VAR_3 );

 if (FUNC_2() != ((void*)0) &&
     (VAR_5 = FUNC_2()->kernel_stack) != 0) {
  x86_saved_state64_t *VAR_7 = FUNC_4(VAR_3);

  VAR_4 = FUNC_0(VAR_5);


  if (VAR_3 == ((void*)0) ||
      VAR_7 == FUNC_1(FUNC_2()))
          VAR_6 = VAR_2;
  else {
   VAR_4->k_rbx = VAR_7->rbx;
   VAR_4->k_rsp = VAR_7->isf.rsp;
   VAR_4->k_rbp = VAR_7->rbp;
   VAR_4->k_r12 = VAR_7->r12;
   VAR_4->k_r13 = VAR_7->r13;
   VAR_4->k_r14 = VAR_7->r14;
   VAR_4->k_r15 = VAR_7->r15;
   VAR_4->k_rip = VAR_7->isf.rip;
  }
 }

 if (VAR_6 == VAR_2) {

  __asm__ volatile("movq %%rbx, %0" : "=m" (VAR_4->k_rbx));
  __asm__ volatile("movq %%rsp, %0" : "=m" (VAR_4->k_rsp));
  __asm__ volatile("movq %%rbp, %0" : "=m" (VAR_4->k_rbp));
  __asm__ volatile("movq %%r12, %0" : "=m" (VAR_4->k_r12));
  __asm__ volatile("movq %%r13, %0" : "=m" (VAR_4->k_r13));
  __asm__ volatile("movq %%r14, %0" : "=m" (VAR_4->k_r14));
  __asm__ volatile("movq %%r15, %0" : "=m" (VAR_4->k_r15));

  __asm__ volatile("leaq 1f(%%rip), %%rax; mov %%rax, %0\n1:"
     : "=m" (VAR_4->k_rip)
     :
     : "rax");
 }
}
