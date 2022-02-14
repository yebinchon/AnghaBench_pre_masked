
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ rsp; } ;
struct TYPE_7__ {scalar_t__ rdi; uintptr_t rsi; int r8; int rcx; int rdx; TYPE_1__ isf; } ;
typedef TYPE_2__ x86_saved_state64_t ;
typedef int uint64_t ;
struct TYPE_8__ {scalar_t__ fbtp_roffset; int fbtp_rval; int fbtp_id; scalar_t__ fbtp_patchpoint; struct TYPE_8__* fbtp_hashnext; } ;
typedef TYPE_3__ fbt_probe_t ;
struct TYPE_9__ {uintptr_t cpu_dtrace_caller; } ;


 TYPE_5__* VAR_0 ;
 size_t FUNC_0 (uintptr_t) ;
 int FUNC_1 (int ,scalar_t__,uintptr_t,int ,int ,int ) ;
 TYPE_3__** VAR_1 ;

int
FUNC_2(uintptr_t VAR_2, uintptr_t *VAR_3, uintptr_t VAR_4)
{
 fbt_probe_t *VAR_5 = VAR_1[FUNC_0(VAR_2)];

 for (; VAR_5 != ((void*)0); VAR_5 = VAR_5->fbtp_hashnext) {
  if ((uintptr_t)VAR_5->fbtp_patchpoint == VAR_2) {

   if (VAR_5->fbtp_roffset == 0) {
    x86_saved_state64_t *VAR_6 = (x86_saved_state64_t *)VAR_3;

    VAR_0->cpu_dtrace_caller = *(uintptr_t *)(((uintptr_t)(VAR_6->isf.rsp))+sizeof(uint64_t));

    FUNC_1(VAR_5->fbtp_id, VAR_6->rdi, VAR_6->rsi, VAR_6->rdx, VAR_6->rcx, VAR_6->r8);
    VAR_0->cpu_dtrace_caller = 0;
   } else {

    FUNC_1(VAR_5->fbtp_id, VAR_5->fbtp_roffset, VAR_4, 0, 0, 0);
    VAR_0->cpu_dtrace_caller = 0;
   }

   return (VAR_5->fbtp_rval);
  }
 }

 return (0);
}
