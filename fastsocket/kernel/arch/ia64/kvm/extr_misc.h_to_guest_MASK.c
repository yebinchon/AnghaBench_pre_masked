
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ vm_base; } ;
struct kvm {TYPE_1__ arch; } ;
typedef scalar_t__ addr ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static inline void *FUNC_0(struct kvm *VAR_1, void *VAR_2)
{
 return (void *)((unsigned long)(VAR_2) - VAR_1->arch.vm_base +
   VAR_0);
}
