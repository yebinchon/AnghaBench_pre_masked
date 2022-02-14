
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cpu; } ;
struct vcpu_vmx {TYPE_1__ vcpu; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ,struct vcpu_vmx*,int) ;

__attribute__((used)) static void FUNC_1(struct vcpu_vmx *VAR_1)
{
 if (VAR_1->vcpu.cpu == -1)
  return;
 FUNC_0(VAR_1->vcpu.cpu, VAR_0, VAR_1, 1);
}
