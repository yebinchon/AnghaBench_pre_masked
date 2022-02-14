
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int hypercalls; } ;
struct kvm_vcpu {TYPE_1__ stat; } ;
struct TYPE_4__ {scalar_t__ (* get_cpl ) (struct kvm_vcpu*) ;} ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct kvm_vcpu*,unsigned long,unsigned long) ;
 int FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (struct kvm_vcpu*,unsigned long,int ,unsigned long*) ;
 unsigned long FUNC_3 (struct kvm_vcpu*,int ) ;
 int FUNC_4 (struct kvm_vcpu*,int ,unsigned long) ;
 TYPE_2__* VAR_7 ;
 scalar_t__ FUNC_5 (struct kvm_vcpu*) ;
 int FUNC_6 (unsigned long,unsigned long,unsigned long,unsigned long,unsigned long) ;

int FUNC_7(struct kvm_vcpu *VAR_8)
{
 unsigned long VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;
 int VAR_15 = 1;

 VAR_9 = FUNC_3(VAR_8, VAR_2);
 VAR_10 = FUNC_3(VAR_8, VAR_3);
 VAR_11 = FUNC_3(VAR_8, VAR_4);
 VAR_12 = FUNC_3(VAR_8, VAR_5);
 VAR_13 = FUNC_3(VAR_8, VAR_6);

 FUNC_6(VAR_9, VAR_10, VAR_11, VAR_12, VAR_13);

 if (!FUNC_1(VAR_8)) {
  VAR_9 &= 0xFFFFFFFF;
  VAR_10 &= 0xFFFFFFFF;
  VAR_11 &= 0xFFFFFFFF;
  VAR_12 &= 0xFFFFFFFF;
  VAR_13 &= 0xFFFFFFFF;
 }

 if (VAR_7->get_cpl(VAR_8) != 0) {
  VAR_14 = -VAR_1;
  goto out;
 }

 switch (VAR_9) {
 case 128:
  VAR_14 = 0;
  break;
 case 129:
  VAR_15 = FUNC_2(VAR_8, VAR_10, FUNC_0(VAR_8, VAR_11, VAR_12), &VAR_14);
  break;
 default:
  VAR_14 = -VAR_0;
  break;
 }
out:
 FUNC_4(VAR_8, VAR_2, VAR_14);
 ++VAR_8->stat.hypercalls;
 return VAR_15;
}
