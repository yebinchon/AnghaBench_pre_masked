
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sysenter_eip; int sysenter_esp; int sysenter_cs; int sfmask; int cstar; int lstar; int star; int kernel_gs_base; int ldtr; int tr; int gs; int fs; } ;
struct vmcb {TYPE_1__ save; } ;



__attribute__((used)) static void FUNC_0(struct vmcb *VAR_0, struct vmcb *VAR_1)
{
 VAR_1->save.fs = VAR_0->save.fs;
 VAR_1->save.gs = VAR_0->save.gs;
 VAR_1->save.tr = VAR_0->save.tr;
 VAR_1->save.ldtr = VAR_0->save.ldtr;
 VAR_1->save.kernel_gs_base = VAR_0->save.kernel_gs_base;
 VAR_1->save.star = VAR_0->save.star;
 VAR_1->save.lstar = VAR_0->save.lstar;
 VAR_1->save.cstar = VAR_0->save.cstar;
 VAR_1->save.sfmask = VAR_0->save.sfmask;
 VAR_1->save.sysenter_cs = VAR_0->save.sysenter_cs;
 VAR_1->save.sysenter_esp = VAR_0->save.sysenter_esp;
 VAR_1->save.sysenter_eip = VAR_0->save.sysenter_eip;
}
