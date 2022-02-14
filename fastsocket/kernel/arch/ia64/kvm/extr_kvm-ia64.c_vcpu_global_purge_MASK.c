
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ ptc_g_count; int * ptc_g_data; } ;
struct kvm_vcpu {int requests; TYPE_1__ arch; } ;
struct call_data {int ptc_g_data; struct kvm_vcpu* vcpu; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int *) ;
 scalar_t__ FUNC_2 (int ,int *) ;

__attribute__((used)) static void FUNC_3(void *VAR_3)
{
 struct call_data *VAR_4 = (struct call_data *)VAR_3;
 struct kvm_vcpu *VAR_5 = VAR_4->vcpu;

 if (FUNC_2(VAR_1, &VAR_5->requests))
  return;

 FUNC_1(VAR_0, &VAR_5->requests);
 if (VAR_5->arch.ptc_g_count < VAR_2) {
  VAR_5->arch.ptc_g_data[VAR_5->arch.ptc_g_count++] =
       VAR_4->ptc_g_data;
 } else {
  FUNC_0(VAR_0, &VAR_5->requests);
  VAR_5->arch.ptc_g_count = 0;
  FUNC_1(VAR_1, &VAR_5->requests);
 }
}
