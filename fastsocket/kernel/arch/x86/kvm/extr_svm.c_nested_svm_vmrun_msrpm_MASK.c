
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {int* msrpm; int vmcb_msrpm; } ;
struct vcpu_svm {int* msrpm; TYPE_3__ nested; TYPE_2__* vmcb; } ;
struct TYPE_4__ {int msrpm_base_pa; } ;
struct TYPE_5__ {TYPE_1__ control; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int*) ;
 int* FUNC_1 (struct vcpu_svm*,int ,int ) ;
 int FUNC_2 (int*,int ) ;

__attribute__((used)) static bool FUNC_3(struct vcpu_svm *VAR_3)
{
 u32 *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_1(VAR_3, VAR_3->nested.vmcb_msrpm, VAR_0);
 if (!VAR_4)
  return 0;

 for (VAR_5=0; VAR_5< VAR_2 * (1 << VAR_1) / 4; VAR_5++)
  VAR_3->nested.msrpm[VAR_5] = VAR_3->msrpm[VAR_5] | VAR_4[VAR_5];

 VAR_3->vmcb->control.msrpm_base_pa = FUNC_0(VAR_3->nested.msrpm);

 FUNC_2(VAR_4, VAR_0);

 return 1;
}
