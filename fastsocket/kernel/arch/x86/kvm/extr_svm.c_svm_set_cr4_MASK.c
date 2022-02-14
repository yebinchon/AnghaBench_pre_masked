
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {unsigned long cr4; } ;
struct kvm_vcpu {TYPE_2__ arch; } ;
struct TYPE_5__ {unsigned long cr4; } ;
struct TYPE_8__ {TYPE_1__ save; } ;
struct TYPE_7__ {TYPE_4__* vmcb; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int FUNC_0 (TYPE_4__*,int ) ;
 scalar_t__ VAR_4 ;
 unsigned long FUNC_1 () ;
 int FUNC_2 (struct kvm_vcpu*) ;
 TYPE_3__* FUNC_3 (struct kvm_vcpu*) ;

__attribute__((used)) static void FUNC_4(struct kvm_vcpu *VAR_5, unsigned long VAR_6)
{
 unsigned long VAR_7 = FUNC_1() & VAR_1;
 unsigned long VAR_8 = FUNC_3(VAR_5)->vmcb->save.cr4;

 if (VAR_4 && ((VAR_8 ^ VAR_6) & VAR_3))
  FUNC_2(VAR_5);

 VAR_5->arch.cr4 = VAR_6;
 if (!VAR_4)
  VAR_6 |= VAR_2;
 VAR_6 |= VAR_7;
 FUNC_3(VAR_5)->vmcb->save.cr4 = VAR_6;
 FUNC_0(FUNC_3(VAR_5)->vmcb, VAR_0);
}
