
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_vcpu {int dummy; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned long,void const*,unsigned int,struct kvm_vcpu*) ;

int FUNC_1(unsigned long VAR_2,
       const void *VAR_3,
       unsigned int VAR_4,
       struct kvm_vcpu *VAR_5)
{

 if (((VAR_2 + VAR_4 - 1) ^ VAR_2) & VAR_0) {
  int VAR_6, VAR_7;

  VAR_7 = -VAR_2 & ~VAR_0;
  VAR_6 = FUNC_0(VAR_2, VAR_3, VAR_7, VAR_5);
  if (VAR_6 != VAR_1)
   return VAR_6;
  VAR_2 += VAR_7;
  VAR_3 += VAR_7;
  VAR_4 -= VAR_7;
 }
 return FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5);
}
