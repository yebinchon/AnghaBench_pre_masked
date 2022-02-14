
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int loaded; int ldt_sel; int gs_ldt_reload_needed; int fs_sel; int fs_reload_needed; int gs_sel; } ;
struct vcpu_vmx {int save_nmsrs; TYPE_2__* guest_msrs; int msr_guest_kernel_gs_base; int msr_host_kernel_gs_base; int vcpu; TYPE_1__ host_state; } ;
struct kvm_vcpu {int dummy; } ;
struct TYPE_4__ {int mask; int data; int index; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int) ;
 struct vcpu_vmx* FUNC_7 (struct kvm_vcpu*) ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,int ) ;

__attribute__((used)) static void FUNC_11(struct kvm_vcpu *VAR_9)
{
 struct vcpu_vmx *VAR_10 = FUNC_7(VAR_9);
 int VAR_11;

 if (VAR_10->host_state.loaded)
  return;

 VAR_10->host_state.loaded = 1;




 VAR_10->host_state.ldt_sel = FUNC_1();
 VAR_10->host_state.gs_ldt_reload_needed = VAR_10->host_state.ldt_sel;
 FUNC_5(VAR_7, VAR_10->host_state.fs_sel);
 if (!(VAR_10->host_state.fs_sel & 7)) {
  FUNC_8(VAR_1, VAR_10->host_state.fs_sel);
  VAR_10->host_state.fs_reload_needed = 0;
 } else {
  FUNC_8(VAR_1, 0);
  VAR_10->host_state.fs_reload_needed = 1;
 }
 FUNC_5(VAR_8, VAR_10->host_state.gs_sel);
 if (!(VAR_10->host_state.gs_sel & 7))
  FUNC_8(VAR_3, VAR_10->host_state.gs_sel);
 else {
  FUNC_8(VAR_3, 0);
  VAR_10->host_state.gs_ldt_reload_needed = 1;
 }





 FUNC_9(VAR_0, FUNC_6(VAR_10->host_state.fs_sel));
 FUNC_9(VAR_2, FUNC_6(VAR_10->host_state.gs_sel));
 for (VAR_11 = 0; VAR_11 < VAR_10->save_nmsrs; ++VAR_11)
  FUNC_2(VAR_10->guest_msrs[VAR_11].index,
       VAR_10->guest_msrs[VAR_11].data,
       VAR_10->guest_msrs[VAR_11].mask);
}
