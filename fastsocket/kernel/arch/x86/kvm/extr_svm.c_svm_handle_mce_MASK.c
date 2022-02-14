
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int requests; } ;
struct vcpu_svm {TYPE_1__ vcpu; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static void FUNC_3(struct vcpu_svm *VAR_1)
{
 if (FUNC_0()) {




  FUNC_1("KVM: Guest triggered AMD Erratum 383\n");

  FUNC_2(VAR_0, &VAR_1->vcpu.requests);

  return;
 }





 asm volatile (
  "int $0x12\n");


 return;
}
