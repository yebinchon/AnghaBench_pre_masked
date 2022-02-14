
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_vcpu {int dummy; } ;
struct kvm_segment {unsigned int selector; int type; unsigned int dpl; int present; int s; scalar_t__ unusable; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (struct kvm_vcpu*,struct kvm_segment*,int) ;

__attribute__((used)) static bool FUNC_1(struct kvm_vcpu *VAR_3, int VAR_4)
{
 struct kvm_segment VAR_5;
 unsigned int VAR_6;

 FUNC_0(VAR_3, &VAR_5, VAR_4);
 VAR_6 = VAR_5.selector & VAR_2;

 if (VAR_5.unusable)
  return 1;
 if (!VAR_5.s)
  return 0;
 if (!VAR_5.present)
  return 0;
 if (~VAR_5.type & (VAR_0|VAR_1)) {
  if (VAR_5.dpl < VAR_6)
   return 0;
 }




 return 1;
}
