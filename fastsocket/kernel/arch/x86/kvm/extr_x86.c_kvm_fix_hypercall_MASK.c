
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvm_vcpu {int kvm; } ;
struct TYPE_2__ {int (* patch_hypercall ) (struct kvm_vcpu*,char*) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (unsigned long,char*,int,struct kvm_vcpu*) ;
 int FUNC_1 (int ) ;
 unsigned long FUNC_2 (struct kvm_vcpu*) ;
 TYPE_1__* VAR_2 ;
 int FUNC_3 (struct kvm_vcpu*,char*) ;

int FUNC_4(struct kvm_vcpu *VAR_3)
{
 char VAR_4[3];
 int VAR_5 = 0;
 unsigned long VAR_6 = FUNC_2(VAR_3);







 FUNC_1(VAR_3->kvm);

 VAR_2->patch_hypercall(VAR_3, VAR_4);
 if (FUNC_0(VAR_6, VAR_4, 3, VAR_3)
     != VAR_1)
  VAR_5 = -VAR_0;

 return VAR_5;
}
