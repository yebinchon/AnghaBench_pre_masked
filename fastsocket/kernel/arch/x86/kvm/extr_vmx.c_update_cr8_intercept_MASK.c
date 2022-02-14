
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_vcpu {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;

__attribute__((used)) static void FUNC_1(struct kvm_vcpu *VAR_1, int VAR_2, int VAR_3)
{
 if (VAR_3 == -1 || VAR_2 < VAR_3) {
  FUNC_0(VAR_0, 0);
  return;
 }

 FUNC_0(VAR_0, VAR_3);
}
