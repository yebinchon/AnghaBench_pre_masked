
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct kvm_lapic {int dummy; } ;


 int FUNC_0 (struct kvm_lapic*) ;

int FUNC_1(struct kvm_lapic *VAR_0, u16 VAR_1)
{
 return VAR_1 == 0xff || FUNC_0(VAR_0) == VAR_1;
}
