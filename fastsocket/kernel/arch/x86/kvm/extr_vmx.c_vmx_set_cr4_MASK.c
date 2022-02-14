
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {unsigned long cr4; } ;
struct kvm_vcpu {TYPE_2__ arch; } ;
struct TYPE_4__ {scalar_t__ vm86_active; } ;
struct TYPE_6__ {TYPE_1__ rmode; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (unsigned long*,struct kvm_vcpu*) ;
 TYPE_3__* FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (int ,unsigned long) ;

__attribute__((used)) static void FUNC_3(struct kvm_vcpu *VAR_5, unsigned long VAR_6)
{
 unsigned long VAR_7 = VAR_6 | (FUNC_1(VAR_5)->rmode.vm86_active ?
      VAR_3 : VAR_2);

 VAR_5->arch.cr4 = VAR_6;
 if (VAR_4)
  FUNC_0(&VAR_7, VAR_5);

 FUNC_2(VAR_0, VAR_6);
 FUNC_2(VAR_1, VAR_7);
}
