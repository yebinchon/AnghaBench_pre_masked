
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct kvm_vcpu {int dummy; } ;
struct TYPE_4__ {unsigned long r1; int cr3; } ;
struct TYPE_5__ {TYPE_1__ M33; } ;
typedef TYPE_2__ INST64 ;


 unsigned long FUNC_0 (struct kvm_vcpu*,int ) ;
 unsigned long FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (struct kvm_vcpu*,unsigned long,unsigned long,int ) ;
 int * VAR_0 ;

unsigned long FUNC_3(struct kvm_vcpu *VAR_1, INST64 VAR_2)
{
 unsigned long VAR_3 = VAR_2.M33.r1;
 unsigned long VAR_4;

 switch (VAR_2.M33.cr3) {
 case 65:
  VAR_4 = FUNC_1(VAR_1);
  FUNC_2(VAR_1, VAR_3, VAR_4, 0);
  break;

 case 67:
  FUNC_2(VAR_1, VAR_3, 0L, 0);
  break;
 default:
  VAR_4 = FUNC_0(VAR_1, VAR_0[VAR_2.M33.cr3]);
  FUNC_2(VAR_1, VAR_3, VAR_4, 0);
  break;
 }

 return 0;
}
