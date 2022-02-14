
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int at_port; int* at_addr; } ;
struct TYPE_6__ {int am_success; int am_failure; } ;
struct TYPE_8__ {int ai_auid; int ai_asid; TYPE_2__ ai_termid; TYPE_1__ ai_mask; } ;
struct TYPE_9__ {int cr_uid; int cr_ruid; int cr_svuid; int cr_ngroups; int* cr_groups; int cr_rgid; int cr_svgid; int cr_gmuid; int cr_flags; int cr_label; TYPE_3__ cr_audit; int cr_ref; int credp; } ;
typedef TYPE_4__ debug_ucred ;


 int FUNC_0 (char*,...) ;

void FUNC_1( debug_ucred * VAR_0 )
{
 int VAR_1;
 FUNC_0("%p ", VAR_0->credp);
 FUNC_0("%lu ", VAR_0->cr_ref);
 FUNC_0("%d ", VAR_0->cr_uid);
 FUNC_0("%d ", VAR_0->cr_ruid);
 FUNC_0("%d ", VAR_0->cr_svuid);
 FUNC_0("%d g[", VAR_0->cr_ngroups);
 for (VAR_1 = 0; VAR_1 < VAR_0->cr_ngroups; VAR_1++) {
  FUNC_0("%d", VAR_0->cr_groups[VAR_1]);
  if ( (VAR_1 + 1) < VAR_0->cr_ngroups ) {
   FUNC_0(" ");
  }
 }
 FUNC_0("] %d ", VAR_0->cr_rgid);
 FUNC_0("%d ", VAR_0->cr_svgid);
 FUNC_0("%d ", VAR_0->cr_gmuid);
 FUNC_0("a[%d ", VAR_0->cr_audit.ai_auid);
 FUNC_0("%d ", VAR_0->cr_audit.ai_mask.am_success);
 FUNC_0("%d ", VAR_0->cr_audit.ai_mask.am_failure);
 FUNC_0("%d ", VAR_0->cr_audit.ai_termid.at_port);
 FUNC_0("%d ", VAR_0->cr_audit.ai_termid.at_addr[0]);
 FUNC_0("%d ", VAR_0->cr_audit.ai_asid);
 FUNC_0("] ");
 FUNC_0("%p ", VAR_0->cr_label);
 FUNC_0("0x%08x \n", VAR_0->cr_flags);
 FUNC_0("\n");
 return;
}
