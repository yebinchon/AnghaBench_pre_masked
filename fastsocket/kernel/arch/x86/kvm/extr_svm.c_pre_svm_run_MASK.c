
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vcpu_svm {scalar_t__ asid_generation; } ;
struct svm_cpu_data {scalar_t__ asid_generation; } ;


 int FUNC_0 (struct vcpu_svm*,struct svm_cpu_data*) ;
 struct svm_cpu_data* FUNC_1 (int ,int) ;
 int FUNC_2 () ;
 struct svm_cpu_data* VAR_0 ;

__attribute__((used)) static void FUNC_3(struct vcpu_svm *VAR_1)
{
 int VAR_2 = FUNC_2();

 struct svm_cpu_data *VAR_3 = FUNC_1(VAR_3, VAR_2);


 if (VAR_1->asid_generation != VAR_3->asid_generation)
  FUNC_0(VAR_1, VAR_3);
}
