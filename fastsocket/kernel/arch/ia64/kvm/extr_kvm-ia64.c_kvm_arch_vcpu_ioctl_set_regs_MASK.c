
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef union context {int dummy; } context ;
struct vpd {int vpr; int vpsr; int vbnat; int vnat; int vhpi; int * vcr; int * vbgr; int * vgr; } ;
struct thash_data {int dummy; } ;
struct TYPE_4__ {int irq_new_pending; scalar_t__ itc_offset; int * insvc; int * dbr; int * ibr; int * vrr; int * dtrs; int * itrs; int guest; int vpd; } ;
struct kvm_vcpu {int requests; TYPE_2__ arch; int kvm; } ;
struct TYPE_3__ {int vpr; int vpsr; int vbnat; int vnat; int vhpi; int * vcr; int * vbgr; int * vgr; } ;
struct kvm_regs {scalar_t__ saved_itc; int * insvc; int * dbr; int * ibr; int * vrr; int * dtrs; int * itrs; int saved_guest; TYPE_1__ vpd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (struct kvm_vcpu*) ;
 int VAR_8 ;
 int FUNC_2 (int *,int *,int) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_3 (int ,int *) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 struct vpd* FUNC_4 (int ,int ) ;
 int FUNC_5 (struct kvm_vcpu*) ;
 int FUNC_6 (struct kvm_vcpu*) ;
 int VAR_18 ;
 int VAR_19 ;

int FUNC_7(struct kvm_vcpu *VAR_20, struct kvm_regs *VAR_21)
{
 struct vpd *VAR_22 = FUNC_4(VAR_20->kvm, VAR_20->arch.vpd);
 int VAR_23;

 FUNC_5(VAR_20);

 for (VAR_23 = 0; VAR_23 < 16; VAR_23++) {
  VAR_22->vgr[VAR_23] = VAR_21->vpd.vgr[VAR_23];
  VAR_22->vbgr[VAR_23] = VAR_21->vpd.vbgr[VAR_23];
 }
 for (VAR_23 = 0; VAR_23 < 128; VAR_23++)
  VAR_22->vcr[VAR_23] = VAR_21->vpd.vcr[VAR_23];
 VAR_22->vhpi = VAR_21->vpd.vhpi;
 VAR_22->vnat = VAR_21->vpd.vnat;
 VAR_22->vbnat = VAR_21->vpd.vbnat;
 VAR_22->vpsr = VAR_21->vpd.vpsr;

 VAR_22->vpr = VAR_21->vpd.vpr;

 FUNC_2(&VAR_20->arch.guest, &VAR_21->saved_guest, sizeof(union context));

 FUNC_0(VAR_13);
 FUNC_0(VAR_18);
 FUNC_2(VAR_20->arch.itrs, VAR_21->itrs, sizeof(struct thash_data) * VAR_2);
 FUNC_2(VAR_20->arch.dtrs, VAR_21->dtrs, sizeof(struct thash_data) * VAR_1);
 FUNC_0(VAR_7);
 FUNC_0(VAR_3);
 FUNC_0(VAR_15);
 FUNC_0(VAR_5);
 FUNC_0(VAR_6);
 FUNC_0(VAR_16);
 FUNC_0(VAR_17);
 FUNC_0(VAR_8);
 for (VAR_23 = 0; VAR_23 < 8; VAR_23++) {
  VAR_20->arch.vrr[VAR_23] = VAR_21->vrr[VAR_23];
  VAR_20->arch.ibr[VAR_23] = VAR_21->ibr[VAR_23];
  VAR_20->arch.dbr[VAR_23] = VAR_21->dbr[VAR_23];
 }
 for (VAR_23 = 0; VAR_23 < 4; VAR_23++)
  VAR_20->arch.insvc[VAR_23] = VAR_21->insvc[VAR_23];
 FUNC_0(VAR_19);
 FUNC_0(VAR_9);
 FUNC_0(VAR_10);
 FUNC_0(VAR_11);
 FUNC_0(VAR_12);
 FUNC_0(VAR_4);
 FUNC_0(VAR_14);

 VAR_20->arch.irq_new_pending = 1;
 VAR_20->arch.itc_offset = VAR_21->saved_itc - FUNC_1(VAR_20);
 FUNC_3(VAR_0, &VAR_20->requests);

 FUNC_6(VAR_20);

 return 0;
}
