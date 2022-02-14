
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_vcpu {int dummy; } ;
struct kvm_segment {int selector; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct kvm_vcpu*,struct kvm_segment*,int ) ;

__attribute__((used)) static bool FUNC_1(struct kvm_vcpu *VAR_3)
{
 struct kvm_segment VAR_4, VAR_5;

 FUNC_0(VAR_3, &VAR_4, VAR_1);
 FUNC_0(VAR_3, &VAR_5, VAR_2);

 return ((VAR_4.selector & VAR_0) ==
   (VAR_5.selector & VAR_0));
}
