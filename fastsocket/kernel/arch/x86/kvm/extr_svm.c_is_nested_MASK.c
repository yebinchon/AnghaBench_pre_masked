
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int vmcb; } ;
struct vcpu_svm {TYPE_1__ nested; } ;



__attribute__((used)) static inline bool FUNC_0(struct vcpu_svm *VAR_0)
{
 return VAR_0->nested.vmcb;
}
