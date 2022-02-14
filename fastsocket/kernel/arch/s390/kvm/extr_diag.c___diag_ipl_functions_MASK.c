
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int* guest_gprs; TYPE_1__* sie_block; } ;
struct kvm_vcpu {TYPE_3__* run; TYPE_2__ arch; } ;
struct TYPE_6__ {unsigned long s390_reset_flags; int exit_reason; } ;
struct TYPE_4__ {int ipa; int cpuflags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 int FUNC_0 (struct kvm_vcpu*,int,char*,unsigned long) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static int FUNC_2(struct kvm_vcpu *VAR_8)
{
 unsigned int VAR_9 = VAR_8->arch.sie_block->ipa & 0xf;
 unsigned long VAR_10 = VAR_8->arch.guest_gprs[VAR_9] & 0xffff;

 FUNC_0(VAR_8, 5, "diag ipl functions, subcode %lx", VAR_10);
 switch (VAR_10) {
 case 3:
  VAR_8->run->s390_reset_flags = VAR_4;
  break;
 case 4:
  VAR_8->run->s390_reset_flags = 0;
  break;
 default:
  return -VAR_1;
 }

 FUNC_1(VAR_0, &VAR_8->arch.sie_block->cpuflags);
 VAR_8->run->s390_reset_flags |= VAR_7;
 VAR_8->run->s390_reset_flags |= VAR_6;
 VAR_8->run->s390_reset_flags |= VAR_5;
 VAR_8->run->exit_reason = VAR_3;
 FUNC_0(VAR_8, 3, "requesting userspace resets %llx",
   VAR_8->run->s390_reset_flags);
 return -VAR_2;
}
