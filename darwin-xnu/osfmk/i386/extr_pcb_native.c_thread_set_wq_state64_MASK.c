
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int rsp; int rip; int r9; int r8; int rcx; int rdx; int rsi; int rdi; } ;
typedef TYPE_2__ x86_thread_state64_t ;
struct TYPE_5__ {int rflags; int cs; int rsp; int rip; } ;
struct TYPE_7__ {TYPE_1__ isf; int r9; int r8; int rcx; int rdx; int rsi; int rdi; scalar_t__ rbp; } ;
typedef TYPE_3__ x86_saved_state64_t ;
typedef scalar_t__ thread_t ;
typedef scalar_t__ thread_state_t ;
typedef int spl_t ;
typedef int kern_return_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_3__* FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__) ;

kern_return_t
FUNC_8(thread_t VAR_5, thread_state_t VAR_6)
{
        x86_thread_state64_t *VAR_7;
        x86_saved_state64_t *VAR_8;
 thread_t VAR_9 = FUNC_2();
 spl_t VAR_10=0;

 VAR_8 = FUNC_1(VAR_5);
 VAR_7 = (x86_thread_state64_t *)VAR_6;


 if (!FUNC_0(VAR_7->rsp) ||
     !FUNC_0(VAR_7->rip)) {
  return VAR_2;
 }

 FUNC_3(VAR_5, VAR_0);

 if (VAR_9 != VAR_5) {
  VAR_10 = FUNC_4();
         FUNC_6(VAR_5);
 }

 VAR_8->rbp = 0;
 VAR_8->rdi = VAR_7->rdi;
 VAR_8->rsi = VAR_7->rsi;
 VAR_8->rdx = VAR_7->rdx;
 VAR_8->rcx = VAR_7->rcx;
 VAR_8->r8 = VAR_7->r8;
 VAR_8->r9 = VAR_7->r9;

 VAR_8->isf.rip = VAR_7->rip;
 VAR_8->isf.rsp = VAR_7->rsp;
 VAR_8->isf.cs = VAR_4;
 VAR_8->isf.rflags = VAR_1;

 if (VAR_9 != VAR_5) {
         FUNC_7(VAR_5);
  FUNC_5(VAR_10);
 }

 return VAR_3;
}
