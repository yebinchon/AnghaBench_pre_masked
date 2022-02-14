
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_16__ {int exit_userspace; } ;
struct TYPE_15__ {TYPE_6__* sie_block; } ;
struct kvm_vcpu {size_t vcpu_id; TYPE_8__ stat; scalar_t__ sigset_active; TYPE_7__ arch; TYPE_3__* kvm; int sigset; scalar_t__ requests; } ;
struct TYPE_12__ {int ipb; int ipa; int icptcode; } ;
struct kvm_run {int exit_reason; int psw_addr; int psw_mask; TYPE_4__ s390_sieic; } ;
typedef int sigset_t ;
struct TYPE_13__ {int addr; int mask; } ;
struct TYPE_14__ {TYPE_5__ gpsw; int ipb; int ipa; int icptcode; int cpuflags; int gmslm; } ;
struct TYPE_9__ {int ** local_int; } ;
struct TYPE_10__ {TYPE_1__ float_int; } ;
struct TYPE_11__ {TYPE_2__ arch; } ;


 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;




 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct kvm_vcpu*,int,char*,char*) ;
 int FUNC_3 (struct kvm_vcpu*) ;
 int FUNC_4 (int ,int *) ;
 int VAR_8 ;
 int FUNC_5 (struct kvm_vcpu*) ;
 int FUNC_6 (struct kvm_vcpu*) ;
 int FUNC_7 () ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int ,int *,int *) ;
 scalar_t__ FUNC_10 (int ,scalar_t__*) ;
 int FUNC_11 (struct kvm_vcpu*) ;
 int FUNC_12 (struct kvm_vcpu*) ;

int FUNC_13(struct kvm_vcpu *VAR_9, struct kvm_run *VAR_10)
{
 int VAR_11;
 sigset_t VAR_12;

 FUNC_11(VAR_9);

rerun_vcpu:
 if (VAR_9->requests)
  if (FUNC_10(VAR_5, &VAR_9->requests))
   FUNC_6(VAR_9);


 if (!VAR_9->arch.sie_block->gmslm) {
  FUNC_12(VAR_9);
  FUNC_2(VAR_9, 3, "%s", "no memory registered to run vcpu");
  return -VAR_2;
 }

 if (VAR_9->sigset_active)
  FUNC_9(VAR_7, &VAR_9->sigset, &VAR_12);

 FUNC_4(VAR_0, &VAR_9->arch.sie_block->cpuflags);

 FUNC_1(VAR_9->kvm->arch.float_int.local_int[VAR_9->vcpu_id] == ((void*)0));

 switch (VAR_10->exit_reason) {
 case 129:
 case 128:
 case 131:
 case 130:
  break;
 default:
  FUNC_0();
 }

 VAR_9->arch.sie_block->gpsw.mask = VAR_10->psw_mask;
 VAR_9->arch.sie_block->gpsw.addr = VAR_10->psw_addr;

 FUNC_7();

 do {
  FUNC_3(VAR_9);
  VAR_11 = FUNC_5(VAR_9);
 } while (!FUNC_8(VAR_8) && !VAR_11);

 if (VAR_11 == VAR_6)
  goto rerun_vcpu;

 if (FUNC_8(VAR_8) && !VAR_11) {
  VAR_10->exit_reason = 131;
  VAR_11 = -VAR_1;
 }

 if (VAR_11 == -VAR_3) {

  VAR_10->exit_reason = 129;
  VAR_10->s390_sieic.icptcode = VAR_9->arch.sie_block->icptcode;
  VAR_10->s390_sieic.ipa = VAR_9->arch.sie_block->ipa;
  VAR_10->s390_sieic.ipb = VAR_9->arch.sie_block->ipb;
  VAR_11 = 0;
 }

 if (VAR_11 == -VAR_4) {


  VAR_11 = 0;
 }

 VAR_10->psw_mask = VAR_9->arch.sie_block->gpsw.mask;
 VAR_10->psw_addr = VAR_9->arch.sie_block->gpsw.addr;

 if (VAR_9->sigset_active)
  FUNC_9(VAR_7, &VAR_12, ((void*)0));

 FUNC_12(VAR_9);

 VAR_9->stat.exit_userspace++;
 return VAR_11;
}
