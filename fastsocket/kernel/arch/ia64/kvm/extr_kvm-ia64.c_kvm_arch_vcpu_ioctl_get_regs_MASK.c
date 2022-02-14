
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef union context {int dummy; } context ;
struct vpd {int vpr; int vpsr; int vbnat; int vnat; int vhpi; int * vcr; int * vbgr; int * vgr; } ;
struct thash_data {int dummy; } ;
struct TYPE_4__ {scalar_t__ itc_offset; int * insvc; int * dbr; int * ibr; int * vrr; int * dtrs; int * itrs; int guest; int vpd; } ;
struct kvm_vcpu {TYPE_2__ arch; int kvm; } ;
struct TYPE_3__ {int vpr; int vpsr; int vbnat; int vnat; int vhpi; int * vcr; int * vbgr; int * vgr; } ;
struct kvm_regs {scalar_t__ saved_itc; int * insvc; int * dbr; int * ibr; int * vrr; int * dtrs; int * itrs; int saved_guest; TYPE_1__ vpd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (struct kvm_vcpu*) ;
 int VAR_7 ;
 int FUNC_2 (int *,int *,int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 struct vpd* FUNC_3 (int ,int ) ;
 int FUNC_4 (struct kvm_vcpu*) ;
 int FUNC_5 (struct kvm_vcpu*) ;
 int VAR_17 ;
 int VAR_18 ;

int FUNC_6(struct kvm_vcpu *VAR_19, struct kvm_regs *VAR_20)
{
 struct vpd *VAR_21 = FUNC_3(VAR_19->kvm, VAR_19->arch.vpd);
 int VAR_22;

 FUNC_4(VAR_19);

 for (VAR_22 = 0; VAR_22 < 16; VAR_22++) {
  VAR_20->vpd.vgr[VAR_22] = VAR_21->vgr[VAR_22];
  VAR_20->vpd.vbgr[VAR_22] = VAR_21->vbgr[VAR_22];
 }
 for (VAR_22 = 0; VAR_22 < 128; VAR_22++)
  VAR_20->vpd.vcr[VAR_22] = VAR_21->vcr[VAR_22];
 VAR_20->vpd.vhpi = VAR_21->vhpi;
 VAR_20->vpd.vnat = VAR_21->vnat;
 VAR_20->vpd.vbnat = VAR_21->vbnat;
 VAR_20->vpd.vpsr = VAR_21->vpsr;
 VAR_20->vpd.vpr = VAR_21->vpr;

 FUNC_2(&VAR_20->saved_guest, &VAR_19->arch.guest, sizeof(union context));

 FUNC_0(VAR_12);
 FUNC_0(VAR_17);
 FUNC_2(VAR_20->itrs, VAR_19->arch.itrs, sizeof(struct thash_data) * VAR_1);
 FUNC_2(VAR_20->dtrs, VAR_19->arch.dtrs, sizeof(struct thash_data) * VAR_0);
 FUNC_0(VAR_6);
 FUNC_0(VAR_2);
 FUNC_0(VAR_14);
 FUNC_0(VAR_4);
 FUNC_0(VAR_5);
 FUNC_0(VAR_15);
 FUNC_0(VAR_16);
 FUNC_0(VAR_7);
 for (VAR_22 = 0; VAR_22 < 8; VAR_22++) {
  VAR_20->vrr[VAR_22] = VAR_19->arch.vrr[VAR_22];
  VAR_20->ibr[VAR_22] = VAR_19->arch.ibr[VAR_22];
  VAR_20->dbr[VAR_22] = VAR_19->arch.dbr[VAR_22];
 }
 for (VAR_22 = 0; VAR_22 < 4; VAR_22++)
  VAR_20->insvc[VAR_22] = VAR_19->arch.insvc[VAR_22];
 VAR_20->saved_itc = VAR_19->arch.itc_offset + FUNC_1(VAR_19);
 FUNC_0(VAR_18);
 FUNC_0(VAR_8);
 FUNC_0(VAR_9);
 FUNC_0(VAR_10);
 FUNC_0(VAR_11);
 FUNC_0(VAR_3);
 FUNC_0(VAR_13);

 FUNC_5(VAR_19);
 return 0;
}
