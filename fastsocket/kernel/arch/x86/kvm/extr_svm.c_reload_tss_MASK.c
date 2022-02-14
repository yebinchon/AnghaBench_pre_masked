
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct svm_cpu_data {TYPE_1__* tss_desc; } ;
struct kvm_vcpu {int dummy; } ;
struct TYPE_2__ {int type; } ;


 int FUNC_0 () ;
 struct svm_cpu_data* FUNC_1 (int ,int) ;
 int FUNC_2 () ;
 struct svm_cpu_data* VAR_0 ;

__attribute__((used)) static void FUNC_3(struct kvm_vcpu *VAR_1)
{
 int VAR_2 = FUNC_2();

 struct svm_cpu_data *VAR_3 = FUNC_1(VAR_3, VAR_2);
 VAR_3->tss_desc->type = 9;
 FUNC_0();
}
