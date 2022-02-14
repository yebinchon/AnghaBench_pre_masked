
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvm_lapic {TYPE_1__* vcpu; scalar_t__ regs; } ;
struct TYPE_2__ {int kvm; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,struct kvm_lapic*) ;
 int FUNC_1 (struct kvm_lapic*) ;
 int FUNC_2 (struct kvm_lapic*,int ) ;
 scalar_t__ FUNC_3 (int,scalar_t__) ;
 int FUNC_4 (struct kvm_lapic*) ;
 scalar_t__ FUNC_5 (int ,int) ;
 int FUNC_6 (int ,int,int) ;
 int FUNC_7 (struct kvm_lapic*,int) ;

__attribute__((used)) static int FUNC_8(struct kvm_lapic *VAR_5)
{
 int VAR_6 = FUNC_1(VAR_5);

 FUNC_7(VAR_5, VAR_6);





 if (VAR_6 == -1)
  return VAR_6;

 FUNC_0(VAR_6, VAR_5);
 FUNC_4(VAR_5);

 if (!(FUNC_2(VAR_5, VAR_0) & VAR_1) &&
     FUNC_5(VAR_5->vcpu->kvm, VAR_6)) {
  int VAR_7;
  if (FUNC_3(VAR_6, VAR_5->regs + VAR_2))
   VAR_7 = VAR_4;
  else
   VAR_7 = VAR_3;
  FUNC_6(VAR_5->vcpu->kvm, VAR_6, VAR_7);
 }
 return VAR_6;
}
