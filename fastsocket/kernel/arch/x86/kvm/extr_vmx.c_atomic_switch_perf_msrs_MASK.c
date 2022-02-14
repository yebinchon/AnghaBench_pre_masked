
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vcpu_vmx {int dummy; } ;
struct perf_guest_switch_msr {scalar_t__ host; scalar_t__ guest; int msr; } ;


 int FUNC_0 (struct vcpu_vmx*,int ,scalar_t__,scalar_t__) ;
 int FUNC_1 (struct vcpu_vmx*,int ) ;
 struct perf_guest_switch_msr* FUNC_2 (int*) ;

__attribute__((used)) static void FUNC_3(struct vcpu_vmx *VAR_0)
{
 int VAR_1, VAR_2;
 struct perf_guest_switch_msr *VAR_3;

 VAR_3 = FUNC_2(&VAR_2);

 if (!VAR_3)
  return;

 for (VAR_1 = 0; VAR_1 < VAR_2; VAR_1++)
  if (VAR_3[VAR_1].host == VAR_3[VAR_1].guest)
   FUNC_1(VAR_0, VAR_3[VAR_1].msr);
  else
   FUNC_0(VAR_0, VAR_3[VAR_1].msr, VAR_3[VAR_1].guest,
     VAR_3[VAR_1].host);
}
