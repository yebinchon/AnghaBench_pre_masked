
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int host_state_reload; } ;
struct TYPE_9__ {TYPE_1__ stat; } ;
struct TYPE_8__ {int gs_sel; int ldt_sel; scalar_t__ gs_ldt_reload_needed; int fs_sel; scalar_t__ fs_reload_needed; scalar_t__ loaded; } ;
struct vcpu_vmx {int msr_host_kernel_gs_base; int msr_guest_kernel_gs_base; TYPE_4__ vcpu; TYPE_3__ host_state; } ;
struct TYPE_7__ {int gs; } ;
struct TYPE_10__ {TYPE_2__ thread; } ;


 int VAR_0 ;
 TYPE_5__* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 () ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static void FUNC_7(struct vcpu_vmx *VAR_4)
{
 if (!VAR_4->host_state.loaded)
  return;

 ++VAR_4->vcpu.stat.host_state_reload;
 VAR_4->host_state.loaded = 0;
 if (VAR_4->host_state.fs_reload_needed)
  FUNC_3(VAR_2, VAR_4->host_state.fs_sel);
 if (VAR_4->host_state.gs_ldt_reload_needed) {
  FUNC_1(VAR_4->host_state.ldt_sel);




  FUNC_3(VAR_3, VAR_4->host_state.gs_sel);

 }
 FUNC_5();






}
