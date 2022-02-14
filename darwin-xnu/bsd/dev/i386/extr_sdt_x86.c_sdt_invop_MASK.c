
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int r8; int rcx; int rdx; int rsi; int rdi; } ;
typedef TYPE_1__ x86_saved_state64_t ;
struct TYPE_5__ {int sdp_id; scalar_t__ sdp_patchpoint; struct TYPE_5__* sdp_hashnext; } ;
typedef TYPE_2__ sdt_probe_t ;


 int VAR_0 ;
 size_t FUNC_0 (uintptr_t) ;
 int FUNC_1 (int ,int ,int ,int ,int ,int ) ;
 TYPE_2__** VAR_1 ;

int
FUNC_2(uintptr_t VAR_2, uintptr_t *VAR_3, uintptr_t VAR_4)
{
#pragma unused(eax)
 sdt_probe_t *VAR_5 = VAR_1[FUNC_0(VAR_2)];

 for (; VAR_5 != ((void*)0); VAR_5 = VAR_5->sdp_hashnext) {
  if ((uintptr_t)VAR_5->sdp_patchpoint == VAR_2) {
   x86_saved_state64_t *VAR_6 = (x86_saved_state64_t *)VAR_3;

   FUNC_1(VAR_5->sdp_id, VAR_6->rdi, VAR_6->rsi, VAR_6->rdx, VAR_6->rcx, VAR_6->r8);

   return (VAR_0);
  }
 }

 return (0);
}
