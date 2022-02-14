
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vcpu_svm {TYPE_2__* vmcb; scalar_t__ asid_generation; } ;
struct svm_cpu_data {int next_asid; int max_asid; scalar_t__ asid_generation; } ;
struct TYPE_3__ {int asid; int tlb_ctl; } ;
struct TYPE_4__ {TYPE_1__ control; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,int ) ;

__attribute__((used)) static void FUNC_1(struct vcpu_svm *VAR_2, struct svm_cpu_data *VAR_3)
{
 if (VAR_3->next_asid > VAR_3->max_asid) {
  ++VAR_3->asid_generation;
  VAR_3->next_asid = 1;
  VAR_2->vmcb->control.tlb_ctl = VAR_0;
 }

 VAR_2->asid_generation = VAR_3->asid_generation;
 VAR_2->vmcb->control.asid = VAR_3->next_asid++;

 FUNC_0(VAR_2->vmcb, VAR_1);
}
